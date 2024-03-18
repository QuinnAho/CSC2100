/*
Quinn Aho
CSC 2110
3/8/24
Lab10.cpp
*/


#include <iostream>

using namespace std;

// Function to calculate the power of a number using recursion
int Power(int x, int n) {
    // Base case: if n is 0, return 1
    if (n == 0) {
        return 1;
    }
    
    // Recursive case: multiply x with Power(x, n-1)
    return x * Power(x, n-1);
}

int main() {
    // Testing the Power function
    int x = 2;
    int n = 3;
    int result = Power(x, n);
    
    cout << "Power(" << x << ", " << n << ") = " << result << endl;
    
    return 0;
}