   // *  *  *  *  * 
   // *  *  *  *  *     /* pattern - 1) solid rectangle */ ✅✔️☑️
   // *  *  *  *  * 

#include <iostream>
using namespace std;

int main(){
    int num; 
    cout << "Enter a number:  "; 
    cin >> num;

    // logic
    for(int row = 0; row < num; row++){
        for(int col = 0; col < num; col++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

//    *  *  *  *   
//    *  *  *  *   
//    *  *  *  *        /* pattern - 2) solid square */ ✅✔️☑️
//    *  *  *  *  

   #include <iostream>
   using namespace std;

   int main(){
    int num;
    cout << "Enter a  number : ";
    cin >> num;

    // logic
    for(int row = 0; row < num; row++){
        for(int col = 0; col < num; col++){
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
   }


    // *  *  *  *  *   
    // *           *    /* pattern - 3) Hollow Rectangle */ ✅✔️☑️
    // *           *   
    // *  *  *  *  *  

    #include <iostream>
    using namespace std;

    int main(){
        int num; 
        cout << "Enter a number : ";
        cin >> num;

        // logic
        for(int row = 0; row < num; row++){
            if(row == 0 || row == num - 1){
                for(int col = 0; col < num; col++){
                cout << "* ";
                }
            } else {
                // first star
                cout << "* ";

                // space 
                for(int space = 0; space < (num-2)*2; space++){
                   cout << " ";
                }

                // last star
                cout << "* ";
            }
            cout << endl;
        }
        return 0;
    }


    // *  *  *  *  *   
    // *           *    /* pattern - 4) Hollow Rectangle */ ✅✔️☑️
    // *  *  *  *  *     

    #include <iostream>
    using namespace std;
    int main(){
        int rowCount, colCount;
        cout << "Enter a row: ";
        cin >> rowCount;

        cout << "Enter a col: ";
        cin >> colCount;

        // logic
        for(int row = 0; row < rowCount; row++){
            // first and last num star
            if(row == 0 || row == rowCount-1){
               // inner loop
               for(int col = 0; col < colCount; col++){
                cout << "* ";
               }
            } else {
                // col 1 num star
                cout << "* ";
 
                // space
                for(int col = 0; col < (colCount-2)*2; col++){
                   cout << " ";
                }

                // col->num-1 num star
                cout << "* ";
            }
            cout << endl;
        }
        return 0;
    }

     
    // *
    // *  *
    // *  *  * 
    // *  *  *  *          /* pattern - 5) Half pyramid */ ✅✔️☑️
    // *  *  *  *  * 
    // *  *  *  *  *  *
    // *  *  *  *  *  *  *

   #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for(int row = 0; row < num ; row++){
            for(int col = 0; col < row+1; col++){
                cout << "* ";
            }
            cout << endl;
        }
     return 0;
    }

    
    // *  *  *  *  *  *  *
    // *  *  *  *  *  *
    // *  *  *  *  *      /* pattern - 6) Half inverted pyramid */ ✅✔️☑️
    // *  *  *  *
    // *  *  *   
    // *  *  
    // *  

   #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for(int row = num; row > 0 ; row--){
            for(int col = 0; col < row; col++){
                cout << "* ";
            }
            cout << endl;
        }
     return 0;
    }
      
    // 1
    // 1  2
    // 1  2  3 
    // 1  2  3  4          /* pattern - 7) numeric pyramid */  ✅✔️☑️
    // 1  2  3  4  5 
    // 1  2  3  4  5  6
    // 1  2  3  4  5  6  7


   #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for(int row = 1; row <= num; row++){
            for(int col = 1; col <= row; col++){
                cout << col << " ";
            }
            cout << endl;
        }
     return 0;
    }

    // 1  2  3  4  5  6  7
    // 1  2  3  4  5  6
    // 1  2  3  4  5
    // 1  2  3  4          /* Pattern --> 8 inverted numeric pyramid */  ✅✔️☑️
    // 1  2  3  
    // 1  2  
    // 1 

    #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for(int row = num; row >= 1; row--){
            for(int col = 1; col <= row; col++){
                cout << col << " ";
            }
            cout << endl;
        }
     return 0;
    }

                                                                  
    //             * 
    //           *   *   
    //         *   *   *
    //       *   *   *   *      /* Pattern --> 9 FULL pyramid */ ✅✔️☑️
    //     *   *   *   *   *
    //   *   *   *   *  *    * 

    #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = 1; row <= num; row++) {
        for (int space = 1; space <= num - row; space++) {
            cout << "  ";
        }

        // Print stars with spaces between them
        for (int col = 1; col <= row; col++) {
            cout << "* ";
            if (col < row) {
                cout << "  "; // Extra space between stars
            }
        }
        cout << endl;
    }
     return 0;
    }

                                
    // ******
    // ******
    // ******            /* Pattern --> 10 Square pyramid */ ✅✔️☑️
    // ******
    // ******
    // ******

  #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = 1; row <= num; row++) {
           for (int col = 1; col <= num; col++) {
            cout << "*";
           }

       
         cout << endl;
        }
     return 0;
    }

                                            
    
    // * * * * * * 
    // *         * 
    // *         *      /* Pattern --> 11 Hollow Square pyramid */✅✔️☑️
    // *         *  
    // *         * 
    // * * * * * *
   
    #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = 0; row < num; row++) {
            if(row == 0 || row == num-1){
              for (int col = 0; col < num; col++) {
                cout << "* ";
              }
           } else {
            // 1st star
            cout << "* ";
            
            // space
            for(int space = 0; space < (num-2)*2; space++){
                cout << " ";
            }
            // last star
            cout << "* ";
           }

       
         cout << endl;
        }
     return 0;
    }
 
  
    // ******
    // *   *
    // *  *         /* Pattern --> 12 half hollow inverted pyramid */✅✔️☑️
    // * *
    // **
    // *

