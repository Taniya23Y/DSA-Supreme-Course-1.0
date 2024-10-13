<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits.h>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;


// pairs in Vector--> pairs is a part of utility library
void Explainpairs(){
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << " "; // 1 3
    cout << endl;

    pair<int , pair<int,int>> p1 = {1, {3,4}};
    cout << p.first << " " << p1.second.second << " " << p1.second.first << " "; // 1 4 3 
    cout << endl;

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second; // 5
    cout << endl;
}

// vector
void ExplainVector(){
    // VECTOR
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // it is similar to push_back() , faster than push_back()
    for (auto i: v)
    cout << i << " "; // 1 2

    // we can define a pair datatype in vector
    vector<pair<int, int>> vec;
    vec.push_back({11,22});
    vec.emplace_back(23,25);
   
    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    // copy 1 vector to another container
    vector<int> v2(v1);

    // iterator
    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) << " ";
    cout << endl;

    it = it + 2;
    cout << *(it) << " ";
    cout << endl;

    vector<int>::iterator it = v.end();

    //vector<int>::iterator it = v.rend();

    //vector<int>::iterator it = v.rbegin();

    cout << v1[0] << " " << v1.at(0);
    cout << v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it : v){
       cout << it << " ";
    }

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);

    // {10, 20, 12, ,23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35} {start,end}

    // Insert Function
    vector<int>v(2,100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100};
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10,20}
    cout << v.size(); // 2

   // {10,20}
   v.pop_back(); //{10}

   // v1 --> {10,20}
   // v2 --> {30,40}
   v1.swap(v2); // v1 -> {30,40} , v2 --> {10,20}

   v.clear(); // empty the entire vector

   cout << v.empty();
}

// List in vector

void ExplainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {2,4}

    //rest functions same as vector
    // begin(), rbegin(), rend(), end(), clear(), insert(), size(), swap()

}

// Deque() in vector
void ExplainDeque(){
    deque<int>dq;
    
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}

    dq.push_front(4); // {4, 1, 2}

    dq.emplace_front(); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_back();// {4,1}
    dq.back();
    dq.front();

    //rest functions same as vector
    // begin(), rbegin(), rend(), end(), clear(), insert(), size(), swap()
}

// stack() in vector
void ExplainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // print 5 "** st[2] is invalid **"
    st.pop(); // st looks {3, 3, 2, 1}

    cout << st.top(); //3
    cout << st.size(); //4
    cout << st.empty(); 

    stack<int>st1, st2;
    st1.swap(st2);
}

// Queue() in Vector--> Fifo (first in first out)
void ExplainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2,4}

    q.back() += 5;

    cout << q.back(); // prints 9

    //Q is {1, 2, 9}
    q.pop(); // {2, 9}
    cout << q.front(); // prints 2

    // size swap empty same as stack
}

//priority() in vector
void ExplainPQ(){
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); //prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}

// sets()--> It stores everything in a sorted prder and unique.
void ExplainSet(){
   set<int> st;
   st.insert(1); // {1}
   st.emplace(2); // {1, 2}
   st.insert(2); // {1, 2}
   st.insert(4); // {1, 2, 4}
   st.insert(3); // {1, 2, 3, 4}

   // Functionality of insert in vector
   // can be used also, that only those of above efficiency.

   // begin(), end(), rbegin(), rend(), size(),
   // empty(), and swap() are same as those of above

   // {1, 2 ,3 ,4, 5}
   auto it = st.find(3);

   // {1, 2, 3, 4, 5}
   // If the element is not here in set, it will always 
   // return st.end() [that means, a iterator that points to right after the end]
   auto it = st.find(6); 

   // {1, 4, 5}
   st.erase(5); // erases 5 // takes logarithmic time

   int cnt = st.count(1);

   auto it = st.find(3);
   st.erase(it); // it takes constant time

   // {1, 2, 3, 4, 5}
   auto it1 = st.find(2);
   auto it2 = st.find(4);
   st.erase(it1, it2); // after erase{1, 4, 5} {first, last}

   // lower_bound() and upper_bound() function works in the same way
   // as in vector it does.

   // this is the syntax
   auto it = st.lower_bound(2);
   auto it = st.upper_bound(3);
}

// MultiSet()
void ExplainMultiSet(){
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all function same as set
}

// unsorted order()
void ExplainUset(){
   // everything is similar to set, the only things that omitted is sorted order, it stores unique, it has randomized order .
   /*--------------------------*/
   /*      definition         */
   // An unordered_set is an unordered associative container 
   //implemented using a hash table where keys are hashed into indices 
   //of a hash table so that the insertion is always randomized. All operations on the unordered_set 
   //take constant time O(1) on an average which can go up to linear time O(n) in the worst case which 
   //depends on the internally used hash function, but practically they perform very well and generally 
   //provide a constant time lookup operation. 
   unordered_set<int> st;
   // lower_bound and upper_bound function does not works, rest of all functions are same
   //as above, it does not stores in any particular order 
   //it has a better complexity than set in most cases, excepts some collision happens.
}

