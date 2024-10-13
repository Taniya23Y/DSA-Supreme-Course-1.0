// question 2) Find Circumference of circle

#include <iostream>
using namespace std;
int main() {
    int r;
    float pi = 3.14;

    cout << "Radius of circle is: " ;
    cin >> r;

    // calculation 
    float circum = 2 * pi * r;
    cout << "Circumference of circle is: " << circum << endl;
    return 0;
}