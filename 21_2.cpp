#include <iostream>
using namespace std;

void linearTimeExample(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Iterating through the array (O(n))
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    linearTimeExample(arr, size);
    
    return 0;
}