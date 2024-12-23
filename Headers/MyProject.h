#ifndef MYPROJECT_H
#define MYPROJECT_H
#include "Task.h"
#include <vector>

class MyProject : public Task {
private:
    std::vector<std::string> languages;
    std::vector<std::string> tools;

public:
    MyProject(const std::string& name, const std::string& description, int priority);

    void addLanguage(const std::string& language);
    void deleteLanguage(const std::string& language);
    std::vector<std::string> getLanguages() const;

    void addTool(const std::string& tool);
    void deleteTool(const std::string& tool);
    std::vector<std::string> getTools() const;

    void display() const override;

};

#endif // MYPROJECT_H
