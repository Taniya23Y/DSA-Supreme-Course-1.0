// Intersection of arrays

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>arr{3,3,4,9,8};
    vector<int>brr{3,3,4,9,12,8};
    
    // create a vector ans
    vector<int> ans;

    //outer loop for arr
    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        // inner loop, run for brr
        for (int j = 0; j < brr.size(); j++){
            if(element == brr[j]){
                // Mark 
                brr[j] = -1;
                ans.push_back(element);
            }
        }
        
    }

    // printing
    for(auto value: ans){
        cout << value << " ";
    }
    
    return 0;
}