// Reports.cpp
#include "Reports.h"
#include "Catalog.h"
#include <fstream>
#include <iostream>

void generateReport() {
    std::ifstream infile("data/catalog.dat", std::ios::binary);
    std::ofstream report("report.txt");
    Record record;
    while (infile.read((char*)&record, sizeof(Record))) {
        report << "ID: " << record.id << " Nombre: " << record.name << "\n";
    }
    infile.close();
    report.close();
}


