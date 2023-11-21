// question 10) Print Counting from 1 to N

#include <iostream>
using namespace std;
int main()
{
    int number;    // i = 0, i<num, i++ [print]
    int i = 0;
    cout << "Enter a number: ";
    cin >> number;
    
    // condition
    for (int i = 0; i < number; i++)
    {
        cout << i + 1 << " " << endl;
    }

    return 0;
}

