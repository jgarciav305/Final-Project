#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include "Task.h"

class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask();
    void viewTasks();
    void removeTask();
};

#endif // TODOLIST_H
