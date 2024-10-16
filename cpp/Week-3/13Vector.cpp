#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // VECTOR
    cout << "---------------------------------" << endl;
    cout << "Vector 1: \n";
    cout << endl;

    // create vector
    vector<int>vect;
    // size
    cout << "vector size is: " << vect.size() << endl; // 0
    // capacity
    cout << "vector capacity is: " << vect.capacity() << endl; // 0
    cout << endl;

    // push element in vect vector
    vect.push_back(2);
    vect.push_back(5);
    vect.push_back(4);
    vect.push_back(6);
    vect.push_back(9);
    vect.push_back(7);
    // print
    for (int i = 0; i < vect.size(); i++)
    cout << vect[i] << " "; // 2 5 4 6 9 7
    cout << endl;
    // size
    cout << "vector size is: " << vect.size() << endl; // 6
    // capacity
    cout << "vector capacity is: " << vect.capacity() << endl; // 8
    cout << endl;

    // update vect vector
    vect[1] = 3;
    for (int i = 0; i < vect.size(); i++)
    cout << vect[i] << " "; // 2 3 4 6 9 7 
    cout << endl;

   /*------------------------------------------*/

    // array Initialize
    cout << "---------------------------------" << endl;
    cout << "Vector 2: \n";
    cout << endl;
    // create a second vector(size, initialization)
    vector<int>vect2(5,2);
    for (int i = 0; i < vect2.size(); i++)
    cout << vect2[i] << " "; // 2 2 2 2 2
    cout << endl;
     // size
    cout << "vector 2 size is: " << vect2.size() << endl; // 5
    // capacity
    cout << "vector 2 capacity is: " << vect2.capacity() << endl; // 5
    cout << endl;

    // push element in vect2 vector
    vect2.push_back(4);
    for (int i = 0; i < vect2.size(); i++)
    cout << vect2[i] << " "; // 2 2 2 2 2 4
    cout << endl;
    // size
    cout << "vector 2 size is: " << vect2.size() << endl; // 6
    // capacity
    cout << "vector 2 capacity is: " << vect2.capacity() << endl; // 10
    cout << endl;

    /*------------------------------------------*/
   
    // cout << "----------------" << endl;
    cout << "---------------------------------" << endl;
    cout << "Vector 3: \n";
    cout << endl;
    //create a third vector 
    vector<int>vect3 = {12,34,56,78,90};
    for (int i = 0; i < vect3.size(); i++)
    cout << vect3[i] << " "; // 12 34 56 78 90 
    cout << endl;

   /*------------------------------------------*/
   
    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "Vector 4: \n";
    cout << endl;
    //create a fourth vector 
    vector<int>vect4;
    // push element in vect4 vector
    vect4.push_back(2);
    vect4.push_back(4);
    vect4.push_back(6);
    vect4.push_back(8);
    vect4.push_back(10);
    vect4.push_back(12);

    // print
    for (int i = 0; i < vect4.size(); i++){
        cout << vect4[i] << " "; // 2 4 6 8 10 12
    }
    cout << endl;
    // size
    cout << "vector 4 size is: " << vect4.size() << endl; // 6
    // capacity
    cout << "vector 4 capacity is: " << vect4.capacity() << endl; // 8
    cout << endl;

    // Delete value from vector
    vect4.pop_back();
    //print
    for (int i = 0; i < vect4.size(); i++){
        cout << vect4[i] << " "; // 2 4 6 8 10
    }
    cout << endl;
    // size
    cout << "vector 4 size is: " << vect4.size() << endl; // 5
    // capacity
    cout << "vector 4 capacity is: " << vect4.capacity() << endl; // 8
    cout << endl;
    // remove 2nd element in vect4 vector
    // vect4.erase(vect4.begin()+indexNumber);
    vect4.erase(vect4.begin()+1);
    // print
    for(int i = 0; i < vect4.size(); i++)
    cout << vect4[i] << " "; // 2 6 8 10
    cout << endl;
    // insert 14 in place of 6
    // vect4.insert(vect4.begin()+indexNumber, value);
    vect4.insert(vect4.begin()+1, 14);
    // print
    for(int i = 0; i < vect4.size(); i++)
    cout << vect4[i] << " "; // 2 14 6 8 10
    cout << endl;

    vect4[1] = 4;
    // print
    for(int i = 0; i < vect4.size(); i++)
    cout << vect4[i] << " "; // 2 4 6 8 10
    cout << endl;

    // delete all element in vect4 vector
    vect4.clear();
    // print
    for(int i = 0; i < vect4.size(); i++)
    cout << vect4[i] << " "; // empty hai
    cout << endl;
    // size
    cout << "vector 4 size is: " << vect4.size() << endl; // 0
    // capacity
    cout << "vector 4 capacity is: " << vect4.capacity() << endl; // 8

    /*------------------------------------------*/
   
    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "Vector 5: \n";
    cout << endl;
    //create a fifth vector 
    vector<int>vect5;
    // push element in vect4 vector
    vect5.push_back(12);
    vect5.push_back(41);
    vect5.push_back(61);
    vect5.push_back(18);
    vect5.push_back(10);
    vect5.push_back(45);
    vect5.push_back(50);

    // print
    for (int i = 0; i < vect5.size(); i++){
        cout << vect5[i] << " "; // 12 41 61 18 10 45 50
    }
    cout << endl;
    // size
    cout << "vector 5 size is: " << vect5.size() << endl; // 7
    // capacity
    cout << "vector 5 capacity is: " << vect5.capacity() << endl; // 8
    cout << endl;

    // print first element 
    cout << "first element is: " << vect5[0] << endl; // first element is: 12
    cout << "first element is: " << vect5.front() << endl; // first element is: 12

    // print first element
    cout << "last element is: " << vect5[vect5.size()-1] << endl; // last element is: 50
    cout << "last element is: " << vect5.back() << endl; // last element is: 50
    cout << endl;

    // create another vector
    vector<int>v;
    v = vect5;
    // print
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " "; // 12 41 61 18 10 45 50
    }
    cout << endl;
    // size
    cout << "vector v size is: " << v.size() << endl; // 7
    // capacity
    cout << "vector v capacity is: " << v.capacity() << endl; // 7
    cout << endl;

    for (auto it = vect5.begin(); it != vect5.end(); it++) {
        cout << *it << " "; // 12 41 61 18 10 45 50
    }
    cout << endl;

    // another way
    for(auto i: vect5){
        cout << i << " "; // 12 41 61 18 10 45 50
    }
    cout << endl;
    
    // sort in increasing order
    sort(vect5.begin(),vect5.end());
    // print
    for (int i = 0; i < vect5.size(); i++){
        cout << vect5[i] << " "; // 10 12 18 41 45 50 61
    }
    cout << endl;
    
    // sort in decreasing order---first way
    sort(vect5.begin(),vect5.end(), greater<int>());
    // print
    for (int i = 0; i < vect5.size(); i++){
        cout << vect5[i] << " "; // 61 50 45 41 18 12 10
    }
    cout << endl;

    // sort in decreasing order---second way
    sort(vect5.rbegin(),vect5.rend());
    // print
    for (int i = 0; i < vect5.size(); i++){
        cout << vect5[i] << " "; // 61 50 45 41 18 12 10
    }
    cout << endl;

    // search in binary search
    cout << binary_search(vect5.begin(), vect5.end(), 5) << endl; // 0
    cout << find(vect5.begin(), vect5.end(), 45) - vect5.begin() << endl; // 2

    // count
    int count = count(vect5.begin(), vect5.end(), 5);
    return 0; 
}

