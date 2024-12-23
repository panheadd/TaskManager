#ifndef SPORT_H
#define SPORT_H

#include "Task.h"

class Sport : public Task {
private:
    std::string place;

public:
    Sport(const std::string& name, const std::string& description, int priority, std::string& place);

    void setPlace(const std::string place);
    std::string getPlace() const;

    void display() const override;

};



#endif // SPORT_H
