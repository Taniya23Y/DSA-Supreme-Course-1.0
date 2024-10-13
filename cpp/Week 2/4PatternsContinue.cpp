<<<<<<< HEAD
/************ step 17) ************************/
#include <iostream>
using namespace std;
int main(){

    int rowCount;
    cin >> rowCount;
    
    // FULL pyramid                                               /* Pattern --> 9 */
    // Outer loop --> row                                                                 
    for (int row = 0; row < rowCount; row++){                       //             * 
        // spaces                                                   //           *   *   
        for (int col = 0; col < rowCount - row - 1; col++){         //         *   *   *
          cout << " ";                                              //       *   *   *   *
        }                                                           //     *   *   *   *   *
                                                                    //   *   *   *   *  *    * 
        // stars
      for (int col = 0; col < row + 1; col++){
          cout << "* ";
        }
        cout << endl;
    }
   return 0;
}

/***************************** Step 18) **********************************/
#include <iostream>
using namespace std;
int main()                                    /* Pattern --> 10 */
{
    for (int i = 0; i < 6; i++)                // ******
    {                                          // ******
       for (int j = 0; j < 6; j++)             // ******
       {                                       // ******
           cout << "*" ;                       // ******
       }                                       // ******
       cout << endl;
    }
    
    return 0;
} 

/***************************** Step 19) **********************************/
#include <iostream>
using namespace std;
int main ()
{
    int rowCount, colCount;
    cin >> rowCount;
    cin >> colCount;

    // for loop
    for (int row = 0; row < rowCount; row++)
    {
        // first row and last row will print * 
        if ( row == 0 || row == rowCount-1)
        {
            for (int col = 0; col < colCount; col++) {
                cout << "* ";
            }                                              /* Pattern --> 11 */
        }
        else{
            //remaining middle rows                       // * * * * * * 
            // first star                                 // *         * 
            cout << "* ";                                 // *         * 
            // spaces                                     // *         * 
            for (int i = 0; i < colCount - 2; i += 1){    // *         * 
                cout << "  ";                             // * * * * * *
            }             
            // last star 
            cout << "* ";
        }
        cout << endl; 
    }
    
    return 0;
}

/***************************** Step 20) **********************************/
#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    // for loop
 for (int row = 0; row < rowCount; row++){
   for (int col = 0; col < rowCount; col++){                /* Pattern --> 12 */
   if(col == 0 || col == 0 || col == rowCount - row - 1){
               cout << "*";                                  // ******
            }                                                // *   *
        else {                                               // *  *
              // space                                       // * *
              cout << " ";                                   // **
         }                                                   // *
        }
          cout << endl;
    }
    return 0;
}

/***************************** Step 21) **********************************/
#include <iostream>
using namespace std;
int main(){
  int rowCount;
  cin >> rowCount;
  
  // for loop 
  for (int row = 0; row < rowCount; row++){          /* Pattern --> 13 */
    // spaces
    for (int col = 0; col < row; col++){              // * * * * * * * *
      cout << " ";                                    //  * * * * * * *
    }                                                 //   * * * * * *                                                       // * * * * * * *
    // stars                                          //    * * * * * 
    for (int col = 0; col < rowCount - row; col++){   //     * * * *  
      cout << "* ";                                   //      * * * 
    }                                                 //       * * 
    cout << endl;                                     //        * 
  }  
  return 0;
}

/***************************** Step 22) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;

     // for loop  ----> full pyramid
     for (int row = 0; row < rowCount; row++){
       // space
        for (int col = 0; col < rowCount - row - 1; col++){
             cout << " ";
        }                                            /* Pattern --> 14 */
         // star
         for (int col = 0; col < row + 1; col++){    //         *
            cout << "* ";                            //        * *
         }                                           //       * * *  
          cout << endl;                              //      * * * *  
     }                                               //     * * * * *
                                                     //    * * * * * * 
     // for loop--> Inverted full pyramid            //    * * * * * *
     for (int row = 0; row < rowCount; row++) {      //     * * * * *
         // space                                    //      * * * * 
         for (int col = 0; col < row; col++) {       //       * * *  
             cout << " ";                            //        * * 
         }                                           //         *
         // star
         for (int col = 0; col < rowCount - row; col++){
             cout << "* ";
         }
         cout << endl;
     }
     return 0;
}

