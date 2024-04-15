#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int operations_count = 0;
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



