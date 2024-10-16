// Question 9) Find the simple interest.

#include <iostream>
using namespace std;
int main (){

    int P, R, T;
    cout << " Principle ,Rate and Time are: " << endl;
    cin >> P >> R >> T;

    float SI = P * R * T / 100;
    cout << "The simple interest are: " << SI << endl;

    return 0;
} 