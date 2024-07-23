#include <iostream>
#include <regex>
#include "Task.h"
#include "ToDoList.h"

using namespace std;

// Method to validate the due date format
bool isValidDate(const string &date) {
    // An expression to match the date format YYYY-MM-DD
    const regex datePattern(R"(\d{4}-\d{2}-\d{2})");
    return regex_match(date, datePattern);
}

// Method to add a new task
void ToDoList::addTask() {
    string desc, date;
    int prio;

    cout << "Enter task description: ";
    cin.ignore(); // Clears the buffer
    getline(cin, desc);

    // Loops until a valid date is entered
    do {
        cout << "Enter due date (e.g., 2024-12-31): ";
        getline(cin, date);
        if (!isValidDate(date)) {
            cerr << "Invalid date format. Please use YYYY-MM-DD." << endl;
        }
    } while (!isValidDate(date));

    cout << "Enter priority (1-5): ";
    cin >> prio;

    try {
        // Checks if the priority is within the valid range
        if (prio < 1 || prio > 5) {
            throw invalid_argument("Priority must be between 1 and 5.");
        }

        // Adds the task to the vector
        tasks.emplace_back(desc, date, prio);
        cout << "Task added successfully." << endl;
    } catch (const invalid_argument &e) {
        cerr << "Error: " << e.what() << endl; // Handles invalid priority input
    }
}

// Method to view all tasks
void ToDoList::viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }

    // Displays each task's details
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << "Task " << i + 1 << ": " << endl;
        cout << "  Description: " << tasks[i].description << endl;
        cout << "  Due Date: " << tasks[i].dueDate << endl;
        cout << "  Priority: " << tasks[i].priority << endl;
    }
}

// Method to remove a specific task
void ToDoList::removeTask() {
    int index;

    cout << "Enter the task number to remove: ";
    cin >> index;

    try {
        // Checks if the task number is valid
        if (index < 1 || index > tasks.size()) {
            throw out_of_range("Invalid task number.");
        }

        // Removes the task from the vector
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully." << endl;
    } catch (const out_of_range &e) {
        cerr << "Error: " << e.what() << endl; // Handles invalid task number input
    }
}
