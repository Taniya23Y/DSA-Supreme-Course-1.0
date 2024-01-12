// Union of arrays.

#include<iostream>
#include<vector> 
#include<climits> // INT_MIN
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int sizea = 7;
    int brr[] ={2,4,6,8,1,10};
    int sizeb = 6;
 
    // create a vector    
    vector<int> ans;
    // push all element of arr in ans vector
    for (int i = 0; i < sizea; i++) {
        ans.push_back(arr[i]);
    }
    
    // push all element of brr in ans vector
    for (int j = 0; j < sizeb; j++) {
        int value = brr[j];
        // handle duplicates
        if(find(ans.begin(), ans.end(), value ) == ans.end()){
            ans.push_back(value);
        }
    }

    // Printing all element of arrays in ans
    cout << "Printing all element of arrays in ans: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] <<" ";
    }

    return 0;
}
