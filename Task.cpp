#include "Task.h"

// Constructor implementation
Task::Task(std::string desc, std::string date, int prio)
    : description(std::move(desc)), dueDate(std::move(date)), priority(prio) {}


