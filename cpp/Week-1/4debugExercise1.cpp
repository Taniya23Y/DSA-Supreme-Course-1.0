//****************************************************
//* Supreme-Batch-Debug-Exercise-C++ (Week-1)
//* NOTE: The code snippet given may have compile time, runtime or logical errors.
//* How to attempt Debugging Exercise?
//* 1). Copy the code to your code editor (e.g. VS Code).
//* 2). Add relevant header files like “#include <iostream>” etc.
//* 3). Run the code.
//* 4). You will notice the expected output is not printing at the console.
//* 5). Apply your smart coder mind to Debug the code.
//* 6). Warning: Only see the solution after you have tried enough.

/******************************************************************************/

//********* Question - 1) */
//*1). The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// void main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i:
// 	/*print i \*//i=i+1
// 	cout<<++i;
// }

//* answer ⬇️

// #include <iostream>
// using namespace std;          
// int main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i // i=i+1*/
// 	cout<<++i;  // answer is : 12
//  return 0;
// }

//********************************* Question 2) *******************************/
//* 2). Below code should print the sum of ‘i’ and ‘j’.

// void main() {
// 	short i=2300, j=4322;
// 	cout>>"i+j=">>-(i+j);
// }

//* Answer 
// #include <iostream>
// using namespace std;
// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<-(i+j); // answer : i+j=-6622
//  return 0;
// }

//********************************* Question - 3) **********************************/
//* 3). Find perimeter of a rectangle.
// void main() {
// 	float l, b;
// 	P = 2(l+b);
// 	printf("Perimeter=", P);
// }

//* Answer 
// #include <iostream>
// using namespace std;
// int main() {
// 	float l, b;
// 	cout << "Enter Length l: " ;
// 		cin >> l;
// 	cout << "Enter Breadth b: " ;
// 	cin >> b;
// 	int P = 2 * (l + b);
// 	cout << "Perimeter = " << P; // Answer: Perimeter = 10
//   return 0;
// }
//********************************* Question - 4) **********************************/
//* 4). Print solid square pattern.
// void main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++i) {
//             cout<<"*\n";
//         }
//         cout<<endl;
//     }
// }

// Answer 
// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
//     cin>>n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// 	return 0;
// }
//********************************* Question - 5) **********************************/
//* 5). Check given number is Prime or not.

// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(i%n == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }

//* Answer 

// #include <iostream>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	// Assume the number is prime unless proven otherwise
//     bool isPrime = true;

//     // Start checking divisibility from 2 up to n-1
//     if (n <= 1) {
//         isPrime = false;  // Numbers <= 1 are not prime
//     } else {
//         for(int i = 2; i < n; i++){
//             if(n % i == 0){
//                 isPrime = false;  // Found a divisor, n is not prime
//                 break;
//             }
//         }
//     }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }

//********************************* Question - 6) **********************************/
//* Print Numeric Hollow Inverted Half Pyramid (Click the hyper link to understand the output)
//Input: N = 5
//      1
//      1 2
//      1   3
//      1     4
//      1 2 3 4 5

// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//* Answer 
// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cin>>num;

//       for (int row = 1; row <= num; row++) {
//         // For loop to display number upto i
//         for (int col = 1; col <= row; col++) {
//             if (col == 1 || col == row || row == num)
//                 cout << col << " ";
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
// }

//********************************* Question - 7) **********************************/
//*  Pattern Question  
//*           1
//*         2 3 2
//*       3 4 5 4 3
//*     4 5 6 7 6 5 4
//*   5 6 7 8 9 8 7 6 5

// int main(){
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i - 1; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (n - i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
// 	int num;
//     cin >> num;
//   for (int row = 1; row <= num; row++) {
//         // Step 1: Print leading spaces
//         for (int space = 1; space <= num - row; space++) {
//             cout << "  ";  // Two spaces for better alignment
//         }

//         // Step 2: Print increasing numbers starting from 'row'
//         int val = row;
//         for (int col = 1; col <= row; col++) {
//             cout << val++ << " ";
//         }

//         // Step 3: Print decreasing numbers after the peak
//         val = val - 2;  // Decrement val to start decreasing
//         for (int col = 1; col < row; col++) {
//             cout << val-- << " ";
// 		}
//         cout << endl;
//     }
//   return 0;
// }

//********************************* Question - 8) **********************************/
//* 8). Print hollow full pyramid pattern.
//      *
//     * *
//    *   *
//   *     *
//  * * * * *

// void main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n*2-1; ++j) {
// 		        int k=0;
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k < 2*i+1){
//                 if(k==0 || k == 2*i - 1 || i == n - 1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 cout<<" ";
//             } k++;
//         }
//         cout<<endl;
//     }
// }

//* Answer
#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int row = 1; row <= num; row++){
		// space
       for(int space = 1; space <=num - row; space++){
        cout << " ";
	   }
	   // star
	   for(int star = 1; star <= 2 * row - 1; star++){
		if(star == 1 || star == 2 * row - 1 || row == num){
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