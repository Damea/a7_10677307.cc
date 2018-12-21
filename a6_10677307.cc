#include <iostream>
using namespace std;

int main() 

{
 
  int array[] = { 1, 3, 4, 6, 7, 8, 10, 13, 14, 18, 19, 21, 24, 37, 40, 45, 71 };
  int search = 45;
  int max = (sizeof(array) / sizeof(*array) - 1); 
  int min;
  int try;

  while (min <= max) 
  {
    guess = (int)(((max + min) / 2) + 0.5);
    if search == array[try]) 
      {
        cout << "The number can be found at index " << try << endl;
        break;
      } else if (array[try] < search ) {
        min = try + 1;
      } else {
        max = try - 1;
      }
    cout << try << endl;
  }

  return 0;
}