/***************************** Step 23) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;

     // for loop  ----> full pyramid
     for (int row = 0; row < rowCount; row++){
       // space
        for (int col = 0; col < rowCount - row - 1; col++){
             cout << " ";
        }                                                 /* Pattern --> 15 */
         // star
         for (int col = 0; col < 2*row + 1; col++){      //         *
  // if first character and last character is * then     //        * *
           if(col == 0){                                 //       *   *  
          // first characterr                            //      *     *  
         cout << "* ";                                   //     *       *
         }                                               //    *         * 
      else if(col == 2*row){                             //    *         *
          // last character                              //     *       *
         cout << "* ";                                   //      *     * 
              }                                          //       *   *  
      else{                                              //        * * 
           cout << " ";                                  //         *
      }
     }
     cout << endl;
     }

     // for loop  ----> Inverted full pyramid
     for (int row = 0; row < rowCount; row++) {
          // spaces
          for (int col = 0; col < row; col++){
               cout << " ";
          }

          // stars
          for (int col = 0; col < 2*rowCount-2*row-1; col++){
               // if first and last character
               if (col == 0 || col == 2*rowCount-2*row-2){
                    cout << "* ";
               }
               else{
                    cout << " ";
               }
          }
          cout << endl;
     }
     return 0;
}

/***************************** Step 24) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount ;
     cin >> rowCount;
     // for loop --- Flipped solid diamond--> 1 part >
     for (int row = 0; row < rowCount; row++){
          // stars 1 part - 1
          for (int col = 0; col < rowCount-row; col++){
               cout << "* ";
          }
          // spaces--> 1 part -2                    
          for (int col = 0; col < 2*row+1; col++){        /* Pattern --> 16 */
              cout << "  ";
           }                                             // * * * * * *   * * * * * *
          // stars --> 1 part - 3                        // * * * * *       * * * * *
          for (int col = 0; col < rowCount-row; col++){  // * * * *           * * * * 
               // stars                                  // * * *               * * *
               cout << "* ";                             // * *                   * *
          }                                              // *                       *
          cout << endl;                                  // *                       *
     }                                                   // * *                   * *
                                                         // * * *               * * *
    // for loop --- Flipped solid diamond--> 2 part >    // * * * *           * * * *
    for (int row = 0; row < rowCount; row++){            // * * * * *       * * * * *
     // star --> 2 part --> 1                            // * * * * * *   * * * * * *
     for (int col = 0; col < row+1; col++){             
          cout << "* ";                            
     }
     // space ---> 2 part --> 2
     for (int col = 0; col <2*rowCount-2*row-1; col++){
          cout << "  ";
     }
     // star --> 2 part --> 3
     for (int col = 0; col < row + 1; col++){
          cout << "* ";
     }
     cout << endl;
    }
  return 0;
}

/***************************** Step 25) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;

     // for loop --> 1 part-->Fancy  pattern #2
     for (int row = 0; row < rowCount; row++) {
       // number
       for (int col = 0; col < row + 1; col++){
          cout << row+1;
          // star                                         /* Pattern --> 17 */
          // if last character
          if (col != row){                                 // 1
               cout << "*";                                // 2*2
          }                                                // 3*3*3  
       }                                                   // 4*4*4*4
       cout << endl;                                       // 4*4*4*4
     }                                                     // 3*3*3  
                                                           // 2*2 
    // for loop --> 2 part-->Fancy  pattern #2             // 1
    for (int row = 0; row < rowCount; row++){
     // number
     for (int col = 0; col < rowCount-row; col++){
         cout << rowCount-row;
         //star
         if (col != rowCount-row-1){
          cout << "*";
         } 
     }
     cout << endl;
    }
    
     return 0;
}

