#include "Headers/Travel.h"

Travel::Travel(const std::string& name, const std::string& description, int priority, std::string& from, std::string& to, int daystostay)
    : Task(name, description, priority, TaskTag::Personal) {
    setFrom(from);
    setTo(to);
    setDaysToStay(daystostay);
}


void Travel::setFrom(const std::string& from){
    this->from = from;

}
std::string Travel::getFrom() const {
    return this->from;
}

void Travel::setTo(const std::string& to){
    this->from = to;

}
std::string Travel::getTo() const {
    return this->to;
}

void Travel::setDaysToStay(const int daystostay){
    this->daystostay = daystostay;

}
int Travel::getDaysToStay() const {
    return this->daystostay;
}


void Travel::addToVisit(const std::string& toVisit){
    this->toVisits.push_back(toVisit);
}

void Travel::deleteToVisit(const std::string& toVisit){
    std::vector<std::string>::iterator it = std::remove(this->toVisits.begin(), this->toVisits.end(), toVisit);
    if (it != this->toVisits.end()){
        this->toVisits.erase(it, this->toVisits.end());
    }
}

std::vector<std::string> Travel::getToVisits() const{
    return this->toVisits;
}

void Travel::display() const {

    //DISPLAY IN UI

}
