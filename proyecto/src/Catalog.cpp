// Catalog.cpp
#include "Catalog.h"
#include <fstream>
#include <iostream>

void addRecord() {
    Record record;
    std::ofstream outfile("data/catalog.dat", std::ios::binary | std::ios::app);
    std::cout << "Ingrese ID: ";
    std::cin >> record.id;
    std::cout << "Ingrese nombre: ";
    std::cin.ignore();
    std::cin.getline(record.name, 50);
    outfile.write((char*)&record, sizeof(Record));
    outfile.close();
    // Registrar en bitácora
}

void deleteRecord(int id) {
    // Implementación de eliminación de registros
}

void updateRecord(int id) {
    // Implementación de actualización de registros
}

void viewRecords() {
    // Implementación de visualización de registros
}