// Map()
void ExplainMap(){

   map<int, int>mpp;
   map<int, pair<int, int>> mpp;
   map<pair<int, int>, int> mpp;

   mpp[1] = 2;
   // syntax: map_name.emplace(key, element)
   mpp.emplace(3, 1);
   mpp.insert({2, 4});

/*    mpp[{2,3}] = 10;

    {
       {1,2}
       {2,4}       // quick revision
       {3,1}
    }*/

   for (auto it : mpp){
       cout << it.first << " " << it.second << endl;
   }

   cout << mpp[1];
   cout << mpp[5];

   auto it = mpp.find(3);
//    cout << *(it).second;
   
   auto it = mpp.find(5);
  
  //This is the syntax
  auto it = mpp.lower_bound(2);
  auto it = mpp.upper_bound(3);

  // erase , swap, size, empty are samme as above
}

// Multimap()
void ExplainMultimap(){
    // Everything same as map, only it can store multiple keys only 
    // mpp[key] cannot be used here
}

// UnorderedMap()
void ExplainUnorderedMap(){
    // same as set and unordered_set difference.
}

// comp()
bool comp(pair<int,int>p1, pair<int, int>p2){
    if(p1.second < p2.second) {
        return true;
    }
    else if(p1.second == p2.second) {
        if(p1.first > p2.second)
        return true;
    }
    return false;
}

// Extra()
void ExplainExtra() {
    int a, n;
    vector<int>v;
    sort(a+2, a+4);
    sort(v.begin(), v.end());

    // sort(a, a+n, greater<int>);

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort it according to second element if second 
    // element is same, then sort it according to first element 
    // but in descending.

    sort(a, a+n, comp);

    // {4,1}, {2,1}, {1,2}

    int num = 7;
    // error line number 380
    // int cnt = __builtin_popcount();

    long long nuum = 16578657843157;
    // error line number 384
    // int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());

    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    // syntax ⬇️
    // int maxi = *max_element(a, a+n);
}

int main()
{
    // Pairs 
    Explainpairs();

    // vector
    ExplainVector();

    // List
    ExplainList();

    // Deque
    ExplainDeque();

    // stack
    ExplainStack();

    // Queue
    ExplainQueue();

    //priority()
    ExplainPQ();

    //sets()
    ExplainSet();
    
    // MultiSet()
    ExplainMultiSet();

    // Unorderset()
    ExplainUset();

    // Map()
    ExplainMap();

    // Multimap()
    ExplainMultimap();

    // UnorderedMap()
    ExplainUnorderedMap();

    // comp()
    // comp(pair<int, int>p1, pair<int, int>p2);

    // Extra();
    ExplainExtra();

    return 0;
}
=======
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits.h>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;


// pairs in Vector--> pairs is a part of utility library
void Explainpairs(){
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << " "; // 1 3
    cout << endl;

    pair<int , pair<int,int>> p1 = {1, {3,4}};
    cout << p.first << " " << p1.second.second << " " << p1.second.first << " "; // 1 4 3 
    cout << endl;

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second; // 5
    cout << endl;
}

// vector
void ExplainVector(){
    // VECTOR
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // it is similar to push_back() , faster than push_back()
    for (auto i: v)
    cout << i << " "; // 1 2

    // we can define a pair datatype in vector
    vector<pair<int, int>> vec;
    vec.push_back({11,22});
    vec.emplace_back(23,25);
   
    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    // copy 1 vector to another container
    vector<int> v2(v1);

    // iterator
    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) << " ";
    cout << endl;

    it = it + 2;
    cout << *(it) << " ";
    cout << endl;

    vector<int>::iterator it = v.end();

    //vector<int>::iterator it = v.rend();

    //vector<int>::iterator it = v.rbegin();

    cout << v1[0] << " " << v1.at(0);
    cout << v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it : v){
       cout << it << " ";
    }

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);

    // {10, 20, 12, ,23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35} {start,end}

    // Insert Function
    vector<int>v(2,100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100};
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10,20}
    cout << v.size(); // 2

   // {10,20}
   v.pop_back(); //{10}

   // v1 --> {10,20}
   // v2 --> {30,40}
   v1.swap(v2); // v1 -> {30,40} , v2 --> {10,20}

   v.clear(); // empty the entire vector

   cout << v.empty();
}

// List in vector

void ExplainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {2,4}

    //rest functions same as vector
    // begin(), rbegin(), rend(), end(), clear(), insert(), size(), swap()

}

// Deque() in vector
void ExplainDeque(){
    deque<int>dq;
    
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}

    dq.push_front(4); // {4, 1, 2}

    dq.emplace_front(); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_back();// {4,1}
    dq.back();
    dq.front();

    //rest functions same as vector
    // begin(), rbegin(), rend(), end(), clear(), insert(), size(), swap()
}

// stack() in vector
void ExplainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // print 5 "** st[2] is invalid **"
    st.pop(); // st looks {3, 3, 2, 1}

    cout << st.top(); //3
    cout << st.size(); //4
    cout << st.empty(); 

    stack<int>st1, st2;
    st1.swap(st2);
}

