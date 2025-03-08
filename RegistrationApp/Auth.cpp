//
//  Auth.cpp
//  RegistrationApp
//
//  Created by Manu Prathap on 08/03/25.
//


#include "Auth.h"
#include <iostream>

bool Auth::registerUser(const std::string &username, const std::string &password){
    
    if (Database::userExists(username)){
        std::cout << "User already exists \n";
        return false;
    }
    
    Database::saveUser(User(username, password));
    std::cout << "User registration successful \n";
    return true;
}


bool Auth::loginUser(const std::string &username, const std::string &password){
    
    if (!Database::userExists(username)){
        std::cout << "Username doesn't exist \n";
        return false;
    }
    
    bool verify = Database::verifyUser(username, password);
    return verify;
}
