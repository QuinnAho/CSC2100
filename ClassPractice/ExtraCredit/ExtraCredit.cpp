#include <iostream>
using namespace std;
/*
This bubble sort will always sort in ascending order, but if the direction is set to 1, then it will flip the sign to sort, 
and then flip it back after sorting, so that it will sort in descending order.
*/
template <typename T>
void bubbleSort(T arr[], int length, int direction)
{
    //First flip the sign of the array if the direction is descending, turning all the values negative
    if (direction == 1) {
        for (int i = 0; i < length; i++) {
            arr[i] = -arr[i]; 
        }
    }

    // Perform the bubble sort as normal if direction == 0 or if the sign of the array has been flipped
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    //Flip the sign of the array back to the original if the direction is descending
    if (direction == 1) {
        for (int i = 0; i < length; i++) {
            arr[i] = -arr[i]; 
        }
    }
}

template <typename T>
void printArray(T arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code 
int main()
{
    int arr[] = { 5, 1, 4, 2, 8 };

    bubbleSort(arr, 5, 0);
    cout << "Ascending sorted array: \n";
    printArray(arr, 5);

    bubbleSort(arr, 5, 1);
    cout << "Descending sorted array: \n";
    printArray(arr, 5);

    return 0;
}
