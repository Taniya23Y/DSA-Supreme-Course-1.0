// Question 15) Valid traingle or not

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter 3 sides of triangle : " << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    cout << "Valid triangle";
    else
    cout << "Not a valid triangle";
    return 0;
}

 