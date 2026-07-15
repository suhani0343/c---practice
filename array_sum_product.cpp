/*Goal:To master accumulator patterns by reducing a multi-element
  linear structure down to solitary compute aggregates.

  Concepts:
  Accumulator Pattern: Maintaining a rolling summary metric that updates progressively across loop repetitions.
  Identity Initialization: Setting accumulator variables to mathematical identities (0 for addition, 1 for multiplication) to prevent value corruption

  Question:Create a program containing functions to compute both the complete summation and the total multiplied product of 
  all elements present within a given integer array.

*/
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }
    return totalSum;
}

long long calculateProduct(int arr[], int size) {
    long long totalProduct = 1;
    for (int i = 0; i < size; i++) {
        totalProduct *= arr[i];
    }
    return totalProduct;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Sum: " << calculateSum(arr, size) << endl;
    cout << "Product: " << calculateProduct(arr, size) << endl;
    
    return 0;
}

