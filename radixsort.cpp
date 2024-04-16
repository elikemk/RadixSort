#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int operationCount = 0;  // To count the number of operations

int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        operationCount++;  // Counting comparisons
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

void countSort(int arr[], int n, int exp) {
    int output[n]; 
    int i, count[10] = {0};
  
    for (i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
        operationCount++;  // Counting operations
    }
  
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
  
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
        operationCount++;  // Counting operations (acts as swaps)
    }
  
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n) {
    int m = getMax(arr, n);
  
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000;  // Generate numbers between 0 and 999
}

int main() {
    srand(time(0));  // Initialize random seed

    int n = 64;
    int arr[n];
    generateRandomArray(arr, n);

    radixsort(arr, n);
    cout << "Sorted array: ";
    print(arr, n);
    cout << "Total operations (comparisons+swaps): " << operationCount << endl;

    int n2 = 128;
    int arr2[n2];
    generateRandomArray(arr2, n2);
    operationCount = 0;  // Reset operation count

    radixsort(arr2, n2);
    cout << "Sorted array: ";
    print(arr2, n2);
    cout << "Total operations (comparisons+swaps): " << operationCount << endl;

    return 0;
}
