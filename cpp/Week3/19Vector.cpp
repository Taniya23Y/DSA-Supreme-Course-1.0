// Triple Sum

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // create vector
    vector<int> arr{10,20,30,40};
    int sum = 80;

    // outer loop --> i
    for (int i = 0; i < arr.size(); i++){
        int element1 = arr[i];

        // inner loop --> j
        for (int j = i+1; j < arr.size(); j++){
            int element2 = arr[j];
            // inner loop --> k
            for (int k = j+1; k < arr.size(); k++){
                int element3 = arr[k];
                // cout << "(" << element << ", " << arr[j] << ")" << endl;
                if(element1+element2+element3 == sum){
                cout << "(" << element1 << "," << element2 << ","  << element3  << ")" <<endl;
                }
            }
        }
    }
    return 0;
}