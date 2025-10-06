#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include "Todo.h"

int main() {
  int opcion;
  std::vector<task> myTask;

  myTask.push_back({1, "Terminar todoList", false});
  myTask.push_back({2, "Entrar a la review", false});

  do {
    std::cout << "\nBienvenido a tu gestion de tareas \n";
    std::cout << "1. Ver tareas\n";
    std::cout << "2. Crear tarea\n";
    std::cout << "3. Salir\n";
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
        std::cout << "¡Haz salido!\n";
        break;
      default:
        std::cout << "Opcion no valida.\n";
        break;
    }

  } while (opcion != 3);

  return 0;
}

