//
//  Database.cpp
//  RegistrationApp
//
//  Created by Manu Prathap on 08/03/25.
//

#include "Database.h"
#include <fstream>
#include <iostream>


const std::string FILE_NAME = "users.txt";

bool Database::userExists(const std::string &username){
    std::ifstream file(FILE_NAME);
    std::string uname, pwd;
    while(file >> uname >> pwd){
        if (uname == username){
            return true;
        }
    }
    
    return false;
}


void Database::saveUser(const User &user){
    std::ofstream file(FILE_NAME, std::ios::app);
    file << user.getUsername() << " " << user.getPassword() << "\n";
}


bool Database::verifyUser(const std::string &username, const std::string &password){
    std::ifstream file(FILE_NAME);
    std::string uname, pwd;
    while(file >> uname >> pwd){
        if (uname == username && pwd == password){
            std::cout << "Login successful \n";
            return true;
        }
    }
    return false;
}