/***************************** Step 26) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;                                     /* Pattern --> 18 */
     // for loop--->Aplhabet palindrome pyramid
     for (int row = 0; row < rowCount; row++){             // A
          int col;                                         // ABA
        for (int col = 0; col < row+1; col++){             // ABCBA
          int ans = col + 1;                               // ABCDCBA
          char ch = ans + 'A' - 1;                         // ABCDEDCBA
          cout << ch;
        }
        //reverse counting
        for (int col = row; col >= 1; col--){
          int ans = col;
          char ch = ans + 'A' - 1;
          cout << ch;
        }
        
        cout <<endl;
     }
     
     return 0;
}

/***************************** Step 27) **********************************/
#include <iostream>
using namespace std;                                        /* Pattern --> 19 */
int main(){
     int rowCount;                                           // 1
     cin >> rowCount;                                        // 12
                                                             // 1 3
     // for loop ---> Numeric hoolow half pyramid            // 1  4
     for (int row = 0; row < rowCount; row++){               // 1   5
        // star                                              // 1    6
        for (int col = 0; col < row + 1; col++){             // 1     7
          if(col == 0 || col == row || row == rowCount-1){   // 1      8
              cout << col+1;                                 // 123456789
          }
          else{
               cout << " ";
          }
        }
         cout << endl; 
     }
     return 0;
} 

/***************************** Step 28) **********************************/
#include <iostream>
using namespace std;                                             /* Pattern --> 20 */
int main(){
     int rowCount;                                               // 123456
     cin >> rowCount;                                            // 1   6
     // for loop--> numeric hollow Inverted pyramid              // 1  6
     for(int row = 0; row < rowCount; row++){                    // 1 6
          // star                                                // 16
          for(int col = row+1; col <=rowCount ; col++){          // 1
               if(row == 0 ||col == row+1 || col == rowCount){
                 cout << col;
               }
               else{
                    cout << " ";
               }
          }
          cout << endl;
     }
     return 0;
}

/***************************** Step 29) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;
     // for loop-->Numeric palindorme equilateral pyramid
     int k = rowCount;
     for (int row = 0; row < rowCount; row++){
           int c = 1;
         for (int col = 0; col < k; col++){
            if (col < rowCount - row - 1)
            {
               cout << " ";                                      /* Pattern --> 22 */
            }
            else if(col <= rowCount - 1){                       //      1
               cout << c;                                       //     121
               c++;                                             //    12321
            }                                                   //   1234321
            else if(col == rowCount){                           //  123454321
               c = c - 2;                                       // 12345654321
               cout << c;
               c--;
            }
            else{
               cout << c;
               c--;
            }
          }
          k++;
         cout << endl;   
     }
     return 0;
}

/***************************** Step 30) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;                                             /* Pattern --> 23 */

     // for loop --> Soild half diamond
     for (int row = 0; row < 2*rowCount-1; row++){                   // *
          int condition = 0;                                         // **
          if (row < rowCount){                                       // ***
               condition = row;                                      // ****
          }                                                          // *****
          else{ // shrinking phrase of diamond                       // ****
              condition = rowCount-(row % rowCount) - 2;             // ***
          }                                                          // ** 
          for (int col = 0; col <= condition; col++) {               // *
               cout << "*";
          }
          cout << endl;    
     }
     return 0;
}

/***************************** Step 31) **********************************/
#include <iostream>
#include <assert.h>                                              /* Pattern --> 24 */
using namespace std;
int main(){                                                      // ********1********
     int rowCount;                                               // *******2*2*******
     cin >> rowCount;                                            // ******3*3*3******
     // for loop ---> Facncy pattern#1                           // *****4*4*4*4*****               
     assert(rowCount <= 9);                                      // ****5*5*5*5*5****
     for (int row = 0; row < rowCount; row++){                   // ***6*6*6*6*6*6***
        int start_num_index = 8 - row;                           // **7*7*7*7*7*7*7**
        int num = row + 1;                                       // *8*8*8*8*8*8*8*8*
        int count_num = num;                                     // 9*9*9*9*9*9*9*9*9
        for (int col= 0; col < 17; col++){
          if (col == start_num_index && count_num > 0){
               cout << num;
               start_num_index += 2;
               count_num--;
          }
          else{
               cout << "*";
          }
     }
     cout << endl;
   }
return 0;
}

