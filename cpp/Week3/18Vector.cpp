<<<<<<< HEAD
// Pair sum

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create vector arr
    vector<int>arr = {10,20,30,40,50,60};
    int sum = 80;

    // prints all pair
    // outer loop, traverse all elemnet
    for (int i = 0; i < arr.size(); i++){
        // cout << "we are at element: " << arr[i] << endl; 
        int element = arr[i];

        //inner loop
        for (int j = i+1; j < arr.size(); j++){
            // cout << "Pair" << element << "with " << arr[j] << endl;
            cout << "(" << element << ", " << arr[j] << ")" << endl;
            if(element + arr[j] == sum){
                cout << "Pair Found: " << element << "," << arr[j] << endl;
            }
        }
        
    }
    
    return 0;
}

=======
// Pair sum

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create vector arr
    vector<int>arr = {10,20,30,40,50,60};
    int sum = 80;

    // prints all pair
    // outer loop, traverse all elemnet
    for (int i = 0; i < arr.size(); i++){
        // cout << "we are at element: " << arr[i] << endl; 
        int element = arr[i];

        //inner loop
        for (int j = i+1; j < arr.size(); j++){
            // cout << "Pair" << element << "with " << arr[j] << endl;
            cout << "(" << element << ", " << arr[j] << ")" << endl;
            if(element + arr[j] == sum){
                cout << "Pair Found: " << element << "," << arr[j] << endl;
            }
        }
        
    }
    
    return 0;
}

>>>>>>> e169126 (day-1)
