/************************* step 1) ************************************/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       cout << i << endl;
    }

    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       cout << i << endl;
    }
                                         // this is block of code are bulky and not readable
    cout << "Enter the number: ";        // we can replace this code with functions.
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       cout << i << endl;
    }
    
    return 0;
}

/************************* step 2) ************************************/
#include <iostream>
using namespace std;
// function declaration
void printNumber (int num){
    cout << num << endl;
}
int main(){
    int a = 5;
    cout << "Address of a: " << &a << endl;
    printNumber(a);
    return 0;
}

/************************* step 3) ************************************/
#include <iostream>
using namespace std;
// function declaration
int add(int a, int b){
    int result = a+b;
    return result;
}
int main(){
    // Question --> Write a function to add 2 numbers
    int a;
    cout << "Enter the value of a: " << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    // function call
     int sum = add(a,b);
     cout<< "Addition result is: " << sum << endl; 
    return 0;
}

/************************* step 4) ************************************/
#include <iostream>
using namespace std;
// function declaration
int findMax(int num1, int num2, int num3){
  
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
       return num2;
    }
    else {
        return num3;
    }
    
    
}
int main(){
    // Question --> Write a function to Find max number
    int a;
    cout << "Enter the value of a: " << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    int c;
    cout << "Enter the value of c: " << endl;
    cin >> c;

    // function call
     int maximumNumber = findMax(a,b,c);
     cout<< "The maximum number is: " << maximumNumber << endl; 
    return 0;
}