#include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = num; row >= 1; row--) {
            for (int col = 1; col <= row; col++) {
                if(row == num || row == col || col == 1 ){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
         cout << endl;
        }
     return 0;
    }
       
  
    // * * * * * * * *
    //  * * * * * * *
    //   * * * * * *     
    //    * * * * *         /* Pattern --> 13 Inverted half Star Pyramid*/✅✔️☑️
    //     * * * *  
    //      * * * 
    //       * * 
    //        * 


    #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = num; row >= 1; row--) {
            for (int space = 1; space <= num-row; space++) {
                cout << " ";
            }
            
            for (int col = 1; col <= row; col++) {
                cout << "*";
                if (col < row) {
                    cout << " "; // Extra space between stars
                }
            }
         cout << endl;
        }
     return 0;
    }

     
                      
    //         *
    //        * *
    //       * * *  
    //      * * * *  
    //     * * * * *
    //    * * * * * *     /* Pattern --> 14 Inverted full pyramid  */✅✔️☑️
    //    * * * * * *
    //     * * * * *
    //      * * * * 
    //       * * *  
    //        * * 
    //         *

    #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
 
        for (int row = 1; row <= num; row++) {
            for (int space = 1; space <= num-row; space++) {
                cout << " ";
            }
            
            for (int col = 1; col <= row; col++) {
                cout << "*";
                if (col < row) {
                    cout << " "; // Extra space between stars
                }
            }
         cout << endl;
        }

        for (int row = num; row >= 1; row--) {
            for (int space = 1; space <= num-row; space++) {
                cout << " ";
            }
            
            for (int col = 1; col <= row; col++) {
                cout << "*";
                if (col < row) {
                    cout << " "; // Extra space between stars
                }
            }
         cout << endl;
        }
     return 0;
    }
                                            
       
    //         *
    //        * *
    //       *   *  
    //      *     *  
    //     *       *
    //    *         *        /* Pattern --> 15 Hollow Diamond*/✅✔️☑️
    //    *         *
    //     *       *
    //      *     * 
    //       *   *  
    //        * * 
    //         *
    

 #include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
 
        for (int row = 0; row < num; row++) {
            for (int space = 0; space < num-row-1; space++) {
                cout << " ";
            }
            
            for (int col = 0; col < 2*row + 1; col++){  
                if (col == 0 || col == 2*row) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
         cout << endl;
        }

      for (int row = 0; row < num; row++) {
            for (int space = 0; space < row; space++) {
                cout << " ";
            }
            
             for (int col = 0; col < 2*num-2*row-1; col++){
               // if first and last character
               if (col == 0 || col == 2*num-2*row-2){
                    cout << "*";
               }
               else{
                    cout << " ";
               }
          }
          cout << endl;
        }
        
     return 0;
    }


    // * * * * * *   * * * * * *
    // * * * * *       * * * * *
    // * * * *           * * * * 
    // * * *               * * *
    // * *                   * *
    // *                       *       /* Pattern --> 16 Flipped solid diamond*/✅✔️☑️
    // *                       *
    // * *                   * *
    // * * *               * * *
    // * * * *           * * * *
    // * * * * *       * * * * *
    // * * * * * *   * * * * * *


