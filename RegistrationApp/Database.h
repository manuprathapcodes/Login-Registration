//
//  Database.h
//  RegistrationApp
//
//  Created by Manu Prathap on 08/03/25.
//

#pragma once
#include "User.h"

class Database {
public:
    static bool userExists(const std::string &username);
    static void saveUser(const User &user);
    static bool verifyUser(const std::string &username, const std::string &password);
};
