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

int SmallestUnit(int arr, int n, int m){

  int output[n];
int i, count[10] = {0}
  int arry[10] = {0}
  for (int i = 0; i < n; i++){
  count[(arr[i] / m) % 10]++;
}
  for (i = 1; i < 10; i++){
    count[i] += count[i-1]
  }



  

// count the operation

//get the max value in vector

// apply radix sort
// generate a random array


// create a randomarr[64] and randomarrr[128] 



