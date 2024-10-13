/************ step 11) ************************/
// linear Search

// #include <iostream>
// using namespace std;

// // function linearSearch declare
// bool linearSearch(int arr[], int key, int size){

//     for (int i = 0; i < size; i++){
//         if(arr[i] == key){
//           return true;
//         }
//     }
    
//     return false;

// }

// int main(){
//     // array declare
//     int arr[5] = {5,6,1,9,8};
//     int size = 5;
//     cout << "Enter a element that you want to search: " << endl;
//     int key;
//     cin >> key;


//     // function linearSearch call 
//     if (linearSearch(arr, key, size)){
//         cout << "present";
//     }
//     else{
//         cout << "Absent";
//     }

//     return 0;
// }

/***************************************************************************************/
// code 2 for linear search

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;

    int key;
    cin >> key;

    bool flag = 0;

    for (int i = 0; i < size; i++){
        if (arr[i] == key)
        {
            // found
            flag = 1;
        }
        
    }

    if (flag){
        cout << "found"<< endl;
    }
    else{
        cout << "Not Found"<< endl;
    }

    return 0;
}