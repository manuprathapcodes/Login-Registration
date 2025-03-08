//
//  User.h
//  RegistrationApp
//
//  Created by Manu Prathap on 08/03/25.
//

#pragma once
#include <string>
using namespace std;

class User {
    std::string username;
    std::string password;
    
public:
    User(string username, string password);
    std::string getUsername() const;
    std::string getPassword() const;
    
};
