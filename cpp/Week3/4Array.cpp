<<<<<<< HEAD
// Question 3
// Maximum number in Array? 

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {2,5,6,3,9,78,56,12,45,67,30,79,16};
    int size = 13;

    // Initalise maxi variable with the 
    // minimum possible integer value 
    int maxi = INT_MIN;

    // for loop for search a element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            // found a number greater than maxi, update maxi
            maxi = arr[i];
        }
    }

    cout << "Maximum number in array is: " << maxi << endl;
    
    return 0;
}

=======
// Question 3
// Maximum number in Array? 

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {2,5,6,3,9,78,56,12,45,67,30,79,16};
    int size = 13;

    // Initalise maxi variable with the 
    // minimum possible integer value 
    int maxi = INT_MIN;

    // for loop for search a element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            // found a number greater than maxi, update maxi
            maxi = arr[i];
        }
    }

    cout << "Maximum number in array is: " << maxi << endl;
    
    return 0;
}

>>>>>>> e169126 (day-1)
