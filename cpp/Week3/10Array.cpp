// Missing number in array

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,3,4,5,6}; // N=6
    int size = 6;

    // sum of all element in array
    int sum = 0;
    int got;
    for (int i = 0; i < size-1; i++)
    {
        sum += arr[i];
        // sum of n number
        // int ans = size*(size+1)/2;
        // got=ans-sum;

        // return got;
    }

    int ans = size*(size+1)/2;
        got=ans-sum;

        return got;   
    cout << got;

    
    
    return 0;
}