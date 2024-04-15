#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int operations_count = 0;
// interger value that counts the number of operation the sort will do

// for a radix sort, you must first get the max value in the array, THEN sort the numbers based on the unit place.
int MaxinArr(<vector> arr, int n) {
  int maxVal = arr[0];
  for (int i = 0; i < arr.size(); i++){
    if (maxVal < arr[i]){
      maxVal = arr[i];
    }
  }
  return maxVal;
}
  

// count the operation

//get the max value in vector

// apply radix sort
// generate a random array


// create a randomarr[64] and randomarrr[128] 



