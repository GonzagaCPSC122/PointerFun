#include <iostream>

using namespace std;

void swapIt(int * ptrOne, int * ptrTwo) {
  int temp = *ptrOne;
  *ptrOne = *ptrTwo;
  *ptrTwo = temp;
}

int main() {
  int first = 5;
  int second = 56;

  swapIt(&first, &second);
  cout << first << " " << second << endl;
  
  return 0;
}