/***************************** Step 32) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;
     int c = 1;
     // for loop --> Fancy pattern #2(2)
     for (int row = 0; row < rowCount; row++){                      /* Pattern --> 25 */
        for (int col = 0; col <= row; col++){
          cout << c;                                                  // 1
          c++;                                                        // 23
          if (col < row){                                             // 456
               cout << "*";                                           // 78910
          }                                                           // 78910
        }                                                             // 456
        cout << endl;                                                 // 23
     }                                                                // 1
        // cout << "c: " << c << endl;                                
       // shrinking phrase                                            
       int start = c - rowCount;                                      
       for (int row = 0; row < rowCount; row++){       
         int k = start;
         for (int col = 0; col <= rowCount-row-1; col++){
           cout << k;
           k++;
           if (col <  rowCount-row-1){
               cout << "*";
           }
           
         }
          start = start - (rowCount - row - 1);
          cout << endl;
     }
   return 0;
}

/***************************** Step 33) **********************************/
#include <iostream>
using namespace std;
int main(){
                                                 
     int rowCount;                                          
     cin >> rowCount;
     // for loop ---> fancy pattern #3
     for (int row = 0; row < rowCount; row++) {
       int condition = row <= rowCount/2 ? 2*row : 2*(rowCount-row-1);
       for (int col = 0; col <= condition; col++){
          if (col <= condition/2){
               cout<< "*";                                /* Pattern --> 26 */
            cout << col+1 << "*";                         
          }                                               // *
          else{                                           // *1*
               cout << condition-col+1;                   // *121*
               cout << "*";                               // *12321*
          }                                               // *121*
     }                                                    // *1*
       cout << endl;                                      // *
     }
     return 0; 
}

/***************************** Step 34) **********************************/
#include <iostream>
using namespace std;
int main(){                                               /* Pattern --> 27 */ 
     int rowCount;                                      
     cin >> rowCount;                                     // 1
     // for loop ---> floyd's Traingle                    // 2 3
     int c = 1;                                           // 4 5 6
     for (int row = 0; row < rowCount; row++){            // 7 8 9 10
       for (int col = 0; col <= row; col++){              // 11 12 13 14 15
          cout << c << " ";                               // 16 17 18 19 20 21
          c++;                                            // 22 23 24 25 26 27 28
       }
       cout << endl;
     }
  return 0;
}

/***************************** Step 35) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;                                             /* Pattern --> 28 */
     cin >> rowCount;                                          // 1
     // for loop --> pascal's Triangle                         // 1 1
     for (int row = 1; row <rowCount; row++){                  // 1 2 1
          int c = 1;                                           // 1 3 3 1 
       for (int col = 1; col <= row; col++){                   // 1 4 6 4 1
          cout << c << " ";                                    // 1 5 10 10 5 1 
          c = c * (row - col)/ col;                            // 1 6 15 20 15 6 1
       }
        cout << endl;  
     }
     return 0;
}

