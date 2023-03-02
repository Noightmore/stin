#include "../include/user.h"

User::User(std::string* name)
{
    this->name = name;
}

std::string User::getName() const
{
    return *this->name;
}

// Path: src/model/user.h
