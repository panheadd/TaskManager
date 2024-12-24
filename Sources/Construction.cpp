#include "Headers/Construction.h"

Construction::Construction(const std::string& name, const std::string& description, int priority, std::string& building)
    : Task(name, description, priority, TaskTag::Construction) {
    setBuilding(building);
}

void Construction::setBuilding(const std::string& building){
    this->building = building;
}

std::string Construction::getBuilding() const{
    return this->building;
}

void Construction::addMaterial(const std::string& material){
    this->materials.push_back(material);
}

void Construction::deleteMaterial(const std::string& material){
    std::vector<std::string>::iterator it = std::remove(this->materials.begin(), this->materials.end(), material);
    if (it != this->materials.end()){
        this->materials.erase(it, this->materials.end());
    }
}

std::vector<std::string> Construction::getMaterials() const{
    return this->materials;
}

void Construction::display() const{

    //DISPLAY IN UI
}

