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

1. Constant Time Complexity: O(1)

```
//Name: Riddhi Musale
//Prn: 23070123108
//Class: EnTC B-2
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
o/p:

![image](https://github.com/user-attachments/assets/0ca343ee-d4fe-48c5-860c-34cc2eea9296)

2. Linear Time Complexity: O(n)
```
//Name: Riddhi Musale
//Prn: 23070123108
//Class: EnTC B-2
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
o/p:

![image](https://github.com/user-attachments/assets/18e57b8f-3ef5-4670-bb8d-b6887798b656)

3. Quadratic Time Complexity: O(n²)
```
//Name: Riddhi Musale
//Prn: 23070123108
//Class: EnTC B-2
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
o/p:

![image](https://github.com/user-attachments/assets/a84058d9-6256-4bcb-ba0b-70f827152320)

4. Logarithmic Time Complexity: O(log n)
```
//Name: Riddhi Musale
//Prn: 23070123108
//Class: EnTC B-2
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
o/p:

![image](https://github.com/user-attachments/assets/cc2d7cbe-455a-466e-a97e-d932c3cfcbf7)


5. Exponential Time Complexity: O(2^n)
```
//Name: Riddhi Musale
//Prn: 23070123108
//Class: EnTC B-2
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
o/p:

![image](https://github.com/user-attachments/assets/94400a9e-fcd1-4df8-9c47-44f839baa8c6)

# Conclusion
These examples demonstrate different time complexities, from constant time (O(1)) to exponential time (O(2^n)). Constant time remains unaffected by input size, while linear (O(n)), quadratic (O(n²)), and logarithmic (O(log n)) grow at different rates. Logarithmic time, like in binary search, is efficient for large datasets, while exponential time becomes impractical for larger inputs. Understanding these complexities helps in creating efficient algorithms.