/***************************** Step 36) **********************************/ 
#include <iostream>
using namespace std;
int main(){                                                                 /* Pattern --> 28 */
     int rowCount;                                             
     cin >> rowCount;                                                         // *         *
     // for loop --> Butterfly pattern                                        // **       **
     for (int row = 0; row < 2*rowCount; row++){                              // ***     ***
      int cond = row < rowCount ? row : rowCount + (rowCount-row-1);          // ****   ****
      int space = row < rowCount ? 2*(rowCount - cond - 1) : row-cond-1;      // ***********
       for (int col = 0; col < 2*rowCount; col++) {                           // ***********
         if(col <= cond){                                                     // ****   ****
          cout << "*";                                                        // ***     ***
         }                                                                    // **       **
         else if (space > 0){                                                 // *         *
         cout << " ";
         space--;
         }
         else{
          cout << "*";
         }
       }                                                                     
         cout << endl;
     }                                                        

return 0;
=======
/************ step 17) ************************/
#include <iostream>
using namespace std;
int main(){

    int rowCount;
    cin >> rowCount;
    
    // FULL pyramid                                               /* Pattern --> 9 */
    // Outer loop --> row                                                                 
    for (int row = 0; row < rowCount; row++){                       //             * 
        // spaces                                                   //           *   *   
        for (int col = 0; col < rowCount - row - 1; col++){         //         *   *   *
          cout << " ";                                              //       *   *   *   *
        }                                                           //     *   *   *   *   *
                                                                    //   *   *   *   *  *    * 
        // stars
      for (int col = 0; col < row + 1; col++){
          cout << "* ";
        }
        cout << endl;
    }
   return 0;
}

/***************************** Step 18) **********************************/
#include <iostream>
using namespace std;
int main()                                    /* Pattern --> 10 */
{
    for (int i = 0; i < 6; i++)                // ******
    {                                          // ******
       for (int j = 0; j < 6; j++)             // ******
       {                                       // ******
           cout << "*" ;                       // ******
       }                                       // ******
       cout << endl;
    }
    
    return 0;
} 

/***************************** Step 19) **********************************/
#include <iostream>
using namespace std;
int main ()
{
    int rowCount, colCount;
    cin >> rowCount;
    cin >> colCount;

    // for loop
    for (int row = 0; row < rowCount; row++)
    {
        // first row and last row will print * 
        if ( row == 0 || row == rowCount-1)
        {
            for (int col = 0; col < colCount; col++) {
                cout << "* ";
            }                                              /* Pattern --> 11 */
        }
        else{
            //remaining middle rows                       // * * * * * * 
            // first star                                 // *         * 
            cout << "* ";                                 // *         * 
            // spaces                                     // *         * 
            for (int i = 0; i < colCount - 2; i += 1){    // *         * 
                cout << "  ";                             // * * * * * *
            }             
            // last star 
            cout << "* ";
        }
        cout << endl; 
    }
    
    return 0;
}

/***************************** Step 20) **********************************/
#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    // for loop
 for (int row = 0; row < rowCount; row++){
   for (int col = 0; col < rowCount; col++){                /* Pattern --> 12 */
   if(col == 0 || col == 0 || col == rowCount - row - 1){
               cout << "*";                                  // ******
            }                                                // *   *
        else {                                               // *  *
              // space                                       // * *
              cout << " ";                                   // **
         }                                                   // *
        }
          cout << endl;
    }
    return 0;
}

/***************************** Step 21) **********************************/
#include <iostream>
using namespace std;
int main(){
  int rowCount;
  cin >> rowCount;
  
  // for loop 
  for (int row = 0; row < rowCount; row++){          /* Pattern --> 13 */
    // spaces
    for (int col = 0; col < row; col++){              // * * * * * * * *
      cout << " ";                                    //  * * * * * * *
    }                                                 //   * * * * * *                                                       // * * * * * * *
    // stars                                          //    * * * * * 
    for (int col = 0; col < rowCount - row; col++){   //     * * * *  
      cout << "* ";                                   //      * * * 
    }                                                 //       * * 
    cout << endl;                                     //        * 
  }  
  return 0;
}

/***************************** Step 22) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;

     // for loop  ----> full pyramid
     for (int row = 0; row < rowCount; row++){
       // space
        for (int col = 0; col < rowCount - row - 1; col++){
             cout << " ";
        }                                            /* Pattern --> 14 */
         // star
         for (int col = 0; col < row + 1; col++){    //         *
            cout << "* ";                            //        * *
         }                                           //       * * *  
          cout << endl;                              //      * * * *  
     }                                               //     * * * * *
                                                     //    * * * * * * 
     // for loop--> Inverted full pyramid            //    * * * * * *
     for (int row = 0; row < rowCount; row++) {      //     * * * * *
         // space                                    //      * * * * 
         for (int col = 0; col < row; col++) {       //       * * *  
             cout << " ";                            //        * * 
         }                                           //         *
         // star
         for (int col = 0; col < rowCount - row; col++){
             cout << "* ";
         }
         cout << endl;
     }
     return 0;
}

