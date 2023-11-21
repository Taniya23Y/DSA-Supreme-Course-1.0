// Question YT 

// Second Max in Array

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {2,6,4,9,3};
    int size = 5;

    int ans = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
        
    }
     
    // cout << ans << endl;
     // second largest number
	    int second = INT_MIN;
	     for(int i = 0; i < size; i++){
	         if(ans != arr[i])
	         second = max(second, arr[i]);
	     }
	     
	cout << second;

    return 0;
}