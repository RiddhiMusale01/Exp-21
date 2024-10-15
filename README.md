# EXPERIMENT 21
# Aim
# Software Used
Visual Studio Code
# Theory
CODES:
```
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
```
```
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
```
```
#include <iostream>
using namespace std;

void quadraticTimeExample(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i] + arr[j] << " ";  // Nested loop (O(n²))
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    quadraticTimeExample(arr, size);
    
    return 0;
}
```
```
#include <iostream>
using namespace std;

int logarithmicTimeExample(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    
    int result = logarithmicTimeExample(arr, size, target);
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
```
```
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // O(2^n)
}

int main() {
    int n = 5;
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    return 0;
}
```
