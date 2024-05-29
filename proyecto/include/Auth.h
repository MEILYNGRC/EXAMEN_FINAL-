// Auth.h
#ifndef AUTH_H
#define AUTH_H

#include <string>

bool login(const std::string& username, const std::string& password);
void logout();

struct User {
    std::string username;
    std::string password;
    std::string fullName;
    std::string carnet;
};

#endif // AUTH_H

