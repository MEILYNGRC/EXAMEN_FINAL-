#include "Menu.h"
#include "Auth.h"
#include <iostream>

int main() {
    std::string username, password;
    std::cout << "Usuario: ";
    std::cin >> username;
    std::cout << "Contraseña: ";
    std::cin >> password;

    if (login(username, password)) {
        displayMainMenu();
    } else {
        std::cout << "Autenticación fallida.\n";
    }

    return 0;
}