#include <iostream>
    using namespace std;
    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
 
        for (int row = 0; row < num; row++) {
            // star
            for (int col = 0; col < num-row; col++) {
                cout << "*";
            }

            // space
                for (int col = 0; col < 2*row+1; col++) {
                cout << " ";
         
            }

            // star
            for (int col = 0; col < num-row; col++) {
                cout << "*";
            }
         cout << endl;
        }


        for (int row = 0; row < num; row++) {
            // star
            for (int col = 0; col < row+1; col++) {
                cout << "*";
            }

            // space
                for (int col = 0; col < 2*num-2*row-1; col++) {
                cout << " ";
         
            }

            // star
            for (int col = 0; col < row+1; col++) {
                cout << "*";
            }
         cout << endl;
        }
    return 0;
}

    // 1
    // 2*2
    // 3*3*3  
    // 4*4*4*4
    // 4*4*4*4       /* Pattern --> 17 Fancy  pattern #2*/ ✅✔️☑️
    // 3*3*3  
    // 2*2 
    // 1

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //logic
    for(int row = 0; row < num; row++){
        for(int col = 0; col < row+1; col++){
            cout << row+1;
            // if last character
            if(col != row){
                cout << "*";
            }
        }
        cout << endl;
    }
    for(int row = 0; row < num; row++){
        for(int col = 0; col < num-row; col++){
            cout << num-row;
            // if last character
            if(col != num-row-1){
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}

 
    // A
    // ABA
    // ABCBA         /* Pattern --> 18 Alphabet palindrome pyramid*/✅✔️☑️
    // ABCDCBA
    // ABCDEDCBA

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //logic
    for(int row = 0; row < num; row++){
        for(int col = 0; col < row+1; col++){
            int ans = col + 1;
            char ch = ans + 'A' -1;
            cout << ch;
        }
        //reverse counting
        for (int col = row; col >= 1; col--){
          int ans = col;
          char ch = ans + 'A' - 1;
          cout << ch;
        }
        cout << endl;
    }
    return 0;
}

    // 1
    // 12
    // 1 3
    // 1  4
    // 1   5       /* Pattern --> 19 Numeric hollow half pyramid*/✅✔️☑️
    // 1    6
    // 1     7
    // 1      8
    // 123456789
  
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //logic
    for(int row = 0; row < num; row++){
        for(int col = 0; col < row+1; col++){
           if(col == 0 || col == row || row == num-1){
            cout << col+1;
           } else {
            cout << " ";
           }
        }
        cout << endl;
    }
    return 0;
}

    // 123456
    // 1   6
    // 1  6           /* Pattern --> 20 numeric hollow Inverted pyramid*/✅✔️☑️
    // 1 6
    // 16
    // 1
            
    #include <iostream>
    using namespace std;

    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for(int row = 0; row < num; row++){
            for(int col= row+1; col <= num; col++){
                if(row == 0 || col == row+1 || col == num){ 
                    cout << col;
                }else{
                    cout << " ";
                }
            }
            cout << endl;
        }
        return 0;
    }


    //      1
    //     121
    //    12321
    //   1234321       /* Pattern --> 22 Numeric palindrome equilateral pyramid*/✅✔️☑️
    //  123454321
    // 12345654321

    #include <iostream>
    using namespace std;

    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = 1; row <= num; row++) {
        // Print spaces 
        for (int space = 1; space <= num - row; space++) {
            cout << " ";
        }
        
        //  increasing numbers
        for (int col = 1; col <= row; col++) {
            cout << col;
        }
        
        //  decreasing numbers
        for (int col = row - 1; col >= 1; col--) {
            cout << col;
        }

        cout << endl;
    }

    return 0;
}


    // *
    // **
    // ***
    // ****
    // *****    /* Pattern --> 23 Solid half diamond*/✅✔️☑️
    // ****
    // ***
    // ** 
    // *

    #include <iostream>
    using namespace std;

    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = 1; row <= num; row++) {
        
          //  increasing numbers
          for (int col = 1; col <= row; col++) {
            cout << "*";
          }
          cout << endl;
        }

        for(int row = 0; row < num; row++){
            for(int col = num-row-1; col > 0; col--){
                cout << "*";
            }
            cout << endl;
        }

    return 0;
}                                 

    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****               
    // ****5*5*5*5*5****         /* Pattern --> 24 Fancy pattern #1*/✅✔️☑️
    // ***6*6*6*6*6*6***
    // **7*7*7*7*7*7*7**
    // *8*8*8*8*8*8*8*8*
    // 9*9*9*9*9*9*9*9*9
  
      #include <iostream>
    using namespace std;

    int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = 1; row <= num; row++) {
        // Print spaces 
        for (int space = num - row; space >= 0; space--) {
            cout << "*";
        }
        
        //  increasing numbers
        for (int col = 1; col <= row; col++) {
            cout << row;
            if(col < row)
            cout << "*";
        }
        
        // Print spaces 
        for (int space = num - row; space >= 0; space--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
} 

    // 1
    // 23                                                        
    // 456
    // 78910      /* Pattern --> 25 Fancy pattern #2(2)*/ ✅✔️☑️ 
    // 456
    // 23
    // 1                                                
    

    #include <iostream>
    using namespace std;

    int main(){
        int num; cout << "Enter a number: ";
        cin >> num;

        // logic
        int condition = 1;
        for(int row = 0; row < num; row++){
            for(int col = 0; col <= row; col++){
                cout << condition;
                condition++;
            }
            cout << endl;
        }

        // decrease
           int start = condition - num;                              
       for (int row = 0; row < num; row++){       
         int k = start;
         for (int col = 0; col <= num-row-1; col++){
           cout << k;
           k++;           
         }
          start = start - (num - row - 1);
          cout << endl;
        }
        return 0;
    }
                           
    // *
    // *1*
    // *121*
    // *12321*       /* Pattern --> 26 fancy pattern #3*/✅✔️☑️
    // *121*
    // *1*
    // *

 #include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the middle row number (e.g., 4): ";
    cin >> num;

    // Top single '*'
    cout << "*" << endl;

    // Top half of the pattern including the middle row
    for (int row = 1; row <= num; row++) {
        cout << "*";  // Starting '*'

        // Print increasing numbers
        for (int col = 1; col <= row; col++) {
            cout << col;
        }
        
        // Print decreasing numbers
        for (int col = row - 1; col >= 1; col--) {
            cout << col;
        }
        
        cout << "*" << endl;  // Ending '*'
    }

    // Bottom half of the pattern
    for (int row = num - 1; row >= 1; row--) {
        cout << "*";  // Starting '*'
        
        // Print increasing numbers
        for (int col = 1; col <= row; col++) {
            cout << col;
        }
        
        // Print decreasing numbers
        for (int col = row - 1; col >= 1; col--) {
            cout << col;
        }
        
        cout << "*" << endl;  // Ending '*'
    }

    // Bottom single '*'
    cout << "*" << endl;
    return 0;
}
 
    // 1
    // 2 3
    // 4 5 6                    /* Pattern --> 27 floyd's Triangle */ ✅✔️☑️
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28

