#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int length, int direction)
{
    // Determine if we need to flip values based on the sorting direction
    bool shouldFlip = direction == 1;

    // Flip values if sorting in descending order
    if (shouldFlip) {
        for (int i = 0; i < length; i++) {
            arr[i] = -arr[i]; // Negate the value to flip the sorting direction
        }
    }

    // Perform the bubble sort
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Flip values back to their original form after sorting if they were flipped
    if (shouldFlip) {
        for (int i = 0; i < length; i++) {
            arr[i] = -arr[i]; // Negate again to return to original values
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

    // Sort in ascending order (direction = 0)
    bubbleSort(arr, 5, 0);
    cout << "Ascending sorted array: \n";
    printArray(arr, 5);

    // Sort in descending order (direction = 1) by flipping values
    bubbleSort(arr, 5, 1);
    cout << "Descending sorted array: \n";
    printArray(arr, 5);

    return 0;
}
