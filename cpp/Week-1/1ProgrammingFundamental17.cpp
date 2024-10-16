// Question 17) print max of three number

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three number: " << endl;
    cin >> a >> b >> c;

    if(a > b && a > c)
    cout << a << " is max" << endl;
    else if(b > c && b > a)
    cout << b << " is max" << endl;
    else if(c > a)
    cout << c << " is max" << endl;

    return 0;
} 
