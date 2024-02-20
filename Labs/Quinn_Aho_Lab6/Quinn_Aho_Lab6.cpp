/*

Quinn Aho
Lab 6
CSC 2100
Quinn_Aho_Lab6.cpp

*/


#include <iostream>

using namespace std;

int main() {
    
    int length, sum = 0;
    

    cout << "Enter the length of the array: ";
    cin >> length;

    int* array = new int[length];

    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < length; i++) {

        cout << "Element " << i + 1 << ": ";;
        cin >> array[i];

    }

    for (int i = 0; i < length; i++) {

        sum += array[i];

    }

    cout << "Sum of the array elements: " << sum << endl;

    delete[] array;

    return 0;
};