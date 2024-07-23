# To-Do List Application in C++

## Overview
A To-Do List application written in C++ that helps users manage tasks effectively. The application provides features for adding, viewing, and removing tasks, with robust error handling and input validation.

## Features
- **Add Task**: Allows users to add a new task with a description, due date, and priority level.
- **View Tasks**: Displays all tasks with their details.
- **Remove Task**: Enables users to remove a task by specifying its number.
- **Input Validation**: Ensures that the due date is in the correct format (YYYY-MM-DD) and that the priority is between 1 and 5.
- **Robust Error Handling**: Uses exception handling to manage invalid inputs gracefully.

## Requirements
- C++ compiler (e.g., g++)

## File Structure
- `main.cpp`: Contains the main function and menu logic.
- `Task.h`: Header file for the `Task` class.
- `Task.cpp`: Implementation file for the `Task` class.
- `ToDoList.h`: Header file for the `ToDoList` class.
- `todolist.cpp`: Implementation file for the `ToDoList` class.

## Setup Instructions
1. **Clone the repository**:
    ```sh
    git clone <repository_url>
    cd to-do-list-application
    ```
2. **Compile the program**:
    ```sh
    g++ -std=c++11 -o ToDoList main.cpp Task.cpp todolist.cpp
    ```
3. **Run the application**:
    ```sh
    ./ToDoList
    ```

## Usage
1. **Run the application**:
    ```sh
    ./ToDoList
    ```
2. **Follow the on-screen menu** to add, view, or remove tasks:
    - Select `1` to add a task.
    - Select `2` to view all tasks.
    - Select `3` to remove a specific task.
    - Select `4` to exit the application.

## Example
```sh
To-Do List Application
1. Add Task
2. View Tasks
3. Remove Task
4. Exit
Enter your choice: 1
Enter task description: Finish Final Project
Enter due date (e.g., 2024-12-31): 2024-12-31
Enter priority (1-5): 5
Task added successfully.

To-Do List Application
1. Add Task
2. View Tasks
3. Remove Task
4. Exit
Enter your choice: 2
Task 1:
  Description: Finish Final Project
  Due Date: 2024-12-31
  Priority: 5