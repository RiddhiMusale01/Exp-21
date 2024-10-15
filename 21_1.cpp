#include <iostream>
using namespace std;

void constantTimeExample(int arr[], int size) {
    cout << "First element: " << arr[0] << endl;  // Constant time access
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    constantTimeExample(arr, size);
    
    return 0;
}