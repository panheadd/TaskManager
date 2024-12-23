#include "Headers/SchoolTask.h"

SchoolTask::SchoolTask(const std::string& name, const std::string& description, int priority,const std::string course, const std::string lecturer)
    : Task(name, description, priority, TaskTag::School) {
    setCourse(course);
    setLecturer(lecturer);
}

void SchoolTask::setCourse(const std::string& course){
    this->course = course;
}
std::string SchoolTask::getCourse() const {
    return this->course;
}

void SchoolTask::setLecturer(const std::string& lecturer){
    this->lecturer = lecturer;
}
std::string SchoolTask::getLecturer() const{
    return this->lecturer;
}


void SchoolTask::display() const {

    //DISPLAY IN UI

}
