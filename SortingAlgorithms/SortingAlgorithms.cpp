
using namespace std;
#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Element found, return its index  
        }
    }
    return -1; // Element not found  
}

int main()
{
    int numArray[10] = { 8, 6, 2, 5, 3, 9, 0, 1, 4, 7 };
    int n = sizeof(numArray) / sizeof(numArray[0]);
    int targetNum = 1;

    int result = linearSearch(numArray, n, targetNum);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    }
    else {
        cout << "Element not found in the array." << endl;
    }
    
}

