<<<<<<< HEAD
// linear search

// step 1) If element present then print it's index number
// step 2) If element is not present then print -1.

/**************************************************************/
/*Given an integer array and another integer element. 
The task is to find if the given element is present in array or not.*/

/*

Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
Explanation: There is one test case 
with array as {1, 2, 3 4} and element 
to be searched as 3.  Since 3 is 
present at index 2, output is 2.


*/

/*

Your Task:
The task is to complete the function search() which 
takes the array arr[], its size N and the element X as
inputs and returns the index of first occurrence of X
in the given array. If the element X does not exist 
in the array, the function should return -1.

*/
#include <iostream>
using namespace std;

int find(int arr[],int size, int key){

    // prining the element
    for (int i = 0; i < size; i++)
    {
      if (arr[i] == key)
      {
        return i;
      }
      
    }
    
    return -1;

}

int main(){

    int arr[] = {10,20,7,11,8,4};
    int size = 6;

    // element number to find.
    int key;
    cout << "Enter element to search in given array: " << " ";
    cin >> key;

    
    int ans = find(arr,size,key);

    cout << "Index Number: "<< ans << " ";

    return 0;
=======
// linear search

// step 1) If element present then print it's index number
// step 2) If element is not present then print -1.

/**************************************************************/
/*Given an integer array and another integer element. 
The task is to find if the given element is present in array or not.*/

/*

Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
Explanation: There is one test case 
with array as {1, 2, 3 4} and element 
to be searched as 3.  Since 3 is 
present at index 2, output is 2.


*/

/*

Your Task:
The task is to complete the function search() which 
takes the array arr[], its size N and the element X as
inputs and returns the index of first occurrence of X
in the given array. If the element X does not exist 
in the array, the function should return -1.

*/
#include <iostream>
using namespace std;

int find(int arr[],int size, int key){

    // prining the element
    for (int i = 0; i < size; i++)
    {
      if (arr[i] == key)
      {
        return i;
      }
      
    }
    
    return -1;

}

int main(){

    int arr[] = {10,20,7,11,8,4};
    int size = 6;

    // element number to find.
    int key;
    cout << "Enter element to search in given array: " << " ";
    cin >> key;

    
    int ans = find(arr,size,key);

    cout << "Index Number: "<< ans << " ";

    return 0;
>>>>>>> e169126 (day-1)
}