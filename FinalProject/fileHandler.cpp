#include "fileHandler.h"

void FileHandler::saveCSV(const string &csvText)
{
    ofstream file;
    file.open("data.csv");
    file << csvText;
    file.close();
}

void FileHandler::loadCSV()
{
    ifstream file("data.csv"); 
    string line;
    while (getline(file, line)) 
    {
        
        
        
    }
    file.close(); 
