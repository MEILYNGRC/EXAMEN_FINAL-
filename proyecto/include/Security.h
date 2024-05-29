// Security.h
#ifndef SECURITY_H
#define SECURITY_H

struct LogEntry {
    char user[50];
    char action[50];
    char application[50];
    char date[50];
};

void logAction(const char* action, const char* application);

#endif // SECURITY_H

