// Question 12) Print 1 to N but only odd number

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
 
     cout << "Here is Odd number" << endl;
    for(int i = 1; ;){
        if (i > num)
          break;
    
        else{
            cout << i << " ";
            i = i + 2;
        }
        cout << endl;
        
    }
    
    return 0;
}