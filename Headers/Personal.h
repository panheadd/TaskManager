#ifndef PERSONAL_H
#define PERSONAL_H

#include <vector>
#include "Task.h"

class Personal : public Task {
private:
    std::string place;
    std::vector<std::string> people;
    std::vector<std::string> bringings;

public:
    Personal(const std::string& name, const std::string& description, int priority, std::string& place);

    void setPlace(const std::string& place);
    std::string getPlace() const;

    void addPerson(const std::string& person);
    void deletePerson(const std::string& person);
    std::vector<std::string> getPeople() const;

    void addBringing(const std::string& bringing);
    void deleteBringing(const std::string& bringing);
    std::vector<std::string> getBringings() const;

    void display() const override;
};

#endif // PERSONAL_H