/***************************** Step 23) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;

     // for loop  ----> full pyramid
     for (int row = 0; row < rowCount; row++){
       // space
        for (int col = 0; col < rowCount - row - 1; col++){
             cout << " ";
        }                                                 /* Pattern --> 15 */
         // star
         for (int col = 0; col < 2*row + 1; col++){      //         *
  // if first character and last character is * then     //        * *
           if(col == 0){                                 //       *   *  
          // first characterr                            //      *     *  
         cout << "* ";                                   //     *       *
         }                                               //    *         * 
      else if(col == 2*row){                             //    *         *
          // last character                              //     *       *
         cout << "* ";                                   //      *     * 
              }                                          //       *   *  
      else{                                              //        * * 
           cout << " ";                                  //         *
      }
     }
     cout << endl;
     }

     // for loop  ----> Inverted full pyramid
     for (int row = 0; row < rowCount; row++) {
          // spaces
          for (int col = 0; col < row; col++){
               cout << " ";
          }

          // stars
          for (int col = 0; col < 2*rowCount-2*row-1; col++){
               // if first and last character
               if (col == 0 || col == 2*rowCount-2*row-2){
                    cout << "* ";
               }
               else{
                    cout << " ";
               }
          }
          cout << endl;
     }
     return 0;
}

/***************************** Step 24) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount ;
     cin >> rowCount;
     // for loop --- Flipped solid diamond--> 1 part >
     for (int row = 0; row < rowCount; row++){
          // stars 1 part - 1
          for (int col = 0; col < rowCount-row; col++){
               cout << "* ";
          }
          // spaces--> 1 part -2                    
          for (int col = 0; col < 2*row+1; col++){        /* Pattern --> 16 */
              cout << "  ";
           }                                             // * * * * * *   * * * * * *
          // stars --> 1 part - 3                        // * * * * *       * * * * *
          for (int col = 0; col < rowCount-row; col++){  // * * * *           * * * * 
               // stars                                  // * * *               * * *
               cout << "* ";                             // * *                   * *
          }                                              // *                       *
          cout << endl;                                  // *                       *
     }                                                   // * *                   * *
                                                         // * * *               * * *
    // for loop --- Flipped solid diamond--> 2 part >    // * * * *           * * * *
    for (int row = 0; row < rowCount; row++){            // * * * * *       * * * * *
     // star --> 2 part --> 1                            // * * * * * *   * * * * * *
     for (int col = 0; col < row+1; col++){             
          cout << "* ";                            
     }
     // space ---> 2 part --> 2
     for (int col = 0; col <2*rowCount-2*row-1; col++){
          cout << "  ";
     }
     // star --> 2 part --> 3
     for (int col = 0; col < row + 1; col++){
          cout << "* ";
     }
     cout << endl;
    }
  return 0;
}

/***************************** Step 25) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;

     // for loop --> 1 part-->Fancy  pattern #2
     for (int row = 0; row < rowCount; row++) {
       // number
       for (int col = 0; col < row + 1; col++){
          cout << row+1;
          // star                                         /* Pattern --> 17 */
          // if last character
          if (col != row){                                 // 1
               cout << "*";                                // 2*2
          }                                                // 3*3*3  
       }                                                   // 4*4*4*4
       cout << endl;                                       // 4*4*4*4
     }                                                     // 3*3*3  
                                                           // 2*2 
    // for loop --> 2 part-->Fancy  pattern #2             // 1
    for (int row = 0; row < rowCount; row++){
     // number
     for (int col = 0; col < rowCount-row; col++){
         cout << rowCount-row;
         //star
         if (col != rowCount-row-1){
          cout << "*";
         } 
     }
     cout << endl;
    }
    
     return 0;
}

