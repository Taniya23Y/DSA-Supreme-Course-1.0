// Question 2 
// Count 0's and 1's in Array? 

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1};
    int size = 18;

    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
        }

        if (arr[i] == 1)
        {
            numOne++;
        } 
    }

    cout << "Zero's in Arrays are: " << numZero << endl;
    cout << "One's in Arrays are: " << numOne;
    
    return 0;
}
