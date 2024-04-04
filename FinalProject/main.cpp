#include "fileHandler.h"


int main()
{
    FileHandler fileHandler;
    
    string testString;

    cout << "Enter the text, split by commas, to save to a CSV file:";
    
    cin >> testString;

    fileHandler.saveCSV(testString);

    return 0;
}