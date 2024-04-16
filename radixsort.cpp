
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 1. count the operation

//2. get the max value in vector
//3. get the small unit and create a output array
// 4. apply radix sort
//5. generate a random array
// 6. create a randomarr[64] and randomarrr[128] 

int operations_count = 0;
// interger value that counts the number of operation the sort will do
// for a radix sort, you must first get the max value in the array, THEN sort the numbers based on the unit place, least significant bit example 802 = 2, 10 = 0
int MaxinArr(int arr[], int n) {
  int maxVal = arr[0];
  for (int i = 0; i < n; i++){
    if (maxVal < arr[i]){
      maxVal = arr[i];
    }
  }
  return maxVal;
}
void SmallestUnit(int arr[], int n, int exp){
//source: Geeks4Geeks
  int output[n];
  int arry[10] = {0};

  for (int i = 0; i < n; i++){ // this is the output array 
    arry[(arr[i]/ exp) % 10]++;
    operations_count++;
}
  for (int i = 1; i < 10; i++){
    arry[i] += arry[i-1]; // build the least significant unit arry 
  }
  for (int i = n - 1; i >= 0; i--) {
        output[arry[(arr[i] / exp) % 10] - 1] = arr[i];
        arry[(arr[i] / exp) % 10]--;
        operations_count++; 
    }
// and then copy the output of the smallest unit array into the orginal array 
    for (int i = 0; i < n; i++){
        arr[i] = output[i];
    }
}


void raidxsort(int arr[], int n){
 int m = MaxinArr(arr, n);
  for (int exp = 1; m / exp > 0; exp *= 10)
        SmallestUnit(arr, n, exp);
// this functions calls the smallest unit and then sorts based on the LSU
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void genRandomarray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000;  //from 0 - 999 
}

int main(){
  srand(time(0));

  int n = 64;
  int arr[n];
  genRandomarray(arr, n);
  cout << "Array before preforming radix sort ";
  print(arr, n);
  raidxsort(arr, n);
  cout << "\n Radix sort array: ";
  print(arr , n);
  cout << "Total Number of operations " << operations_count << endl;

  int arr128 = 128;
  int number[arr128];
  genRandomarray(number, arr128);
  operations_count = 0;
  cout << "Array before preforming radix sort ";
  print(number, arr128);
  raidxsort(number, arr128);

  cout << "\n Radix sort array: ";
  print(number , arr128);
  cout << "Total Number of operations " << operations_count << endl;
 
 
  

return 0;
  
}


// count the operation

//get the max value in vector

// apply radix sort
// generate a random array


// create a randomarr[64] and randomarrr[128] 
