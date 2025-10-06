#ifndef TodoList_H
#define TodoList_H

#include <string>
#include <vector>

class TodoList {
private:
    std::vector<std::string> tasks;
    std::string filename;

public:
    TodoList(const std::string& file);

    void loadFromFile();
    void saveToFile();

    void addTask(const std::string& task);
    void showTasks() const;
    void removeTask(int index);
};

#endif
