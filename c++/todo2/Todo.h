#ifndef TODO_H
#define TODO_H

#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

std::fstream MyFile("tasks.txt");

struct task {
int id; 
std::string description;
bool completed;
};



void showTask(const std::vector<task>& tasks) {
  

  if(tasks.empty()){
    std::cout << "no hay tareas para mostrar \n";
    return;
  }
  
  std::ofstream MyFile("task.txt");
  if(!MyFile) {
  std::cerr << "error al abrir el archivo \n";
  return;
  }
  std::cout << "--- tareas pendientes ---" << std::endl;
  for (size_t i = 0; i <tasks.size(); ++i) {
    std::cout << (i + 1) << ". " << tasks[i].description
      << " (Estado: " << tasks[i].completed << ") " << "id tarea: " << tasks[i].id << std::endl;

    MyFile << tasks[i].id << ", "
      << tasks[i].description << ", "
      << tasks[i].completed << ", ";
  }
  std::cout << "---------------------" << std::endl;
};


void createTask(std::vector<task>& tasks){
  std::cout << "ingresa el id de la tarea: \n" << std::endl;
  int id;
  std::cout << "ingresa la descripcion de la tarea: \n" << std::endl;
  std::string desc;
  std::getline(std::cin >> std::ws, desc);
  std::cin.ignore();
  std::cin >> id;
  tasks.push_back({id, desc, false});
  std::cout << "tarea agregada correctamente!!! \n" << std::endl;
};

void deleteTask(std::vector<task>& tasks){
  std::cout << "ingresa el id de la tarea a eliminar: \n" << std::endl;
  int id;
  std::cin >> id;

  bool found = false;
  for(size_t i = 0; i < tasks.size(); ++i){
    if(tasks[i].id == id){
      tasks.erase(tasks.begin() + i);
      std::cout << "tarea eliminada correctamente" << std::endl;
      found = true;
    }
  }

  if(!found) {
    std::cout << "no se encontro ninguna tarea con ese id. \n";
  }
}


#endif // 