/************************* step 5) ************************************/
#include <iostream>
using namespace std;
// function declare + define
// n is a parameter
void printCounting(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main(){
      // Question --> Write a function to counting 1 to N
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    // function call
    // n is a argument
    printCounting(n);
    return 0;
}

/************************* step 6) ************************************/
#include <iostream>
using namespace std;
// function declare + define
int getGrade(int marks){
     if (marks >= 90)
        return 'A';
     else if (marks >= 80)
        return 'B';
     else if (marks >= 70)
        return 'C';
     else if (marks>= 60)
        return 'D';
     else 
        return 'E'; 
}

int main(){
    // Question --> Write a function to find student marks and grade problem 
    int marks;
    cout << "Enter the marks: " << endl;
    cin >> marks;
    // function call
    // marks is a argument
    char finalGrade =  getGrade(marks);
    cout << finalGrade << endl; 
    return 0;
}


#include <iostream>
using namespace std;
// function declare + define
int getGrade(int marks){
    switch (marks/10){
        case 10: return 'A'; break;   // Explicit mentioned
        case 9: return  'A'; break;
        case 8: return  'B'; break;
        case 7: return  'C'; break;
        case 6: return  'D'; break;
        default: return 'E';
    }
}
int main(){
    // int marks;
    // cout << "Enter the marks: " << endl;
    // cin >> marks;

    // function call
    // marks is a argument

    // char finalGrade =  getGrade(marks);
    // cout << finalGrade << endl; 

    for (int i = 0; i <= 100; i++){
       char ans = getGrade(i);
       cout << "Grade for marks = " << i << " is : " << ans << endl;
    }
    
    return 0;
}

/************************* step 7) ************************************/
#include <iostream>
using namespace std;
// function declare + define
int sumEvenNumber(int num){
    // int sum = 0;
    // for (int i = 0; i <= num; i++){
    //     sum = sum + i;
    //    }
    //    return sum;
 

    /* Even sum*/
    int sum = 0;
    for (int i = 2; i <= num; i += 2)
    {
        sum = sum + i;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

   // function call
   int EvenNumber = sumEvenNumber(num);
   cout << "sum upto: " << num << " is " << EvenNumber << endl;
    return 0;
}


/* The above code with full explanation with cout code */
#include <iostream>
using namespace std;
int getEvenSum(int n){
    cout << " Inside the getEvenSum function" << endl;
    cout << " Value of n is: " << n << endl;
    cout << endl;
    int sum = 0;
    cout << " The inital value of sum is:  " << sum << endl;

    for (int i = 2; i <= n; i = i+2){
        cout << " for value of i: " << i << endl;
        sum = sum + i;
        cout << " sum now become: " << sum << endl;
        cout << endl;
    }
    cout << " Returning sum =  " << sum << endl;
     return sum;
}
int main(){
    int n;
    cout << " Enter the num: " << endl;
    cin >> n;

    // function call
    cout << " Calling getEvenSum Function " << endl;
    int ans = getEvenSum(n);
    cout << " Even sum : " << ans << endl;
    return 0;
}


/************************* step 8) ************************************/
#include <iostream>
using namespace std;
// function declare + define 
float circleArea(float radius){           /* write a function of area of circle */
 
   float area = 3.14 * radius *radius;   
   return area; 
}
int main(){
    float radius;
    cout <<" Enter the radius of circle: " << endl;
    cin >> radius;

    // function call
    float ans = circleArea(radius);
    cout << " Area of circle is: " << ans << endl;
    return 0;
}

/************************* step 9) ************************************/
#include <iostream>
using namespace std;
int getEvenOdd(int num1){         /* find no. is even or odd */
    int Even = 0;
    int odd = 0;
    if (num1 % 2 == 0){
       cout << num1 << " is Even"  << endl;
    }
    else{
      cout << num1 << " is Odd" << endl;
    }
   
}
int main(){
    int num1;
    cout << "Enter the number: " << endl;
    cin >> num1;

    // function call
    int ans = getEvenOdd(num1);

    return 0;
}

/************************* step 10) ************************************/
#include <iostream>
using namespace std;
// function declare + define       /* Find factorial of a number*/
int checkFactorial(int num1){
    int fact = 1;
    for (int i = 1; i <=num1; i++)
    {
        fact = fact * i;
    }
    return fact;   
 
}
int main(){
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;

    // function call
    int ans = checkFactorial(num1);
   cout << "The Factorial is: " << ans << endl;
    return 0;
}

/************************* step 11) ************************************/
#include <iostream>
using namespace std;
// function declare + define      /* Check a number is prime or not*/
bool checkPrime(int num1){
    int i = 2;
    for (int i = 2; i < num1; i++)
    {
        if(num1 % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;

    // function call
    bool ans = checkPrime(num1);
    if (ans)
    {
       cout << "Prime\n" << endl;
    }
    else {
        cout << "Not Prime ";
    }
    return 0;
}

/************************* step 12) ************************************/
#include <iostream>
using namespace std;
// function declare + define      /* Print all number from 1 to N */
bool printPrime(int num1){
    int i = 2;
    for (int i = 2; i < num1; i++)
    {
        if(num1 % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;

    // function call
   
    for (int i = 1; i <= num1; i++)
    {
         bool ans = printPrime(i);
       if (ans)
       {
        cout << i << " ";
        }
    }
  return 0;
}

/************************* step 13) ************************************/
#include <iostream>
using namespace std;
// function declare + define
int printDigit(int num1){           /* Print all digits of given number */ 
    int ans = 0;
    while (num1 > 0)
    {
      int rem =  num1 % 10;    
      cout << rem << " ";
      num1 = num1 / 10;
    }
    cout << endl;
        return ans;
}

int main(){                      
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;

    // function call
    int ans = printDigit(num1);
    // cout << ans << endl;

    return 0;
}

 /************************* step 13) ************************************/
#include <iostream>
using namespace std;
 // function declare + define    /* create a number using digits */
int createNumber(int digits[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans * 10 + digits[i];
    }
    return ans;
}

int main(){                      
 int digits[4] = {8, 2, 3, 7};
    int size = sizeof(digits) / sizeof(digits[0]);

    int result = createNumber(digits, size);
    cout << "The number is: " << result << endl;

    return 0;
}

/************************* step 14) ************************************/
#include <iostream>  
using namespace std;
int getSetBits(int number) {           /* Print number of set bit. */
    int ans = 0;
    while (number > 0) {
       ans += number & 1; // Check if the least significant bit is set
        number >>= 1; // Right shift the number by 1 bit
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int setBits = getSetBits(number);
    cout << "Number of set bits in " << number << " is: " << setBits << endl;
    return 0;
}

// /************************* step 14) ************************************/
#include <iostream>  
#include <bitset>
using namespace std;
int getBinaryEquivalentToDecimal(int number) {           /* Print binary equivalent to decimal number. */
    cout << "Binary equivalent of " << number << " is: ";
    bitset<sizeof(number) * 8> binary(number);
    cout << binary << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int binaryToDecimal = getBinaryEquivalentToDecimal(number);
    // cout << "The Given binary number to Decimal " << number << " is: " << binaryToDecimal << endl;
    return 0;
}

/************************* step 15) ************************************/
#include <iostream>  
using namespace std;
double convertKMtoMILES(int kilometers) {           /* Convert distance in KM to MILES. */
    double Miles = kilometers * 0.62137119; // conversion factor
    return Miles;
}

int main() {
    double kilometers;
    cout << "Enter a kilometer: ";
    cin >> kilometers;
    double Miles = convertKMtoMILES(kilometers);
    cout << kilometers << " kilometers is equal to: " << Miles << " Miles." << endl;
    return 0;
}

/************************* step 16) ************************************/
#include <iostream>
using namespace std;
// function declare + define       /* Print Reverse number */  
int printReverse(int num1){
    int ans = 0;
    while (num1 > 0)
    {
        ans = ans * 10 + num1 % 10;
        num1 /= 10;
    }
  return ans;
}

int main(){                     
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;

    // function call
    int ans = printReverse(num1);
    cout << num1 << " Number of Reverse is: " << ans << endl;

    return 0;
}

/************************* step 16) ************************************/
#include <iostream>
using namespace std;
double ConvertCelsiusToFahrenheit( double Celsius){
      double fahrenheit = Celsius * 9 / 5 + 32;       /* Convert C to F */
      return fahrenheit;
}
int main(){
    double Celsius;
    cout << "Enter Celsius: " << endl;
    cin >> Celsius;
    // function call
    double fahrenheit  = ConvertCelsiusToFahrenheit(Celsius);
    cout << Celsius << " Degree Celsius is equal to: " << fahrenheit << " degrees Fahrenheit." << endl;
   return 0;
}

/************************* step 17) ************************************/
#include <iostream>
using namespace std;   // first way
int DecimalToBinaryMethod( int num1){
        while (num1 > 0){                /* Convert Decimal to binary and reverse it */
            int bit = num1 % 2;  // num1 % 10; we can see the actual decimal value
            cout << bit << endl;
            num1 = num1 / 2;
        }
        return 0;
}
int main(){
   int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;
    // function call
    int ans = DecimalToBinaryMethod(num1);
   return 0;
}

#include <iostream>
#include <math.h>   // second way
using namespace std;
int DecimalToBinaryMethod( int num1){
    int binaryNo = 0;
    int i = 0; 
        while (num1 > 0){        /* Convert Decimal to binary and reverse it */             
            int bit = num1 % 2;  // num1 % 10; we can see the actual decimal value
            binaryNo = bit * pow(10, i++) + binaryNo;
            // cout << bit << endl;
            num1 = num1 / 2;
        }
        return binaryNo;
}
int main(){
   int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;
    // function call
    int binary = DecimalToBinaryMethod(num1);
    cout << binary << endl;
   return 0;
}


#include <iostream>
#include <math.h>   // third way
using namespace std;
int DecimalToBinaryMethod( int num1){
    // bitwise method
    int binaryNo = 0;
    int i = 0; 
        while (num1 > 0){        /* Convert Decimal to binary and reverse it */             
            int bit = (num1 & 1);  // num1 % 10; we can see the actual decimal value
            binaryNo = bit * pow(10, i++) + binaryNo;
            // cout << bit << endl;
            num1 = num1 >> 1;
        }
        return binaryNo;
}
int main(){
   int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;
    // function call
    int binary = DecimalToBinaryMethod(num1);
    cout << binary << endl;
   return 0;
}

/************************* step 18) ************************************/
#include <iostream>
#include <math.h>      // fourth way
using namespace std;
int BinaryToDecimalMethod( int num1){
        int decimal = 0;                      /* Convert Binary to decimal and reverse it */
        int i = 0;
        while (num1){
           int bit = num1 % 10;
           decimal = decimal + bit * pow(2, i++);
        }
        num1 /= 10;
        
        return decimal;
}
int main(){
   int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;
    // function call
    int decimal = BinaryToDecimalMethod(num1);
    cout << decimal << endl;
   return 0;
}
