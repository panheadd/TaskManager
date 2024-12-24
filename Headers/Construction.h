#ifndef CONSTRUCTION_H
#define CONSTRUCTION_H


#include <vector>
#include "Task.h"

class Construction : public Task {
private:
    std::string building;
    std::vector<std::string> materials;
public:
    Construction(const std::string& name, const std::string& description, int priority, std::string& building);

    void setBuilding(const std::string& building);
    std::string getBuilding() const;

    void addMaterial(const std::string& material);
    void deleteMaterial(const std::string& material);
    std::vector<std::string> getMaterials() const;

    void display() const override;

};


#endif // CONSTRUCTION_H
