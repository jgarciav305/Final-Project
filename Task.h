#ifndef TASK_H
#define TASK_H

#include <string>

// Class to store information about each task
class Task {
public:
    std::string description; // Description of the task
    std::string dueDate; // Due date of the task
    int priority; // Priority level of the task

    // Constructor to initialize a task
    Task(std::string desc, std::string date, int prio);
};

#endif // TASK_H
