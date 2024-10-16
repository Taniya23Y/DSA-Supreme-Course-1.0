
                    // step == code
            // step 1) == code 1)

/***************   step 1)    ******************/
int main(){
    return 0;
}

/***************   step 2)    ******************/
int main(){
    cout << " Namaste Bharat " ;    //f.cpp:8:5: error: 'cout' was not declared in this scope
    return 0;                      //cout << " Namaste Bharat " ;
                                  //^~~~
   
}

/***************   step 3)    ******************/
#include <iostream>
int main()
{
    cout << " Namaste Bharat " ;  /*c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:61:18: note:  'std::cout'
                                 extern ostream cout;  /// Linked to standard output
                                                ^~~~        */
    return 0;
}

/***************   step 4)    ******************/
#include <iostream>     
int main(){                              // output: Namaste Bharat
    std::cout << " Namaste Bharat ";
    return 0;
}

/***************   step 5)    ******************/
#include <iostream>  
using namespace std;   
int main(){                              // output: Namaste Bharat
    cout << " Namaste Bharat ";
    return 0;
}

/***************   step 6)    ******************/
#include <iostream>  
using namespace std;   
int main(){                              // output: Namaste Bharat
    cout << "Namaste Bharat\n" << endl;  //
    cout << '\n';                        //
    return 0;
}

/***************   step 7)    ******************/
#include <iostream>  
using namespace std;   
int main(){                                // output: Enter a number: 
    cout << "Enter a number: " << endl;    //7
    int a;                                 //You Entered7
    //taking input 
    cin >> a;
    cout << "You Entered" << a << endl;
    return 0;
}

/***************   step 8)    ******************/
#include <iostream>
using namespace std;
int main(){
    int a = 5;                                    // output : 
    cout << "Value of a is : " << a << endl;      // Value of a is : 5
                                                  // Value of a is : a
    char ch = 'a';                                // Value of a is : 1
    cout << "Value of a is : " << ch << endl;

    bool flag = true;
    cout << "Value of a is : " << flag << endl;
    return 0;
}

/***************   step 9)    ******************/
#include <iostream>
using namespace std;
int main(){
    // Implicit type casting  
    int num ='b';
    cout << num << endl;             // output 
                                     // 98
    char ch = 97;                    // a
    cout << ch << endl;
    return 0;
}

/***************   step 10)    ******************/
#include <iostream>
using namespace std;
int main(){
   double d = 5.7; 
    // Explicit type casting             // output
   int x = (int)d + 2;                  // value of x is : 7
    cout << "Value of x is: " << x << endl;

    return 0;
}

/***************   step 11)    ******************/
#include <iostream>
using namespace std;
int main(){
    int a = 5;                      // 8
     int b = 3;                     // 2
    cout << a+b << endl;            // 15
    cout << a-b << endl;            // 1
    cout << a*b << endl;            // 2
    cout << a/b << endl;
    cout << a%b << endl;             
                                    
    return 0;
}

/***************   step 12)    ******************/
#include <iostream>
using namespace std;
int main(){
    int a = 5;                      
    int b = 3;                     
    cout << (a>b) << endl;            // 1 
    cout << (a<b) << endl;            // 0
    cout << (a==b) << endl;           // 0
    cout << (a!=b) << endl;           // 1
    cout << (a>=b) << endl;           // 1
    cout << (a<=b) << endl;           // 0
                                    
    return 0;
}

/***************   step 13)    ******************/
#include <iostream>
using namespace std;
int main(){
    int a = 5;                      
    int b = 3;                     
    cout << (a>=5 && b<=3) << endl;     // 1 
    cout << (a<5 && b>3) << endl;      // 0 
    cout << (a<5 && b>=3) << endl;     // 0 
    cout << (a<5 || b>=3) << endl;     // 1 
    cout << (a<5) << endl;             // 0 
    cout << !(a<5) << endl;            // 1 
    cout << !(a==5) << endl;           // 0 
                                    
    return 0;
}

/***************   step 14)    ******************/
#include <iostream>
using namespace std;
int main(){
       // type casting
    char ch = 234432;
    int x = (int) ch;
    cout << ch << endl;
    return 0;
}

