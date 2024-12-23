#include "Headers/Sport.h"

Sport::Sport(const std::string& name, const std::string& description, int priority, std::string& place)
    : Task(name, description, priority, TaskTag::Sport) {
    setPlace(place);
}

void Sport::setPlace(const std::string place){
    this->place = place;
}
std::string Sport::getPlace() const {
    return this->place;
}


void Sport::display() const {

    //DISPLAY IN UI

}
