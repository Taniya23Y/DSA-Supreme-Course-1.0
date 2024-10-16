/************ step 1) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[7];
    cout << "Array declaration Successfully!!!" << endl;
    return 0;
}

/************ step 2) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[7];

    // Address of array  ---- step 1
    cout << arr << endl;

    // Address of array  ---- step 2
    cout << &arr << endl;

    cout << sizeof(arr) << endl; // how much bytes it takes = (28 bytes--> 7*4)

    cout << "Array declaration Successfully!!!" << endl;
    return 0;
}

/************ step 3) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[] = {2, 3, 4, 6, 7};   // chalega
    int brr[5] = {2, 3, 4, 6, 7};  // chalega
    int crr[10] = {2, 3, 4, 6, 7}; // chalega

    // error
    // 2Array.cpp: In function 'int main()':
    // 2Array.cpp:11:28: error: too many initializers for 'int [4]'
    // int drr[4] = {2,3,4,6,7};
    // ^
    // int drr[4] = {2,3,4,6,7};     // error

    cout << "Array declaration Successfully!!!" << endl;
    return 0;
}

/************ step 4) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[] = {1, 3, 5, 7, 9};

    cout << arr[0] << endl; // answer -> 1
    cout << arr[4] << endl; // answer -> 9
    return 0;
}

/************ step 5) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[] = {1, 3, 5, 7, 9};

    // printing all values
    // loop
    for (int index = 0; index < 5; index++)
    {
        cout << arr[index] << " "; // answer -> 1 3 5 7 9
    }

    return 0;
}

/************ step 6) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[10];

    cout << "Enter the input values in array " << endl;

    for (int i = 0; i < 10; i++)
    {
        // int n;
        // cin >> n;      // this is a bad practice(answer same)
        // arr[i] = n;

        cin >> arr[i];
    }

    // printing
    cout << "printing the value in array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/************ step 7) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[5];

    cout << "Enter the input values in array " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the values of array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Double of given input is: ";
    for (int i = 0; i < 5; i++)
    {
        // arr[i]=2*arr[i];
        cout << 2 * arr[i] << " ";
    }

    return 0;
}

/************ step 7.1) ************************/
// second way
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[5] = {1, 3, 5, 7, 9};

    cout << "Printing the values of array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Double of given input is: ";
    for (int i = 0; i < 5; i++)
    {
        // arr[i]=2*arr[i];
        cout << 2 * arr[i] << " ";
    }

    return 0;
}

/************ step 8) ************************/
// Printing 1 in given input
#include <iostream>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    int arr[5] = {1, 3, 5, 7, 9};

    cout << "Printing the values of array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Printing 1 in given input: "; // Printing 1 in given input
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 1;
        cout << arr[i] << " ";
    }

    return 0;
}

/************ step 8.1) ************************/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /* Code Here*/

    // array declaration
    bool arr[5];

    cout << "Printing 1 in given input: "; // Printing 1 in given input
    memset(arr, 1, sizeof(arr));
    for (int i = 0; i < 5; i++)
    {
        // arr[i] = 1;
        cout << arr[i] << " ";
    }

    return 0;
}

/************ step 9) ************************/
#include <iostream>
using namespace std;

int main()
{
    /* code */
    // array create
    int arr[10] = {1, 2}; // initialisation

    // for loop for printing the element
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/************ step 10) ************************/
#include <iostream>
using namespace std;

// function printArray declare
void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function inc declare
void inc(int arr[], int size)
{

    arr[0] = arr[0] + 10;

    printArray(arr, size);
}

int main()
{
    // array declare
    int arr[] = {5, 6};
    int size = 2;

    // function increment call
    inc(arr, size);
    // function printArray call
    printArray(arr, size);

    return 0;
}

/************ step 11) ************************/
#include <iostream>
using namespace std;

// function linearSearch declare
bool linearSearch(int arr[], int key, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // array declare
    int arr[5] = {5, 6, 1, 9, 8};
    int size = 5;
    cout << "Enter a element that you want to search: " << endl;
    int key;
    cin >> key;

    // function linearSearch call
    if (linearSearch(arr, key, size))
    {
        cout << "present";
    }
    else
    {
        cout << "Absent";
    }

    return 0;
}

/************ step 12) ************************/
// code 2 for linear search

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    int key;
    cin >> key;

    bool flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // found
            flag = 1;
        }
    }

    if (flag)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}

/************ step 13) ************************/
// Question 2 Count 0's and 1's in Array? 

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

/************ step 14) ************************/
// Question 3
// Maximum number in Array? 

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {2,5,6,3,9,78,56,12,45,67,30,79,16};
    int size = 13;

    // Initialise maxi variable with the 
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

/************ step 15) ************************/
// Question 3
// Minimum number in Array? 

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {2,5,6,3,9,78,56,12,45,67,30,79,-1,16};
    int size = 14;

    // Initialise maxi variable with the 
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

/************ step 16) ************************/
// Question 5
// Extreme Print in Array?

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;

    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
        break;

        cout << arr[start] << " ";    
        cout << arr[end] << " ";    
        start++;
        end--;
    }
     
    
    return 0;
}

// BUt in odd case, output gives last iteration twice
// so, add one more way to handle this problem(odd case)
// Question 5
// Extreme Print in Array?

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
        break;

        if(start == end){
            cout << arr[start] << " ";
        }
        else{
           cout << arr[start] << " ";    
           cout << arr[end] << " "; 
        }
       
        start++;
        end--;
    }
     
    
    return 0;
}

/************ step 17) ************************/
