#include "Menu.h"
#include "Auth.h"
#include <iostream>

int main() {
    std::string username, password;
    std::cout << "Usuario: ";
    std::cin >> username;
    std::cout << "Contrase�a: ";
    std::cin >> password;

    if (login(username, password)) {
        displayMainMenu();
    } else {
        std::cout << "Autenticaci�n fallida.\n";
    }

    return 0;
}