/***************************** Step 26) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;                                     /* Pattern --> 18 */
     // for loop--->Aplhabet palindrome pyramid
     for (int row = 0; row < rowCount; row++){             // A
          int col;                                         // ABA
        for (int col = 0; col < row+1; col++){             // ABCBA
          int ans = col + 1;                               // ABCDCBA
          char ch = ans + 'A' - 1;                         // ABCDEDCBA
          cout << ch;
        }
        //reverse counting
        for (int col = row; col >= 1; col--){
          int ans = col;
          char ch = ans + 'A' - 1;
          cout << ch;
        }
        
        cout <<endl;
     }
     
     return 0;
}

/***************************** Step 27) **********************************/
#include <iostream>
using namespace std;                                        /* Pattern --> 19 */
int main(){
     int rowCount;                                           // 1
     cin >> rowCount;                                        // 12
                                                             // 1 3
     // for loop ---> Numeric hoolow half pyramid            // 1  4
     for (int row = 0; row < rowCount; row++){               // 1   5
        // star                                              // 1    6
        for (int col = 0; col < row + 1; col++){             // 1     7
          if(col == 0 || col == row || row == rowCount-1){   // 1      8
              cout << col+1;                                 // 123456789
          }
          else{
               cout << " ";
          }
        }
         cout << endl; 
     }
     return 0;
} 

/***************************** Step 28) **********************************/
#include <iostream>
using namespace std;                                             /* Pattern --> 20 */
int main(){
     int rowCount;                                               // 123456
     cin >> rowCount;                                            // 1   6
     // for loop--> numeric hollow Inverted pyramid              // 1  6
     for(int row = 0; row < rowCount; row++){                    // 1 6
          // star                                                // 16
          for(int col = row+1; col <=rowCount ; col++){          // 1
               if(row == 0 ||col == row+1 || col == rowCount){
                 cout << col;
               }
               else{
                    cout << " ";
               }
          }
          cout << endl;
     }
     return 0;
}

/***************************** Step 29) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;
     // for loop-->Numeric palindorme equilateral pyramid
     int k = rowCount;
     for (int row = 0; row < rowCount; row++){
           int c = 1;
         for (int col = 0; col < k; col++){
            if (col < rowCount - row - 1)
            {
               cout << " ";                                      /* Pattern --> 22 */
            }
            else if(col <= rowCount - 1){                       //      1
               cout << c;                                       //     121
               c++;                                             //    12321
            }                                                   //   1234321
            else if(col == rowCount){                           //  123454321
               c = c - 2;                                       // 12345654321
               cout << c;
               c--;
            }
            else{
               cout << c;
               c--;
            }
          }
          k++;
         cout << endl;   
     }
     return 0;
}

/***************************** Step 30) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;                                             /* Pattern --> 23 */

     // for loop --> Soild half diamond
     for (int row = 0; row < 2*rowCount-1; row++){                   // *
          int condition = 0;                                         // **
          if (row < rowCount){                                       // ***
               condition = row;                                      // ****
          }                                                          // *****
          else{ // shrinking phrase of diamond                       // ****
              condition = rowCount-(row % rowCount) - 2;             // ***
          }                                                          // ** 
          for (int col = 0; col <= condition; col++) {               // *
               cout << "*";
          }
          cout << endl;    
     }
     return 0;
}

/***************************** Step 31) **********************************/
#include <iostream>
#include <assert.h>                                              /* Pattern --> 24 */
using namespace std;
int main(){                                                      // ********1********
     int rowCount;                                               // *******2*2*******
     cin >> rowCount;                                            // ******3*3*3******
     // for loop ---> Facncy pattern#1                           // *****4*4*4*4*****               
     assert(rowCount <= 9);                                      // ****5*5*5*5*5****
     for (int row = 0; row < rowCount; row++){                   // ***6*6*6*6*6*6***
        int start_num_index = 8 - row;                           // **7*7*7*7*7*7*7**
        int num = row + 1;                                       // *8*8*8*8*8*8*8*8*
        int count_num = num;                                     // 9*9*9*9*9*9*9*9*9
        for (int col= 0; col < 17; col++){
          if (col == start_num_index && count_num > 0){
               cout << num;
               start_num_index += 2;
               count_num--;
          }
          else{
               cout << "*";
          }
     }
     cout << endl;
   }
return 0;
}

