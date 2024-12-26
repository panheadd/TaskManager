#ifndef FARMING_H
#define FARMING_H

#include <vector>
#include "Task.h"

class Farming : public Task {
private:
    std::string place;
    std::vector<std::string> materials;
public:
    Farming(const std::string& name, const std::string& description, int priority, std::string& place);

    void setPlace(const std::string& place);
    std::string getPlace() const;

    void addMaterial(const std::string& material);
    void deleteMaterial(const std::string& material);
    std::vector<std::string> getMaterials() const;

    void display() const override;

};


#endif // FARMING_H
