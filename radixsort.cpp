#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int operations_count = 0;
// interger value that counts the number of operation the sort will do
// for a radix sort, you must first get the max value in the array, THEN sort the numbers based on the unit place, least significant bit example 802 = 2, 10 = 0
int MaxinArr(int arr[], int n) {
  int maxVal = arr[0];
  for (int i = 0; i < arr.size(); i++){
    if (maxVal < arr[i]){
      maxVal = arr[i];
    }
  }
  return maxVal;
}
void SmallestUnit(int arr, int n, int exp){
//source: Geeks4Geeks
  int output[n];
  int i, count[10] = {0}
  int arry[10] = {0}
  for (int i = 0; i < n; i++){ // this is the output array 
  count[(arr[i] / exp) % 10]++;
}
  for (i = 1; i < 10; i++){
    count[i] += count[i-1] // build the least significant unit arry 
  }
  for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
        operationCount++; 
    }
// and then copy the output of the smallest unit array into the orginal array 
    for (i = 0; i < n; i++){
        arr[i] = output[i];
    }
}

void raidxsort(int arr[], int n){
 int m = getMax(arr, n);
  for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);

}

int main(){
  srand(time(0));

  int n = 64
  int arr[n];
  genRandomarray(arr, n);
  cout << "Array before preforming radix sort ";
  print(arr, n)
  radixsort(arr, n)
  cout << "\n Radix sort array: ";
  print(arr , n);
  cout << "Total Number of operations " << operations_count << endl;

  int nn = 128
  int arrI[nn];
  genRandomarray(arrI, nn);
  cout << "Array before preforming radix sort ";
  print(arrI, nn)
  radixsort(arr, n)

  cout << "\n Radix sort array: ";
  print(arrI , nn);
  cout << "Total Number of operations " << operations_count << endl;
 
 
  

return 0;
  
}




  

// count the operation

//get the max value in vector

// apply radix sort
// generate a random array


// create a randomarr[64] and randomarrr[128] 



