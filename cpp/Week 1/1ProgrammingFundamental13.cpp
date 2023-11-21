// Question 13) Find fictorial Number

#include <iostream>
using namespace std;
int main(){
    int num, i = 1, fact = 1;
    cout << "Enter The Number: " << endl ;
    cin >> num;

    // calculate
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    cout << "The factorial of given number is: " << fact << endl;
    return 0;
}
