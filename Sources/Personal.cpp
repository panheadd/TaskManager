#include "Headers/Personal.h"

Personal::Personal(const std::string& name, const std::string& description, int priority , std::string& place)
    : Task(name, description, priority, TaskTag::Personal) {
    setPlace(place);
}


void Personal::setPlace(const std::string& place){
    this->place = place;

}
std::string Personal::getPlace() const {
    return this->place;
}


void Personal::addPerson(const std::string& person){
    this->people.push_back(person);
}

void Personal::deletePerson(const std::string& person){
    std::vector<std::string>::iterator it = std::remove(this->people.begin(), this->people.end(), person);
    if (it != this->people.end()){
        this->people.erase(it, this->people.end());
    }
}

std::vector<std::string> Personal::getPeople() const{
    return this->people;
}


void Personal::addBringing(const std::string& bringing){
    this->bringings.push_back(bringing);
}

void Personal::deleteBringing(const std::string& bringing){
    std::vector<std::string>::iterator it = std::remove(this->bringings.begin(), this->bringings.end(), bringing);
    if (it != this->bringings.end()){
        this->bringings.erase(it, this->bringings.end());
    }
}

std::vector<std::string> Personal::getBringings() const{
    return this->bringings;
}


void Personal::display() const {

    //DISPLAY IN UI
    //DISPLAY VECTOR_PEOPLE,VECTOR_BRINGINGS

}