#include <iostream>
    using namespace std;

    int main(){
        int num; cout << "Enter a number: ";
        cin >> num;

        // logic
        int condition = 1;
        for(int row = 0; row < num; row++){
            for(int col = 0; col <= row; col++){
                cout << condition << " ";
                condition++;
            }
            cout << endl;
        }
        return 0;
    }


    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1                   /* Pattern --> 28 pascal's Triangle */✅✔️☑️
    // 1 4 6 4 1
    // 1 5 10 10 5 1 
    // 1 6 15 20 15 6 1

    #include <iostream>
    using namespace std;

    int main(){
        int num; cout << "Enter a number: ";
        cin >> num;

        // logic
   
        for(int row = 1; row < num; row++){
            int condition = 1;
            for(int col = 1; col <= row; col++){
                cout << condition << " ";
                condition = condition * (row-col) / col;
            }
            cout << endl;
        }
        return 0;
    }                                                           
                                           
    // *         *
    // **       **
    // ***     ***
    // ****   ****
    // ***********           /* Pattern --> 28 Butterfly pattern  */✅✔️☑️
    // ***********
    // ****   ****
    // ***     ***
    // **       **
    // *         *
 
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of rows for the upper half: ";
    cin >> num;

    // Upper half of the pattern
    for (int row = 1; row <= num; row++) {
        // Left side stars
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }

        // Spaces in the middle
        for (int col = 1; col <= 2 * (num - row); col++) {
            cout << " ";
        }

        // Right side stars
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the pattern
    for (int row = num; row >= 1; row--) {
        // Left side stars
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }

        // Spaces in the middle
        for (int col = 1; col <= 2 * (num - row); col++) {
            cout << " ";
        }

        // Right side stars
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
       
                                              
    //     1
    //    232 
    //   34543         /* Pattern --> 29 Numeric full pyramid*/✅✔️☑️
    //  4567654  
    // 567898765
     
     #include <iostream>
     using namespace std;

     int main(){
        int num; 
        cout << "Enter a number: ";
        cin >> num;

        // logic
        for (int row = 0; row < num; row++){                
        // spaces                                                
        for (int col = 0; col < num-row-1; col++){         
          cout << " ";                                          
        }                                                     
        // numbers                                              
        int start = row+1;                                      
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


    //     1
    //    1 2
    //   1   3          /* Pattern --> 30 Numeric Hollow pyramid*/✅✔️☑️
    //  1     4
    // 1 2 3 4 5
                                

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;

    for (int row = 1; row <= num; row++) {
        // Print leading spaces for alignment
        for (int space = 1; space <= num - row; space++) {
            cout << " ";
        }

        // Print numbers in the row
        for (int col = 1; col <= row; col++) {
            // Print numbers at boundaries or the first and last row
            if (col == 1 || col == row || row == num) {
                cout << col << " ";
            } else {
                cout << "  "; // Spaces in the middle for hollow effect
            }
        }
        cout << endl;
    }

    return 0;
}
