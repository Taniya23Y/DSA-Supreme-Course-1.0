<<<<<<< HEAD
// Fibonacci Series

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: " ;
    cin >> n;

    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    // for loop
    for (int i = 2; i <= n-1; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout << arr[n-1] << " ";
    
    return 0;
=======
// Fibonacci Series

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: " ;
    cin >> n;

    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    // for loop
    for (int i = 2; i <= n-1; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout << arr[n-1] << " ";
    
    return 0;
>>>>>>> e169126 (day-1)
}