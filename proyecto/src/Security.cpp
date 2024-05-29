// Security.cpp
#include "Security.h"
#include <fstream>
#include <ctime>

void logAction(const char* action, const char* application) {
    LogEntry entry;
    std::ofstream outfile("data/log.dat", std::ios::binary | std::ios::app);
    strcpy(entry.user, currentUser.username.c_str());
    strcpy(entry.action, action);
    strcpy(entry.application, application);
    time_t now = time(0);
    strftime(entry.date, 50, "%Y-%m-%d %H:%M:%S", localtime(&now));
    outfile.write((char*)&entry, sizeof(LogEntry));
    outfile.close();
}
