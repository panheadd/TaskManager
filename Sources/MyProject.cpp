#include "Headers/MyProject.h"

MyProject::MyProject(const std::string& name, const std::string& description, int priority)
    : Task(name, description, priority, TaskTag::MyProject) {}

void MyProject::addLanguage(const std::string& language){
    this->languages.push_back(language);
}

void MyProject::deleteLanguage(const std::string& language){
    std::vector<std::string>::iterator it = std::remove(this->languages.begin(), this->languages.end(), language);
    if (it != languages.end()){
        languages.erase(it, languages.end());
    }
}

std::vector<std::string> MyProject::getLanguages() const{
    return this->languages;
}


void MyProject::addTool(const std::string& tool){
    this->tools.push_back(tool);
}

void MyProject::deleteTool(const std::string& tool){
    std::vector<std::string>::iterator it = std::remove(this->tools.begin(), this->tools.end(), tool);
    if (it != tools.end()){
        tools.erase(it, tools.end());
    }
}

std::vector<std::string> MyProject::getTools() const{
    return this->tools;
}


void MyProject::display() const {

    //DISPLAY IN UI
    //DISPLAY VECTOR_TOOLS,VECTOR_LANGUAGES

}
