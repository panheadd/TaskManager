#ifndef SCHOOLTASK_H
#define SCHOOLTASK_H

#include "Task.h"

class SchoolTask : public Task {
private:
    std::string course;
    std::string lecturer;



public:
    SchoolTask(const std::string& name, const std::string& description, int priority, const std::string course, const std::string lecturer);

    void setCourse(const std::string& course);
    std::string getCourse() const;

    void setLecturer(const std::string& lecturer);
    std::string getLecturer() const;

    void display() const override;

};

#endif // SCHOOLTASK_H
