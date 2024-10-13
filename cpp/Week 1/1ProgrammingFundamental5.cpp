<<<<<<< HEAD
// Question 5) Students and marks 
/* marks >= 90 --> grade A 
   marks >= 80 --> grade B 
   marks >= 60 --> grade C 
   marks >= 40 --> grade D 
   marks = 40 --> grade F */

   #include <iostream>
   using namespace std;

   int main(){
    int number;
    int marks;
    char grade;
    cout << "Entered Number is: ";
    cin >> number;

    // conditions;
    if (number >= 90){
        cout << "Congradulations!!! you are pass with Grade 'A'"<< endl;
    }
    else if( number >= 80){
        cout << "Congradulations!!! you are pass with Grade 'B'"<< endl;
    }
    else if (number >= 60)
    {
        cout << "Congradulations!!! you are pass with Grade 'C'"<< endl;
    }
    else if (number >= 40)
    {
        cout << "Congradulations!!! you are pass with Grade 'D'"<< endl;
    }
    else{
        cout << "So sorry to say that!!! you are 'Fail' with Grade 'F'"<< endl;
    }

    return 0;
=======
// Question 5) Students and marks 
/* marks >= 90 --> grade A 
   marks >= 80 --> grade B 
   marks >= 60 --> grade C 
   marks >= 40 --> grade D 
   marks = 40 --> grade F */

   #include <iostream>
   using namespace std;

   int main(){
    int number;
    int marks;
    char grade;
    cout << "Entered Number is: ";
    cin >> number;

    // conditions;
    if (number >= 90){
        cout << "Congradulations!!! you are pass with Grade 'A'"<< endl;
    }
    else if( number >= 80){
        cout << "Congradulations!!! you are pass with Grade 'B'"<< endl;
    }
    else if (number >= 60)
    {
        cout << "Congradulations!!! you are pass with Grade 'C'"<< endl;
    }
    else if (number >= 40)
    {
        cout << "Congradulations!!! you are pass with Grade 'D'"<< endl;
    }
    else{
        cout << "So sorry to say that!!! you are 'Fail' with Grade 'F'"<< endl;
    }

    return 0;
>>>>>>> e169126 (day-1)
}