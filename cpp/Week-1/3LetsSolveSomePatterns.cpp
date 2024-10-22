/************ step 1) ************************/
#include <iostream>
using namespace std;
int main(){
    // declare a integer type variable
    int score;

    // print the score
    cout << "Enter Score: " << endl;

    // take input into score variable
    cin >> score;

    // if condition
    if (score < 300)
    {
        cout << "India wins" << endl;
    }
    cout << "Pak wins" << endl;

    return 0;
}

/************ step 2) ************************/
#include <iostream>
using namespace std;
int main(){
    // declare a integer type variable
    int score;

    // print the score
    cout << "Enter Score: " << endl;

    // take input into score variable
    cin >> score;

    // if condition
    if (score < 300){
        cout << "India wins" << endl;
    }
    else{
    cout << "Pak wins" << endl;
    }

    return 0;
}

/************ step 3) ************************/
#include <iostream>
using namespace std;
int main(){
    // declare a integer type variable
    int age;

    // print the score
    cout << "Enter age: " << endl;

    // take input into score variable
    cin >> age;

    // if condition
    if (age > 18)
    {
        cout << "I can Vote" << endl;
    }
    else{
        cout << "I can not Vote" << endl;
    }

    return 0;
}

/************ step 4) ************************/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    // nested if - else
    if (marks >= 90)
    {
        cout << "A Grade";
    }
    else
    {
        if (marks >= 80)
        {
            cout << "B Grade";
        }
        else
        {
            if (marks >= 60)
            {
                cout << "C Grade";
            }
            else
            {
                if (marks >= 40)
                {
                    cout << "D Grade";
                }
                else 
                {
                    cout << "F Grade" ;
                }
            }
        }
    }

    // if else-if else
    if (marks >= 90)
    {
        cout << "A Grade" ;
    }
    else if (marks >= 80)
    {
        cout << "B Grade" ;
    }
    else if (marks >= 60)
    {
        cout << "C Grade" ;
    }
    else if (marks >= 40)
    {
        cout << "D Grade" ;
    }
    else
    {
        cout << "F Grade" ;
    }
     
    return 0;
}

/************ step 5) ************************/
#include <iostream>
using namespace std;
int main(){
    int broNum;
    cin >> broNum;
    // nested if - else
    if(broNum == 0){
      cout <<"Baat ban jaegi" << endl;
    }
    else {
        cout << "Baat nahi banegi";
    }
    return  0;
}

/************ step 6) ************************/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    for (int i = 0; i < 5; i = i + 1)
    {
        cout << "Taniya Yadav" << endl;     // 1
    } //answer-> Taniya Yadav Taniya Yadav Taniya Yadav Taniya Yadav Taniya Yadav 

    for (int i = 0; i < 5; i = i + 1)
    {
        cout << i << endl;                 // 2
    } // answer -> 0 1 2 3 4

    for (int i = 5; i > 0; i = i - 1)     
    {
        cout << i << endl;                // 3
    } // answer -> 5 4 3 2 1

    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << i << endl;                  // 4
    } // answer -> 2 4 6 8 10 12 14 16 18 20

    for (int i = 0; i <= 5; i = i + 2)
    {
        cout << i << endl;                 // 5
    } // answer -> 0 2 4

    for (int i = 1; i <= 5; i = i + 2)
    {
        cout << i << endl;                 // 6
    } // answer -> 1 3 5

    for (int i = 1; i < 10; i = i * 2)
    {
        cout << i << endl;                 // 7
    } // answer -> 1 2 4 8
    
    for (int i = 100; i > 0; i = i / 2)
    {
        cout << i << endl;                 // 8
    } // answer -> 100 50 25 12 3 1

    
    for (int i = 5; (i >= 0 && i <= 10); i = i + 1)
    {
        cout << i << endl;                 // 9
    } // answer -> 5 6 7 8 9 10


    int i = 0;
    for( ; ; ){             // 10
        if(i < 5)
        cout << i << endl;    
        i = i+1;             
    } // answer -> 0 1 2 3 4 
       
    return 0;
 }

/************ step 7) ************************/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    int n;
    if (cin >> n)                    // answer
    {                                // 2 
       cout << "Taniya" << endl;     // Taniya
    }
    
    return 0;
}

/************ step 8) ************************/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    int n;
    if (cout << n)                 // answer 
    {                              // 0Taniya
       cout << "Taniya" << endl;  
    }
    
    return 0;
}

/************ step 9) ************************/
     // patterns
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    // solid rectangle
    for (int row = 0; row < 3; row++)          /* Pattern --> 1 */
    {
        for (int col = 0; col < 5; col++)      // *  *  *  *  * 
        {                                      // *  *  *  *  *     solid rectangle
            cout << " * " ;                    // *  *  *  *  * 
        }
         cout << endl;
    }                                       
    return 0;
}

