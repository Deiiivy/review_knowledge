#include <iostream>
#include "Todo.h"

int main() {
    TodoList todo("tasks.txt");
    int opcion;
    std::string tarea;

    do {
        std::cout << "\n--- TO-DO LIST ---\n";
        std::cout << "1. Ver tareas\n";
        std::cout << "2. Agregar tarea\n";
        std::cout << "3. Eliminar tarea\n";
        std::cout << "0. Salir\n";
        std::cout << "Opción: ";
        std::cin >> opcion;
        std::cin.ignore(); 

        switch(opcion) {
            case 1:
                todo.showTasks();
                break;
            case 2:
                std::cout << "Nueva tarea: ";
                std::getline(std::cin, tarea);
                todo.addTask(tarea);
                break;
            case 3:
                int idx;
                std::cout << "Número de tarea a eliminar: ";
                std::cin >> idx;
                todo.removeTask(idx);
                break;
            case 0:
                std::cout << "Guardando y saliendo...\n";
                break;
            default:
                std::cout << "Opción no válida.\n";
        }
    } while(opcion != 0);

    return 0;
}
