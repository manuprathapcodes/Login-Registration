//
//  Auth.h
//  RegistrationApp
//
//  Created by Manu Prathap on 08/03/25.
//

#pragma once

#include "User.h"
#include "Database.h"

class Auth {
public:
    
    static bool registerUser(const std::string &username,  const std::string &password);
    static bool loginUser(const std::string &username,  const std::string &password);
};
