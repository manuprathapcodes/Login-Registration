//
//  User.cpp
//  RegistrationApp
//
//  Created by Manu Prathap on 08/03/25.
//

#include "User.h"

User::User(std::string uname, std::string pwd): username(uname), password(pwd){}

std::string User::getUsername() const
{
    return username;
}

std::string User::getPassword() const
{
    return password;
}
