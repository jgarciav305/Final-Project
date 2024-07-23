#include <iostream>
#include "ToDoList.h"

using namespace std;

int main() {
    ToDoList todoList;  // Creates an instance of the ToDoList class
    int choice;

    // Menu loop
    while (true) {
        cout << "\n";  // Adds some spacing between inputs for cleanliness

        // Displays menu options
        cout << "To-Do List Application" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Remove Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Handles user input
        switch (choice) {
            case 1:
                todoList.addTask();  // Adds a new task
            break;
            case 2:
                todoList.viewTasks();  // Views all the tasks
            break;
            case 3:
                todoList.removeTask();  // Removes a specific task
            break;
            case 4:
                cout << "Exiting application." << endl;
            return 0;  // Exits the application
            default:
                cerr << "Invalid choice. Please try again." << endl;  // Handles invalid menu choices
        }
    }
}