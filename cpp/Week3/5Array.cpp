// Question 3
// Minimum number in Array? 

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {2,5,6,3,9,78,56,12,45,67,30,79,-1,16};
    int size = 14;

    // Initalise maxi variable with the 
    // minimum possible integer value 
    int mini = INT_MAX;

    // for loop for search a element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            // found a number greater than maxi, update maxi
            mini = arr[i];
        }
    }

    cout << "Minimum number in array is: " << mini << endl;
    
    return 0;
}

