// Catalog.h
#ifndef CATALOG_H
#define CATALOG_H

struct Record {
    int id;
    char name[50];
};

void addRecord();
void deleteRecord(int id);
void updateRecord(int id);
void viewRecords();

#endif // CATALOG_H

