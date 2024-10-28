#include <iostream>
using namespace std;

int main(){
    short a  = 2^16 - 1;
    short b = 10;
    short c = a + b;

    cout << c; // 23
    return 0;
}