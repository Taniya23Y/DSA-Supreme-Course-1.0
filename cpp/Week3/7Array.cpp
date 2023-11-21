// Question 6
// Reverse an Array?

#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // step 1)
        swap(arr[start], arr[end]);
        // step 2)
        start++;
        // step 3)
        end--;
    }
   // printing array
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
   
    return 0;
}