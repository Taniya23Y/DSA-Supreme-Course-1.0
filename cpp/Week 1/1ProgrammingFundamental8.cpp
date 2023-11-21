// Question 8) Find perimeter of a triangle

#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3, p;
    cout << " The sides of traingle are : " << endl;
    cin >> s1 >> s2 >> s3;

    p = s1 + s2 + s3;
    cout << "the perimeter of the triangle is: " << p;
    return 0;
}