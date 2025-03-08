//
//  main.cpp
//  RegistrationApp
//
//  Created by Manu Prathap on 08/03/25.
//

#include <iostream>
#include "Auth.h"

void showMenu() {
    std::cout << "1. Register\n2. Login\n3. Exit\nChoose an option: ";
}

int main() {
    int choice;
    std::string username, password;

    while (true) {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter username: ";
                std::cin >> username;
                std::cout << "Enter password: ";
                std::cin >> password;
                Auth::registerUser(username, password);
                break;

            case 2:
                std::cout << "Enter username: ";
                std::cin >> username;
                std::cout << "Enter password: ";
                std::cin >> password;
                Auth::loginUser(username, password);
                break;

            case 3:
                std::cout << "Exiting...\n";
                return 0;

            default:
                std::cout << "Invalid option. Try again.\n";
        }
    }
}
