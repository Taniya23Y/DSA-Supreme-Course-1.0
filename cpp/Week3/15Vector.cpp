// VECTOR Questions
// unique elements.

#include <iostream>
#include <vector>
using namespace std;
// function declaration
int UniqueNum(vector<int>arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    
}
int main()
{
    int n;
    cout << "Enter a size of array" << endl;
    cin >> n;

    // vector create
    vector<int>arr(n);
    cout << "Enter a element" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    // function call
    int uniqueElement = UniqueNum(arr);
    cout << "uniqueElement is: " << uniqueElement << endl;
    
    return 0;
}

