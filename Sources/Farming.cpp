#include "Headers/Farming.h"

Farming::Farming(const std::string& name, const std::string& description, int priority, std::string& place)
    : Task(name, description, priority, TaskTag::Farming) {
    setPlace(place);
}

void Farming::setPlace(const std::string& place){
    this->place = place;
}

std::string Farming::getPlace() const{
    return this->place;
}

void Farming::addMaterial(const std::string& material){
    this->materials.push_back(material);
}

void Farming::deleteMaterial(const std::string& material){
    std::vector<std::string>::iterator it = std::remove(this->materials.begin(), this->materials.end(), material);
    if (it != this->materials.end()){
        this->materials.erase(it, this->materials.end());
    }
}

std::vector<std::string> Farming::getMaterials() const{
    return this->materials;
}

void Farming::display() const{

    //DISPLAY IN UI
}