/************ step 10) ************************/
     // patterns
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    // solid square
    // outer loop for row
    for (int row = 0; row < 4; row += 1)
    {                                            /* Pattern --> 2 */
        // inner loop for col
        for (int col = 0; col < 4; col += 1)      // *  *  *  *   
        {                                         // *  *  *  *   
            cout << " * " ;                       // *  *  *  *   solid square
        }                                         // *  *  *  *  
         cout << endl;
    }                                       
    return 0;
}

/************ step 11) ************************/
#include <iostream>
using namespace std;
int main()
{ 
    //Hollow Rectangle
    //outer loop for row
    for (int row = 0; row < 3; row += 1){
        //first row and last row --> print 5 *
        if(row == 0 || row == 2){                      /* Pattern --> 3 */
        // inner loop for col
           for (int col = 0; col < 5; col += 1)      // *  *  *  *  *   
           {                                         // *           *   
               cout << "* " ;                        // *  *  *  *  *     Hollow Rectangle
           } 
        }
        else{
            // remaining middle rows
            // first star
            cout << "* ";
            // spaces
            for (int i = 0; i < 3; i += 1){
                cout << "  ";
            }
            // last star 
            cout << "* ";
        }                                        
         cout << endl;
    } 
    return 0;
}

/********************* step 12) **************************/
#include <iostream>
using namespace std;
int main(){
int rowCount, colCount;
  cin >> rowCount;
  cin >> colCount;

    // Hollow Rectangle
    // outer loop for row
    for (int row = 0; row < rowCount; row += 1){
        //first row and last row --> print 5 *
        if(row == 0 || row == rowCount  - 1){                 /* Pattern --> 4 */
        // inner loop for col
           for (int col = 0; col < colCount; col += 1)      // *  *  *  *  *   
           {                                                // *           *   
               cout << "* " ;                               // *  *  *  *  *     Hollow Rectangle
           } 
        }
        else{
            // remaining middle rows
            // first star
            cout << "* ";
            // spaces
            for (int i = 0; i < colCount - 2; i += 1){
                cout << "  ";
            }
            // last star 
            cout << "* ";
        }                                        
         cout << endl;
    } 
                                        
     return 0;
 }

/************ step 13) ************************/
#include <iostream>
using namespace std;
int main(){

    int rowCount;
    cin >> rowCount;
                                                               /* Pattern --> 5 */
     // Half pyramid 
                                                              // *
    for (int row = 0; row < rowCount; row++)                  // *  *
    {                                                         // *  *  * 
        for (int col = 0; col < row + 1; col++)               // *  *  *  *
        {                                                     // *  *  *  *  * 
            cout << "* ";                                     // *  *  *  *  *  *
        }                                                     // *  *  *  *  *  *  *
        cout << endl;
    }
    

    return 0;
}

/************************** step 14) ************************/
#include <iostream>
using namespace std;
int main(){

     int rowCount;
     cin >> rowCount;
                                                             /* Pattern --> 6 */
    // Half pyramid
                                                          // *  *  *  *  *  *  *
    for (int row = 0; row < rowCount; row++)              // *  *  *  *  *  *
    {                                                     // *  *  *  *  * 
        for (int col = 0; col < rowCount - row; col++)    // *  *  *  *
        {                                                 // *  *  *   
            cout << "* ";                                 // *  *  
        }                                                 // *  
        cout << endl;
    }
    

    return 0;
}

/************ step 15) ************************/
#include <iostream>
using namespace std;
int main(){

int rowCount;
cin >> rowCount;
                                                           /* Pattern --> 7 */
     // Half pyramid
                                                         // 1
    for (int row = 0; row < rowCount; row++)             // 1  2
    {                                                    // 1  2  3 
        for (int col = 0; col < row + 1; col++)          // 1  2  3  4
        {                                                // 1  2  3  4  5 
            cout << col + 1 << " " ;                     // 1  2  3  4  5  6
        }                                                // 1  2  3  4  5  6  7
        cout << endl;
    }
    

    return 0;
}

/************ step 16) ************************/
 #include <iostream>
 using namespace std;
 int main(){

     int rowCount;
     cin >> rowCount;
                                                             /* Pattern --> 8 */
     // Half pyramid
                                                         // 1  2  3  4  5  6  7
    for (int row = 0; row < rowCount; row++)             // 1  2  3  4  5  6
    {                                                    // 1  2  3  4  5
        for (int col = 0; col < rowCount - row; col++)   // 1  2  3  4
        {                                                // 1  2  3  
            cout << col + 1 << " " ;                     // 1  2 
        }                                                // 1  
       cout << endl;
    }
    

    return 0;
}