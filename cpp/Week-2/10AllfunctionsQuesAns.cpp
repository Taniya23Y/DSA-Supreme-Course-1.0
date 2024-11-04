// #include <iostream>
// using namespace std;

// // function declaration
// void printNumber (int num){
//     cout << num << endl;
// }

// int main(){
//     int a = 5;
//     cout << "Address of a: " << &a << endl;
//     printNumber(a);
//     return 0;
// }

//* Question 1) --> write a function to add two numbers
// #include <iostream>
// using namespace std;

// // name print
// int addNumbers(int num1, int num2){
//     int result = num1 + num2;
//    return result;
// }

// int main(){
//     int num1, num2;
//     cout << "Enter a number 1: ";
//     cin >> num1;
//     cout << "Enter a number 2: ";
//     cin >> num2;
//     int sum = addNumbers(num1, num2);
    
//     // addition of two numbers
//     cout << "Addition of "<< num1 << " and " << num2 << " is : " << sum << endl;
    
//     return 0;
// }

//* Question 2) --> Write a function to Find max number
// #include <iostream>
// using namespace std;

// // function declaration + 
// int maxOfThree(int num1, int num2, int num3){
//     // logic
//     if(num1 > num2 && num1 > num3){
//        return num1;
//     } else if(num2 > num3 & num2 > num1 ){
//        return num2;
//     } else {
//      return num3;
//     }
// }

// int main(){
//     int num1, num2, num3;
//     cout << "Enter num1: ";
//     cin >> num1;
//     cout << "Enter num2: ";
//     cin >> num2;
//     cout << "Enter num3: ";
//     cin >> num3;

//     // function call
//     int maximum = maxOfThree(num1, num2, num3);

//     cout << "Maximum number from " << num1 << ", " << num2 << " and " << num3 << " is : " << maximum << endl;
//     return 0;
// }

//* Question 3) --> Write a function to counting 1 to N
// #include <iostream>
// using namespace std;

// // function declaration + define
// void counting1toN(int num1){
//     // logic
//     for(int i = 1; i <= num1; i++){
//         cout << i << " ";
//     }
//      cout << endl;
// }

// int main(){
//     int num1;
//     cout << "Enter num1: ";
//     cin >> num1;

//     // function call
//     // counting1toN(num1);

//     cout << "Counting 1 to " << num1 << " is : "  ;
//     counting1toN(num1);
//     return 0;
// }

//* Question 4) --> Write a function to find student marks and grade problem 
// #include <iostream>
// using namespace std;

// int getGrade(int marks){
//     // logic 
//     if(marks > 90){
//       return 'A';
//     } else if(marks > 80){
//         return 'B';
//     } else if(marks > 70){
//       return 'C';
//     } else if(marks > 60) {
//        return 'D';
//     } else {
//         return 'F';
//     }
// }

// int main(){
//     int marks;
//     cout << "Enter your Grade: ";
//     cin >> marks;

//     char finalGrade =  getGrade(marks);
//     cout << finalGrade << endl; 
//     return 0;
// }


//* Question 5) --> Sum of Even number upto N
// #include <iostream>
// using namespace std;

// int sumOfEvenNumber(int num){
//     int sum = 0;
//     // for (int i = 0; i <= num; i++){
//     //     sum = sum + i;
//     // }
//     // return sum;

//     for (int i = 1; i <= num; i++){
//         if(i % 2 == 0){
//             sum = sum + i;
//         }
//     }
//     return sum;
// }

// int main(){
//     int num1;
//     cout << "Enter a Number: ";
//     cin >> num1;

//     int evenNo =  sumOfEvenNumber(num1);
//     cout << "Even number upto " << num1 << " is : " << evenNo << endl; 
//     return 0;
// }

//* Question 6) --> write a function for area of circle
// #include <iostream>
// using namespace std;

// float areaOfCircle(float radius){
//     float pie = 3.14;
//     return 2 * pie * radius;
// }
// int main(){
//     float radius;
//     cout << "Enter a radius: ";
//     cin >> radius;

//     float area =  areaOfCircle(radius);
//     cout << "Area of circle of " << radius << " is : " << area << endl; 
//     return 0;
// }

//* Question 7) --> find no. is even or odd
// #include <iostream>
// using namespace std;

// int EvenOROddNumber(int number){
//     if(number % 2 == 0){
//         cout << number << " is even number." << endl;
//     } else {
//         cout << number << " is odd number." << endl;
//     }
// }

// int main(){
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     int evenOdd = EvenOROddNumber(number);

//     return 0;
// }

//* Question 8) --> Find factorial of a number
// #include <iostream>
// using namespace std;

// int factNum(int num){
//     int fact = 1;
//     for(int i = 1; i <= num; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int number = factNum(num);
//     cout << "Factorial of " << num << " is " << number << endl;
//     return 0;
// }

//* Question 9) -->Check a number is prime or not
// #include <iostream>
// using namespace std;

// bool primeOrNot(int num){
//     int i = 2;
//     for (int i = 2; i < num; i++)
//     {
//         if(num % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     bool number = primeOrNot(num);
//     if (number)
//     {
//        cout << "Prime.";
//     }
//     else {
//         cout << "Not Prime ";
//     }
//     return 0;
// }

//* Question 10) --> Print all prime number from 1 to N 
// #include <iostream>
// using namespace std;

// int oneToN(int num){
//     for(int i = 1; i <= num; i++){
//         cout << i << endl;
//     }
 
// }

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     bool number = oneToN(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool PrintPrimeOneToN(int num1){
//     int i = 2;
//     for (int i = 2; i < num1; i++)
//     {
//         if(num1 % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
    
//     for (int i = 1; i <= num; i++)
//     {
//        bool ans = PrintPrimeOneToN(i);
//        if (ans)
//        {
//         cout << i << " ";
//         }
//     }
//     return 0;
// }

//* Question 12) --> Print all digits of given number
// #include <iostream>
// using namespace std;

// int reverseNum(int num){
//   int ans = 0;
//   while (num > 0)
//   {
//     int rem = num % 10;
//     cout << rem << " ";
//     num = num / 10;
//   }
//    cout << endl;
//   return ans;
// }

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     // logic
//     int ans = reverseNum(num);
//   return 0;
// }

//* Question 13) --> create a number using digits 
#include <iostream>  
using namespace std;

int main(){
    return 0;
}

//* Question 14) --> Print number of set bit.
// #include <iostream>  
// using namespace std;

// int main(){
//     return 0;
// }

//* Question 15) --> Print binary equivalent to decimal number. 
// #include <iostream>  
// #include <bitset>
// using namespace std;

// int main(){
//     return 0;
// }

//* Question 16) --> Convert distance in KM to MILES. 
// #include <iostream>  
// using namespace std;

// int main(){
//     return 0;
// }

//* Question 17) --> Print Reverse number 
// #include <iostream>
// using namespace std;

// int main(){
//     return 0;
// }

//* Question 18) --> Convert C to F 
// #include <iostream>
// using namespace std;

// int main(){
//     return 0;
// }

//* Question 19) --> Convert Decimal to binary and reverse it 
// #include <iostream>
// using namespace std; 

// int main(){
//     return 0;
// }

//* Question 20) --> Convert Binary to decimal and reverse it 
// #include <iostream>
// #include <math.h>      // fourth way
// using namespace std;

// int main(){
//     return 0;
// }