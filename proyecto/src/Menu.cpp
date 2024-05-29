// Menu.cpp
#include "Menu.h"
#include "Auth.h"
#include <iostream>

void displayMainMenu() {
    int choice;
    do {
        std::cout << "Usuario: " << currentUser.fullName << " (" << currentUser.carnet << ")\n";
        std::cout << "1. Cat�logos\n";
        std::cout << "2. Informes\n";
        std::cout << "3. Seguridad\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese una opci�n: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                displayCatalogMenu();
                break;
            case 2:
                displayReportsMenu();
                break;
            case 3:
                displaySecurityMenu();
                break;
            case 4:
                logout();
                break;
            default:
                std::cout << "Opci�n no v�lida.\n";
        }
    } while (choice != 4);
}
