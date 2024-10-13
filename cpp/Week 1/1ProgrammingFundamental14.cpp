// question 14) check the number is prime or not.

#include <iostream>
using namespace std;
int main()
{
    int n, i, flag = 0, m = 0;
    cout << "Number: ";
    cin >> n;

    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not Prime." << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Number is Prime." << endl;
    return 0;
}