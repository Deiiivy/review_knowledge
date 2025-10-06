#include "TodoList.h"
#include <iostream>
#include <fstream>

TodoList::TodoList(const std::string& file) : filename(file) {
    loadFromFile();
}

void TodoList::loadFromFile() {
    tasks.clear();
    std::ifstream infile(filename);
    std::string line;
    while (std::getline(infile, line)) {
        if (!line.empty())
            tasks.push_back(line);
    }
    infile.close();
}

void TodoList::saveToFile() {
    std::ofstream outfile(filename, std::ios::trunc);
    for (const auto& task : tasks) {
        outfile << task << "\n";
    }
    outfile.close();
}

void TodoList::addTask(const std::string& task) {
    tasks.push_back(task);
    saveToFile();
}

void TodoList::showTasks() const {
    if (tasks.empty()) {
        std::cout << "No hay tareas pendientes.\n";
        return;
    }
    for (size_t i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << ". " << tasks[i] << "\n";
    }
}

void TodoList::removeTask(int index) {
    if (index > 0 && index <= (int)tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        saveToFile();
    } else {
        std::cout << "Índice inválido.\n";
    }
}
