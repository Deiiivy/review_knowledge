#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include "Todo.h"
#include <fstream>

int main() {
  int opcion;
  std::vector<task> myTask;
  std::ifstream archivo;

  archivo.open("task.txt");

  do {
    std::cout << "\nBienvenido a tu gestion de tareas \n";
    std::cout << "1. Ver tareas\n";
    std::cout << "2. Crear tarea\n";
    std::cout << "3. eliminar una tarea\n";
    std::cout << "4. Salir\n";
    std::cout << "Elige una opcion: ";
    std::cin >> opcion;

    switch (opcion) {
      case 1:
        showTask(myTask);
        break;
      case 2:
        createTask(myTask);
        break;
      case 3:
        deleteTask(myTask);
        break;
      case 4: 
        std::cout << "haz salido!!!!\n";
        archivo.close();
        break;
    }

  } while (opcion != 4);

  return 0;
}

