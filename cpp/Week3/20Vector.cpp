// Sort 0's and 1's

#include <iostream>
#include <vector>
using namespace std;

// function
void printArray(vector<int> arr){
    for(auto value: arr){
        cout << value << " ";
    }
    cout << endl;
}

int main(){
    // create vector
    // vector<int>arr{0,1,0,1,0,1,0,1,0};

    // int start = 0;
    // int end = arr.size() - 1;
    // int i = 0;

    // // while loop -> one more conditon -(i != end)
    // while (start < end){
    //     if(arr[i] == 0){
    //         swap(arr[start], arr[i]);
    //         i++;
    //         start++;
    //     }
    //     else{
    //         swap(arr[i], arr[end]);
    //         end--;
    //     }
    // }

    // //print
    //  for(auto value: arr){
    //     cout << value << " ";
    // }
    


    // above code for dry run looks like: ⬇️
    // create vector
    vector<int>arr{0,1,0,1,0,1,0,1,0};

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    // while loop -> one more conditon -(i != end)
    while (start < end){
        cout << "for i: " << i << " start= " << start << " end= " << end << endl;
        if(arr[i] == 0){
            cout << "Found Zero" << endl;
            cout << "Before Swap: " << endl;
            printArray(arr);

            swap(arr[start], arr[i]);
            cout << "After swap: "<< endl;
            printArray(arr);
            i++;
            start++;
            cout << "now i: " << i << " start= " << start << " end= " << end << endl;
        }
        else{
            cout << "Found One" << endl;
            cout << "Before Swap: "<< endl;
            printArray(arr);
            swap(arr[i], arr[end]);
            end--;
        }
    }

    //print
    //  for(auto value: arr){
    //     cout << value << " ";
    // }

    
    return 0;
}


