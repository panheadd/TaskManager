#ifndef TRAVEL_H
#define TRAVEL_H

#include <vector>
#include "Task.h"

class Travel : public Task {
private:
    std::string from;
    std::string to;
    int daystostay;

    std::vector<std::string> toVisits;


public:
    Travel(const std::string& name, const std::string& description, int priority, std::string& from, std::string& to, int daystostay);

    void setFrom(const std::string& from);
    std::string getFrom() const;

    void setTo(const std::string& to);
    std::string getTo() const;

    void setDaysToStay(const int daytostay);
    int getDaysToStay() const;

    void addToVisit(const std::string& toVisit);
    void deleteToVisit(const std::string& toVisit);
    std::vector<std::string> getToVisits() const;

    void display() const override;

};


#endif // TRAVEL_H
