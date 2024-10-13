// question 3) Average of three numbers

#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int sum = a + b + c;
    int avg = sum / 3;
    cout << "The average of the three numbers is: " << avg << endl;
      
    return 0;
}