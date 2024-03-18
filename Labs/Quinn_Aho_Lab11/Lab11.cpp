/*

Quinn Aho
3/18/24
CSC 2100 
Lab11.cpp

*/

#include<iostream>
#include<vector>

using namespace std;

int numbersAppearInVector(int num, vector<int> numbers) {
    int counter = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if(numbers[i] == num){
            counter++;
        }
    }
    return counter;
}

int main() {
    vector<int> numbers = {1,4,2,7,8,4,5,2,3,7,4,2,9,3,6,7,8};
    int num;
    int counter = 0;

    cout << "Please enter a number: ";
    cin >> num;

    counter = numbersAppearInVector(num, numbers);

    cout << "The number " << num << " appears " << counter << " times in the vector." << endl;
    return 0;
}
