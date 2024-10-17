# EXPERIMENT 21
# Aim
# Software Used
Visual Studio Code
# Theory
1. Constant Time Complexity:[ O(1)]
A function that takes constant time, regardless of the input size.

2. Linear Time Complexity: [O(n)]
A function where time grows linearly with the size of the input.

3. Quadratic Time Complexity: [O(n²)]
A function that involves a nested loop, where each loop runs n times.

4. Logarithmic Time Complexity: [O(log n)]
This occurs when the problem size is reduced by a constant factor at each step (like in binary search).

5. Exponential Time Complexity: [O(2^n)]
This complexity occurs in algorithms like recursive backtracking, such as calculating Fibonacci numbers recursively.

CODES:

1. Binary Search
```
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
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
    int arr[] = {2, 3, 4, 10, 40}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, size, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in array" << endl;
        
    return 0;
}
```
o/p:

2. Linear Search
```
 #include <iostream>
using namespace std;

// Function for linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40}; // Unsorted or sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int result = linearSearch(arr, size, target);
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in array" << endl;
        
    return 0;
}
```


# Conclusion



