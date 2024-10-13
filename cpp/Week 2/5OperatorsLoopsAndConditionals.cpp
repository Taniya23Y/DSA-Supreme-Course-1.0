<<<<<<< HEAD
/***************************** Step 37) **********************************/ 
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;
     // for loop
     for (int row = 0; row < rowCount; row++){                   /* Pattern --> 29 */
        // spaces                                                
        for (int col = 0; col < rowCount-row-1; col++){         //     1
          cout << " ";                                          //    232
        }                                                       //   34543
        // numbers                                              //  4567654  
        int start = row+1;                                      // 567898765
        for (int col = 0; col < row+1; col++){
          cout << start;
          start++;
        }
        // reverse counting
        int starting = 2*row;
        for (int col = 0; col < row; col++){
          cout <<starting;
          starting--;
        }
        cout << endl;
     }
   return 0;
}

/***************************** Step 38) **********************************/
#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    // for loop --> Numeric Hollow pyramid
    for (int row = 0; row < rowCount; row++){
      // spaces
       for (int col = 0; col < rowCount - row - 1; col++){
           cout << " ";
      }
      // Numbers with spaces between 
      int start = 1;
      for (int col = 0; col < 2*row+1; col++){                    /* Pattern --> 29 */
         // first row and last row
        if (row == 0 || row == rowCount - 1){                    //     1
            if (col % 2 == 0){                                   //    1 2
                cout << start;                                   //   1   3
                start++;                                         //  1     4
            }                                                    // 1 2 3 4 5
            else {                              
                // odd
                cout << " ";
            }
        }
        else {
            // first col
            if (col == 0){
                cout << 1;
            }
            else if(col == 2*rowCount+1-1){
            cout << row+1;
            }
            else {
                cout << " ";
            }
        }
      }
      cout << endl; 
    }
    return 0;
}

/****************************** step 1) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> AND (&)
     int a = 5;
     int b = 7;
     int c = a&b;
     cout << c;
     return 0;
}


/****************************** step 2) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> OR (|)
     int a = 5;
     int b = 7;
     int c = a|b;
     cout << c;
     return 0;
}

/****************************** step 3) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> Not (~)
     int a = 5;
     int b = 7;
     int c = (~a);
     int d = (~b);
     cout << c;
     cout << endl;
     cout << d;
     return 0;
}

/****************************** step 4) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> XoR (^)
    int a = 5;
    int b = 7;
    int c = a^b;
    cout << c;
  return 0;
}

/****************************** step 5) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> Left Shift (<<)
    int a = 5;
    int b = 7;
    int c = a<<b;
    cout << c;
  return 0;
}

/****************************** step 6) ********************************/
#include <iostream>
using namespace std;
int main(){

   // Bitwise operator----> Right Shift (>>)
    int a = 9;
    int b = 17;
    int c = a>>b;
    cout << c;
  return 0;
}

/****************************** step 7) ********************************/
#include <iostream>
using namespace std;
int main(){

     // Pre Increment Operator --> (++a)
    int a = 5;
    int c =++a;
    cout << c;
  return 0;  
} 

/****************************** step 8) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Post Increment Operator --> (a++)
    int a = 5;
    int c =a++;
    cout << c;
  return 0;  
}

/****************************** step 9) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Pre Decrement Operator --> (--a)
    int a = 5;
    int c =--a;
    cout << c;
  return 0;  
} 

/****************************** step 10) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Post Increment Operator --> (a--)
    int a = 5;
    int c =a--;
    cout << c;
  return 0;  
} 

/****************************** step 11) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Break Keyword;
    // for loop
    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
        // cout << "Taniya" << endl;
        break;
        }
        cout << "Taniya" << endl;
    }
     cout << "Yadav";
  return 0;  
} 

/****************************** step 12) ********************************/
#include <iostream>
using namespace std;
int main(){

    // continue Keyword;
    // for loop
    for (int i = 0; i < 5; i++)
    {
        if(i == 2 || i == 1){
        // cout << "Taniya" << endl;
       continue;
        }
        cout << i << endl;
    }
     cout << "Yadav";
  return 0;  
} 

/****************************** step 13) ********************************/
#include <iostream>
using namespace std;
//Global variable
int globalVariable = 10;
void myFunction() {
    cout << "Global variable Value: " << globalVariable << endl;
}
int main(){

    // Variable Scoping
     myFunction(); 
  return 0;  
} 

/****************************** step 14) ********************************/
#include <iostream>
using namespace std;
void myFunction() {
    // Local scope
    int LocalVariable = 20;
    cout << "Localvariable Value: " << LocalVariable << endl;
}
int main(){

    // Variable Scoping
     myFunction(); 
  return 0;
}

/****************************** step 15) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Variable Scoping
    // Block scope
    int x = 5;
    {
        int y = 10;
        cout << "Inner Block Variable Value: "  << y << endl;
    }
     cout << "Outer Block Variable Value: "  << x << endl;
  return 0;
}

/****************************** step 16) ********************************/
#include <iostream>
using namespace std;
int main(){
     int day;
     cin >> day;
     string dayNum;
    // switch case
    switch (day)
    {
    case 1:
        dayNum = "Monday";
        break;
    
    case 2:
        dayNum = "Tuesday";
        break;

    case 3:
        dayNum = "Wednesday";
        break;

    case 4:
        dayNum = "Thursday";
        break;
    
    case 5:
        dayNum = "Friday";
        break;

    default:
        dayNum = "Invalid day";
        break;
    }
    cout << "The day is: " << dayNum << endl;
  return 0;
}