// Queue() in Vector--> Fifo (first in first out)
void ExplainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2,4}

    q.back() += 5;

    cout << q.back(); // prints 9

    //Q is {1, 2, 9}
    q.pop(); // {2, 9}
    cout << q.front(); // prints 2

    // size swap empty same as stack
}

//priority() in vector
void ExplainPQ(){
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); //prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}

// sets()--> It stores everything in a sorted prder and unique.
void ExplainSet(){
   set<int> st;
   st.insert(1); // {1}
   st.emplace(2); // {1, 2}
   st.insert(2); // {1, 2}
   st.insert(4); // {1, 2, 4}
   st.insert(3); // {1, 2, 3, 4}

   // Functionality of insert in vector
   // can be used also, that only those of above efficiency.

   // begin(), end(), rbegin(), rend(), size(),
   // empty(), and swap() are same as those of above

   // {1, 2 ,3 ,4, 5}
   auto it = st.find(3);

   // {1, 2, 3, 4, 5}
   // If the element is not here in set, it will always 
   // return st.end() [that means, a iterator that points to right after the end]
   auto it = st.find(6); 

   // {1, 4, 5}
   st.erase(5); // erases 5 // takes logarithmic time

   int cnt = st.count(1);

   auto it = st.find(3);
   st.erase(it); // it takes constant time

   // {1, 2, 3, 4, 5}
   auto it1 = st.find(2);
   auto it2 = st.find(4);
   st.erase(it1, it2); // after erase{1, 4, 5} {first, last}

   // lower_bound() and upper_bound() function works in the same way
   // as in vector it does.

   // this is the syntax
   auto it = st.lower_bound(2);
   auto it = st.upper_bound(3);
}

// MultiSet()
void ExplainMultiSet(){
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all function same as set
}

// unsorted order()
void ExplainUset(){
   // everything is similar to set, the only things that omitted is sorted order, it stores unique, it has randomized order .
   /*--------------------------*/
   /*      definition         */
   // An unordered_set is an unordered associative container 
   //implemented using a hash table where keys are hashed into indices 
   //of a hash table so that the insertion is always randomized. All operations on the unordered_set 
   //take constant time O(1) on an average which can go up to linear time O(n) in the worst case which 
   //depends on the internally used hash function, but practically they perform very well and generally 
   //provide a constant time lookup operation. 
   unordered_set<int> st;
   // lower_bound and upper_bound function does not works, rest of all functions are same
   //as above, it does not stores in any particular order 
   //it has a better complexity than set in most cases, excepts some collision happens.
}

// Map()
void ExplainMap(){

   map<int, int>mpp;
   map<int, pair<int, int>> mpp;
   map<pair<int, int>, int> mpp;

   mpp[1] = 2;
   // syntax: map_name.emplace(key, element)
   mpp.emplace(3, 1);
   mpp.insert({2, 4});

/*    mpp[{2,3}] = 10;

    {
       {1,2}
       {2,4}       // quick revision
       {3,1}
    }*/

   for (auto it : mpp){
       cout << it.first << " " << it.second << endl;
   }

   cout << mpp[1];
   cout << mpp[5];

   auto it = mpp.find(3);
//    cout << *(it).second;
   
   auto it = mpp.find(5);
  
  //This is the syntax
  auto it = mpp.lower_bound(2);
  auto it = mpp.upper_bound(3);

  // erase , swap, size, empty are samme as above
}

// Multimap()
void ExplainMultimap(){
    // Everything same as map, only it can store multiple keys only 
    // mpp[key] cannot be used here
}

// UnorderedMap()
void ExplainUnorderedMap(){
    // same as set and unordered_set difference.
}

// comp()
bool comp(pair<int,int>p1, pair<int, int>p2){
    if(p1.second < p2.second) {
        return true;
    }
    else if(p1.second == p2.second) {
        if(p1.first > p2.second)
        return true;
    }
    return false;
}

// Extra()
void ExplainExtra() {
    int a, n;
    vector<int>v;
    sort(a+2, a+4);
    sort(v.begin(), v.end());

    // sort(a, a+n, greater<int>);

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort it according to second element if second 
    // element is same, then sort it according to first element 
    // but in descending.

    sort(a, a+n, comp);

    // {4,1}, {2,1}, {1,2}

    int num = 7;
    // error line number 380
    // int cnt = __builtin_popcount();

    long long nuum = 16578657843157;
    // error line number 384
    // int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());

    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    // syntax ⬇️
    // int maxi = *max_element(a, a+n);
}

int main()
{
    // Pairs 
    Explainpairs();

    // vector
    ExplainVector();

    // List
    ExplainList();

    // Deque
    ExplainDeque();

    // stack
    ExplainStack();

    // Queue
    ExplainQueue();

    //priority()
    ExplainPQ();

    //sets()
    ExplainSet();
    
    // MultiSet()
    ExplainMultiSet();

    // Unorderset()
    ExplainUset();

    // Map()
    ExplainMap();

    // Multimap()
    ExplainMultimap();

    // UnorderedMap()
    ExplainUnorderedMap();

    // comp()
    // comp(pair<int, int>p1, pair<int, int>p2);

    // Extra();
    ExplainExtra();

    return 0;
}
>>>>>>> e169126 (day-1)