/***************************** Step 32) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;
     cin >> rowCount;
     int c = 1;
     // for loop --> Fancy pattern #2(2)
     for (int row = 0; row < rowCount; row++){                      /* Pattern --> 25 */
        for (int col = 0; col <= row; col++){
          cout << c;                                                  // 1
          c++;                                                        // 23
          if (col < row){                                             // 456
               cout << "*";                                           // 78910
          }                                                           // 78910
        }                                                             // 456
        cout << endl;                                                 // 23
     }                                                                // 1
        // cout << "c: " << c << endl;                                
       // shrinking phrase                                            
       int start = c - rowCount;                                      
       for (int row = 0; row < rowCount; row++){       
         int k = start;
         for (int col = 0; col <= rowCount-row-1; col++){
           cout << k;
           k++;
           if (col <  rowCount-row-1){
               cout << "*";
           }
           
         }
          start = start - (rowCount - row - 1);
          cout << endl;
     }
   return 0;
}

/***************************** Step 33) **********************************/
#include <iostream>
using namespace std;
int main(){
                                                 
     int rowCount;                                          
     cin >> rowCount;
     // for loop ---> fancy pattern #3
     for (int row = 0; row < rowCount; row++) {
       int condition = row <= rowCount/2 ? 2*row : 2*(rowCount-row-1);
       for (int col = 0; col <= condition; col++){
          if (col <= condition/2){
               cout<< "*";                                /* Pattern --> 26 */
            cout << col+1 << "*";                         
          }                                               // *
          else{                                           // *1*
               cout << condition-col+1;                   // *121*
               cout << "*";                               // *12321*
          }                                               // *121*
     }                                                    // *1*
       cout << endl;                                      // *
     }
     return 0; 
}

/***************************** Step 34) **********************************/
#include <iostream>
using namespace std;
int main(){                                               /* Pattern --> 27 */ 
     int rowCount;                                      
     cin >> rowCount;                                     // 1
     // for loop ---> floyd's Traingle                    // 2 3
     int c = 1;                                           // 4 5 6
     for (int row = 0; row < rowCount; row++){            // 7 8 9 10
       for (int col = 0; col <= row; col++){              // 11 12 13 14 15
          cout << c << " ";                               // 16 17 18 19 20 21
          c++;                                            // 22 23 24 25 26 27 28
       }
       cout << endl;
     }
  return 0;
}

/***************************** Step 35) **********************************/
#include <iostream>
using namespace std;
int main(){
     int rowCount;                                             /* Pattern --> 28 */
     cin >> rowCount;                                          // 1
     // for loop --> pascal's Triangle                         // 1 1
     for (int row = 1; row <rowCount; row++){                  // 1 2 1
          int c = 1;                                           // 1 3 3 1 
       for (int col = 1; col <= row; col++){                   // 1 4 6 4 1
          cout << c << " ";                                    // 1 5 10 10 5 1 
          c = c * (row - col)/ col;                            // 1 6 15 20 15 6 1
       }
        cout << endl;  
     }
     return 0;
}

/***************************** Step 36) **********************************/ 
#include <iostream>
using namespace std;
int main(){                                                                 /* Pattern --> 28 */
     int rowCount;                                             
     cin >> rowCount;                                                         // *         *
     // for loop --> Butterfly pattern                                        // **       **
     for (int row = 0; row < 2*rowCount; row++){                              // ***     ***
      int cond = row < rowCount ? row : rowCount + (rowCount-row-1);          // ****   ****
      int space = row < rowCount ? 2*(rowCount - cond - 1) : row-cond-1;      // ***********
       for (int col = 0; col < 2*rowCount; col++) {                           // ***********
         if(col <= cond){                                                     // ****   ****
          cout << "*";                                                        // ***     ***
         }                                                                    // **       **
         else if (space > 0){                                                 // *         *
         cout << " ";
         space--;
         }
         else{
          cout << "*";
         }
       }                                                                     
         cout << endl;
     }                                                        

return 0;
>>>>>>> e169126 (day-1)
} 