=======
/***************************** Step 37) **********************************/ 
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;
     // for loop
     for (int row = 0; row < rowCount; row++){                   /* Pattern --> 29 */
        // spaces                                                
        for (int col = 0; col < rowCount-row-1; col++){         //     1
          cout << " ";                                          //    232
        }                                                       //   34543
        // numbers                                              //  4567654  
        int start = row+1;                                      // 567898765
        for (int col = 0; col < row+1; col++){
          cout << start;
          start++;
        }
        // reverse counting
        int starting = 2*row;
        for (int col = 0; col < row; col++){
          cout <<starting;
          starting--;
        }
        cout << endl;
     }
   return 0;
}

/***************************** Step 38) **********************************/
#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    // for loop --> Numeric Hollow pyramid
    for (int row = 0; row < rowCount; row++){
      // spaces
       for (int col = 0; col < rowCount - row - 1; col++){
           cout << " ";
      }
      // Numbers with spaces between 
      int start = 1;
      for (int col = 0; col < 2*row+1; col++){                    /* Pattern --> 29 */
         // first row and last row
        if (row == 0 || row == rowCount - 1){                    //     1
            if (col % 2 == 0){                                   //    1 2
                cout << start;                                   //   1   3
                start++;                                         //  1     4
            }                                                    // 1 2 3 4 5
            else {                              
                // odd
                cout << " ";
            }
        }
        else {
            // first col
            if (col == 0){
                cout << 1;
            }
            else if(col == 2*rowCount+1-1){
            cout << row+1;
            }
            else {
                cout << " ";
            }
        }
      }
      cout << endl; 
    }
    return 0;
}

/****************************** step 1) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> AND (&)
     int a = 5;
     int b = 7;
     int c = a&b;
     cout << c;
     return 0;
}


/****************************** step 2) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> OR (|)
     int a = 5;
     int b = 7;
     int c = a|b;
     cout << c;
     return 0;
}

/****************************** step 3) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> Not (~)
     int a = 5;
     int b = 7;
     int c = (~a);
     int d = (~b);
     cout << c;
     cout << endl;
     cout << d;
     return 0;
}

/****************************** step 4) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> XoR (^)
    int a = 5;
    int b = 7;
    int c = a^b;
    cout << c;
  return 0;
}

/****************************** step 5) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Bitwise operator----> Left Shift (<<)
    int a = 5;
    int b = 7;
    int c = a<<b;
    cout << c;
  return 0;
}

/****************************** step 6) ********************************/
#include <iostream>
using namespace std;
int main(){

   // Bitwise operator----> Right Shift (>>)
    int a = 9;
    int b = 17;
    int c = a>>b;
    cout << c;
  return 0;
}

/****************************** step 7) ********************************/
#include <iostream>
using namespace std;
int main(){

     // Pre Increment Operator --> (++a)
    int a = 5;
    int c =++a;
    cout << c;
  return 0;  
} 

/****************************** step 8) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Post Increment Operator --> (a++)
    int a = 5;
    int c =a++;
    cout << c;
  return 0;  
}

/****************************** step 9) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Pre Decrement Operator --> (--a)
    int a = 5;
    int c =--a;
    cout << c;
  return 0;  
} 

/****************************** step 10) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Post Increment Operator --> (a--)
    int a = 5;
    int c =a--;
    cout << c;
  return 0;  
} 

/****************************** step 11) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Break Keyword;
    // for loop
    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
        // cout << "Taniya" << endl;
        break;
        }
        cout << "Taniya" << endl;
    }
     cout << "Yadav";
  return 0;  
} 

/****************************** step 12) ********************************/
#include <iostream>
using namespace std;
int main(){

    // continue Keyword;
    // for loop
    for (int i = 0; i < 5; i++)
    {
        if(i == 2 || i == 1){
        // cout << "Taniya" << endl;
       continue;
        }
        cout << i << endl;
    }
     cout << "Yadav";
  return 0;  
} 

/****************************** step 13) ********************************/
#include <iostream>
using namespace std;
//Global variable
int globalVariable = 10;
void myFunction() {
    cout << "Global variable Value: " << globalVariable << endl;
}
int main(){

    // Variable Scoping
     myFunction(); 
  return 0;  
} 

/****************************** step 14) ********************************/
#include <iostream>
using namespace std;
void myFunction() {
    // Local scope
    int LocalVariable = 20;
    cout << "Localvariable Value: " << LocalVariable << endl;
}
int main(){

    // Variable Scoping
     myFunction(); 
  return 0;
}

/****************************** step 15) ********************************/
#include <iostream>
using namespace std;
int main(){

    // Variable Scoping
    // Block scope
    int x = 5;
    {
        int y = 10;
        cout << "Inner Block Variable Value: "  << y << endl;
    }
     cout << "Outer Block Variable Value: "  << x << endl;
  return 0;
}

/****************************** step 16) ********************************/
#include <iostream>
using namespace std;
int main(){
     int day;
     cin >> day;
     string dayNum;
    // switch case
    switch (day)
    {
    case 1:
        dayNum = "Monday";
        break;
    
    case 2:
        dayNum = "Tuesday";
        break;

    case 3:
        dayNum = "Wednesday";
        break;

    case 4:
        dayNum = "Thursday";
        break;
    
    case 5:
        dayNum = "Friday";
        break;

    default:
        dayNum = "Invalid day";
        break;
    }
    cout << "The day is: " << dayNum << endl;
  return 0;
}

>>>>>>> e169126 (day-1)
