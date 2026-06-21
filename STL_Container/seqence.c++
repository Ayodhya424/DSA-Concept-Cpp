Sequence : - Each and every element are stored in contiguous memory location.
//---------------------------------------------------------------------------------------
1. Container: -  Vector : - It is Dynamic/ resize types meaning that it can shrink and increase its size 
              during the code compile time.

1. Method:  -    vector<int> vec;  //initializing a empty size vector;
code: - 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> arr;
    cout<<arr.size();
    return 0;
}

//output :- 0


2. Method: - Vector<int> vec={1,2,3}   //Initialization and declaration together

#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> arr={1,2,3,4};
    cout<<"Size of an Array "<<arr.size()<<endl;
    for( auto a: arr)
    {
        cout<< a<<" ";
    }
    return 0;
}

Output: -
//  Size of an Array 4
//  1 2 3 4 


3. Method: - vector<int> vec(3,10);//This creates a vector of 3 integers, each initialized to 10.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> arr(4,10);   // Mostly used in Dynamic Programming initialization
 for(auto b: arr)
 {
    cout<<b<<" ";
 }
 return 0;
}

//Output: - 10 10 10 10 


4. Method: - vector<int>vec1(vec2); 
// It creates a new vector with the same elements as vec2.
//Any changes to vec1 do not affect vec2 (because it’s a deep copy, not a reference).

#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> arr1={2,3,4,5,6,7};
 vector<int> arr2(arr1);
 for(auto b: arr2)
 {
    cout<<b<<" ";
 }
 return 0;
}

//Output: - 2 3 4 5 6 7 




/////////////////////////////---Using different function---/////////////////////////////////////
1. size & Capacity
2. push_back & pop_back
3. emplace_back
4. at() or []
5. front & back
6. erase // O(n)   // used to delete element  // random-access iterator → arr.begin() + index valid.
7. insert // O(n)   // used to insert element
8. clear
9. empty


//working of vector: it create a double size memory when we try to push element.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> arr={2,3,4,5};
 cout<<"Size of Array: "<<arr.size()<<endl; //4
 arr.pop_back(); 
 arr.push_back(6); 
 for(auto a: arr)
 {
    cout<<a<<" ";  //2 3 4 6
 }
 cout<<endl;
 arr.push_back(7); 
 arr.emplace_back(9); // 2 3 4 6 7 9
 for(auto a: arr)
 {
    cout<<a<<" ";   // 2 3 4 6 7 9
 }
 cout<<endl;
 cout<<arr.at(2)<<endl;   // 4
 cout<<arr[3] <<endl;      //6
 cout<<arr.front() <<endl;  //2 
 cout<<arr.back()<<endl;   // 9
 return 0;
}




// used case of function 6,7,8,9

#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> arr={2,3,4,5,6,7,8,9};//erase,clear,insert,empty
 arr.erase(arr.begin());  //erase index 0
 arr.erase(arr.begin()+2); //erase index 2
 arr.erase(arr.begin()+2, arr.begin()+4); // erase index 2,3 i.e    arr.erase(start,end);
 cout<<"Capacity of an Array: "<<arr.capacity()<<endl; //8
 // syntax
 //arr.insert(position, val);
 arr.insert(arr.begin()+4,40);
 for(auto a: arr)
 {
    cout<<a<<" "; //3 4 8 9 40
 }
 cout<<endl;
 arr.clear();  
 for(auto a:arr)
 {
    cout<<a; //0
 }
 cout<<endl;
 cout<<arr.empty();  //1
 return 0;
}

//Output: -
Capacity of an Array: 8
3 4 8 9 40 

1

Iterator: -
1. vec.begin()  // means index 0
2. vec.end()  // means n+1 i.e one front of n 
3. vec.rbegin()  // function  used for reverse
4. vec.rend()    // function used in reverse


code: -
#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> arr={2,46,56,344,1,6,7,8,9};
 cout<<*(arr.begin())<<endl;
 cout<<*(arr.end())<<endl;

 vector<int>::iterator it;  // forward
 for(auto it= arr.begin(); it != arr.end(); it++)
 {
    cout<<*(it)<<" ";
 }
 cout<<endl;

 vector<int>::iterator t;  //backward
 for(auto t=arr.rbegin(); t !=arr.rend(); t++)
 {
    cout<<*(t)<<" ";
 }
 return 0;
}

// Output: - 
2
1634545011
2 46 56 344 1 6 7 8 9 
9 8 7 6 1 344 56 46 2 

//--------------------------------------------------------------------------------------


// 2. Container :-  List  //  list is implemented as doubly linked list// it dont allow random array access
Note: -
#include<list>  //STL
list<int>l={1,2,3}; //declaration and initialization

