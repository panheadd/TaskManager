#ifndef TASK_H
#define TASK_H
#include <iostream>

class Task {
protected:
    std::string name;
    std::string description;
    int priority;
    bool completed;

public:
    Task(const std::string& name,const std::string& description, int priority);
    virtual ~Task() = default;

    void setName(const std::string& name);
    std::string getName() const;

    void setDescription(const std::string& description);
    std::string getDescription() const;

    void setPriority(int priority);
    int getPriority() const;

    void setCompleted(bool completed);
    bool isCompleted() const;

    virtual void display() const = 0;
};

#endif // TASK_H
