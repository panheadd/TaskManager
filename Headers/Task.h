#ifndef TASK_H
#define TASK_H
#include <iostream>

enum class TaskTag{
    Personal,
    MyProject,
    School,
    Sport,
    Travel,
    Construction,
    Farming,
    Transaction,
    CustomerPlacement,
    Cleaning,
};

class Task {
protected:
    std::string name;
    std::string description;
    int priority;
    bool completed;
    TaskTag tag;

public:
    Task(const std::string& name,const std::string& description, int priority, TaskTag tag);
    virtual ~Task() = default;

    void setName(const std::string& name);
    std::string getName() const;

    void setDescription(const std::string& description);
    std::string getDescription() const;

    void setPriority(int priority);
    int getPriority() const;

    void setCompleted(bool completed);
    bool isCompleted() const;


    void setTag(const TaskTag tag);
    TaskTag getTag() const;

    virtual void display() const = 0;
};


#endif // TASK_H
