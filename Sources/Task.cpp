#include <iostream>
#include "Headers/Task.h"

Task::Task(const std::string& name, const std::string& description, int priority){
    setName(name);
    setDescription(description);
    setPriority(priority);
}


void Task::setName(const std::string& name){
    this->name = name;
}

std::string Task::getName() const{
    return this->name;
}

void Task::setDescription(const std::string& description){
    this->description = description;
}

std::string Task::getDescription() const{
    return this->description;
}

void Task::setPriority(int priority) {
    this->priority = priority;
}

int Task::getPriority() const{
    return this->priority;
}

void Task::setCompleted(bool completed){
    this->completed = completed;
}

bool Task::isCompleted() const {
    return this->completed;
}
