#include <iostream>
#include <fstream>

using namespace std;

#ifndef FILEHANDLING_H
#define FILEHANDLING_H

class FileHandler {
public:
    void saveCSV(const string& csvText); 

    void loadCSV(); 

private:
};

#endif 