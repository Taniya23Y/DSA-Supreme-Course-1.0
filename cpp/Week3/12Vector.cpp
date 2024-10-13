<<<<<<< HEAD
// VECTOR in cpp

#include  <iostream>
#include<vector>
using namespace std;

int main(){
	// create vector
  vector<int> arr;

  //  int ans = (sizeof(arr)/ sizeof(int));
  //  cout << ans << endl; // 3

  cout << arr.size() << endl;
  cout << arr.capacity() << endl;

  // insert
  arr.push_back(5);
  arr.push_back(6);

  // 1st one
  // print
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " "; // 5 6
  }
  cout << endl;

  // remove / delete
  arr.pop_back();
  // print
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " "; // 5
  }
  cout << endl;

  // 2nd one  
  vector<int> brr(10);
  cout << "size of b: " << brr.size() << endl; // size of b: 10
  cout << "size of b: " << brr.capacity() << endl; // size of b: 10

   // print
  for (int i = 0; i < brr.size(); i++)
  {
    cout << brr[i] << " "; // 5
  }
  cout << endl;

  // 3rd one
  vector<int> crr {10,20,30,40,50};
  cout << "size of c: " << crr.size() << endl; // 5
   // print
  for (int i = 0; i < crr.size(); i++)
  {
    cout << crr[i] << " "; // 10 20 30 40 50
  }
  cout << endl;

  // 4th one
  vector<int> drr (10, -101);
  cout << "size of d: " << drr.size() << endl; // 10
   // print
  for (int i = 0; i < drr.size(); i++)
  {
    cout << drr[i] << " "; // -101 -101 -101 -101 -101 -101 -101 -101 -101 -101 
  }
  cout << endl;

  // for empty()
  cout << "Vector crr are Empty or not: " << crr.empty() << endl; // 0 false means vector is not empty

  // 5th one
  vector<int> err;
  cout << "Vector crr are Empty or not: " << err.empty() << endl; // 1 true means vector is empty

  return 0;
=======
// VECTOR in cpp

#include  <iostream>
#include<vector>
using namespace std;

int main(){
	// create vector
  vector<int> arr;

  //  int ans = (sizeof(arr)/ sizeof(int));
  //  cout << ans << endl; // 3

  cout << arr.size() << endl;
  cout << arr.capacity() << endl;

  // insert
  arr.push_back(5);
  arr.push_back(6);

  // 1st one
  // print
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " "; // 5 6
  }
  cout << endl;

  // remove / delete
  arr.pop_back();
  // print
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " "; // 5
  }
  cout << endl;

  // 2nd one  
  vector<int> brr(10);
  cout << "size of b: " << brr.size() << endl; // size of b: 10
  cout << "size of b: " << brr.capacity() << endl; // size of b: 10

   // print
  for (int i = 0; i < brr.size(); i++)
  {
    cout << brr[i] << " "; // 5
  }
  cout << endl;

  // 3rd one
  vector<int> crr {10,20,30,40,50};
  cout << "size of c: " << crr.size() << endl; // 5
   // print
  for (int i = 0; i < crr.size(); i++)
  {
    cout << crr[i] << " "; // 10 20 30 40 50
  }
  cout << endl;

  // 4th one
  vector<int> drr (10, -101);
  cout << "size of d: " << drr.size() << endl; // 10
   // print
  for (int i = 0; i < drr.size(); i++)
  {
    cout << drr[i] << " "; // -101 -101 -101 -101 -101 -101 -101 -101 -101 -101 
  }
  cout << endl;

  // for empty()
  cout << "Vector crr are Empty or not: " << crr.empty() << endl; // 0 false means vector is not empty

  // 5th one
  vector<int> err;
  cout << "Vector crr are Empty or not: " << err.empty() << endl; // 1 true means vector is empty

  return 0;
>>>>>>> e169126 (day-1)
}