//function
1. push_back & push_front
2. emplace_back & emplace_front
3. pop_back & pop_front
4. erase: -  // bidirectional iterator → lst.begin() + index invalid, use advance(it, index).
5. clear, empty, size,begin(), end(), rbegin(), rend(),insert, front, back all 
work same like vector.

Code: -

#include<iostream>
#include<list>
using namespace std;
int main()
{
 list<int> arr={2,46,56,1,6,7};
 arr.push_back(3);
 arr.push_front(4);
 arr.emplace_back(30);
 arr.emplace_front(10);
 arr.pop_back();
 arr.pop_front();
 //------------------------------------------------------------------
 // using erase due to bidirectional we cannot use like Vector
 auto j = arr.begin();
 advance(j, 3); //Move iterator 3 step forward
 arr.erase(j); //Now erase
//--------------------------------------------------------------------
 cout<<arr.empty()<<endl; //0
 cout<<arr.size()<<endl; //7


 //-------------------------------------------------------------------
 //Due to bidirectional in nature we can not insert element like vector 
 auto i = arr.begin();
 advance(i,4); //move iterator 3 step forward
 arr.insert(i,100);
 for(auto c: arr)
 {
    cout<<c<<" "; //4 2 46 1 100 7 3
 }
 cout<<endl;
 cout<<"Front element: "<<arr.front()<<endl; //4
 cout<<"last element: "<<arr.back()<<endl;   // 3

list<int>::iterator it;
for(auto it = arr.begin(); it != arr.end(); it++)
{
    cout<<*(it)<<" ";    //4 2 46 1 100 7 3
}
cout<<endl;

list<int>::iterator t;
for(auto t = arr.rbegin(); t != arr.rend(); t++)
{
    cout<<*(t)<<" ";    //3 7 100 1 46 2 4
}
cout<<endl;
arr.clear();
cout<<arr.empty();//1
 return 0;
}

// // Output: - 
// 0
// 7
// 4 2 46 1 100 6 7 3 
// Front element: 4
// last element: 3
// 4 2 46 1 100 6 7 3 
// 3 7 6 100 1 46 2 4 
// 1

//--------------------------------------------------------------------------------------

3. Container: - Deque(Double ended queue) //it allows random access of element like vector.
Note: - 
#include<deque>  //STL
deque<int>d = {1,2,3,4,5,6}  // initialization and declaration

// Functions
1. push_back & push_front
2. emplace_back & emplace_front
3. pop_back & pop_front
4. size()
5. erase()
6. clear()
7. begin()
8. end()
9. rbegin();
10. rend()
11. insert()
12. front()
13. back()

Code: -

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d = {8,7,89,76,54,4,3};
    cout<<"Size of deque: "<<d.size()<<endl;//7
    d.push_back(30);
    d.push_front(50);
    d.emplace_back(60);
    d.emplace_front(70);
    d.pop_back();
    d.pop_front();
    d.erase(d.begin()+2);
    d.erase(d.begin());
    d.insert(d.begin()+3, 90);
    for(auto f: d)
    {
        cout<<f<<" ";//8 89 76 90 54 4 3 30
    }
    cout<<endl;
    cout<<d.front()<<endl; //8
    cout<<d.back()<<endl;  //30
    cout<<d.empty()<<endl;  //0

    //iterator
    deque<int>::iterator it;//forward
    for(auto it = d.begin(); it != d.end(); it++)
    {
        cout<<*(it)<<" ";  //8 89 76 90 54 4 3 30
    }
    cout<<endl;
    deque<int>::iterator i;//Backward
    for(auto i = d.rbegin(); i != d.rend(); i++)
    {
        cout<<*(i)<<" ";  //30 3 4 54 90 76 89 8
    }
    cout<<endl;
    d.clear();   //
    cout<<"Is deque is empty: "<<d.empty()<<endl; //1
    cout<<"Size of deque after clear: "<<d.size(); //0
    return 0;
}

//Output: -
Size of deque: 7
8 89 76 90 54 4 3 30 
8
30
0
8 89 76 90 54 4 3 30 
30 3 4 54 90 76 89 8 
Is deque is empty: 1
Size of deque after clear: 0


//--------------------------------------------------------------------------------------

4. Container: - Pair  // it store element in key-value pair.
Note: -
#include<deque>
pair<int,int>p={3,5}
pair<char,int>p={'A',8};
pair<string,int>p={"Ayodhya", 7};

//pairs of pairs
pair<int,pair<int,int>>p={1,{2,4}};

//making pair in vector
vector<int,int>

5. 








