1. Container: - Stack: - It follows LIFO principal.
Note: - 
//Their is no iterator in stack so range based loop will not work here
#include<stack>  //STL
stack<int>s //initialization of stack

//Functions
1. push                //emplace,top,pop,push--->O(1)
2. emplace
3. top
4. pop
5. size
6. empty
7. swap

Code: -

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>q,q2; // it does not supprot direct initialization like list and vector.
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(1);
    q.push(10);
    q2.push(100);
    q2.push(200);
    cout<<"Size of Queue: "<<q.size()<<endl;//6
    q.push(333);
    q.emplace(565);
    cout<<q.top()<<endl;//565
    q.pop();
    while(!q.empty()) // to print stack element every time  do top() and pop();
    {
        cout<<q.top()<<" "; //333 10 1 8 6 4 2
        q.pop();
    }
    cout<<endl;
    cout<<q.empty()<<endl; //1
  // swap ---> It does not support random access so need to swap one stack with the other one.
  q.swap(q2);
  while(!q.empty())
  {
    cout<<q.top()<<" "; // 200 100
    q.pop();
  }
  cout<<endl;
    return 0;
}

//Output: - 
Size of Queue: 6
565
333 10 1 8 6 4 2 
1
200 100 

//--------------------------------------------------------------------------------------

2. Container: - Queue: - It follows FIFO principal.
Note: - 
#include<queue>  //STL
queue<int>q //initialization of queue

//Functions
1. push                //emplace,top,pop,push--->O(1)
2. emplace
3. front
4. pop
5. size
6. empty
7. swap

Code: -
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q; // it does not supprot direct initialization like list and vector {};
    queue<int>q2;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q2.push(100);
    q2.push(200);
    cout<<"Size of Queue: "<<q.size()<<endl;//4
    q.push(333);
    q.emplace(565);
    q.pop();
    cout<<q.front()<<endl;//4
    q.pop();
    while(!q.empty()) // to print squeue element every time  do top() and pop();
    {
        cout<<q.front()<<" "; //6 8 333 565
        q.pop();
    }
    cout<<endl;
    cout<<q.empty()<<endl; //1
  // swap ---> It does not support random access so need to swap one stack with the other one.
  q.swap(q2);
  while(!q.empty())
  {
    cout<<q.front()<<" "; // 100 200
    q.pop();
  }
  cout<<endl;
    return 0;
}

//Output: - 
Size of Queue: 4
4
6 8 333 565 
1
100 200 


//--------------------------------------------------------------------------------------

3. Container: - Priority_queue: - greater element at the top by default.
Note: - 
#include<queue>  //STL
priotity_queue<int>q //initialization of queue

//Functions
1. push()               //emplace,pop,push--->O(logn)
2. emplace()
3. top()//O(n)
4. pop()
5. size()
6. empty()
7. swap()


#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>q; // it does not supprot direct initialization like list and vector {};
    priority_queue<int>q2;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(8);
    q2.push(100);
    q2.push(200);
    cout<<"Size of Priority Queue: "<<q.size()<<endl;//5
    q.push(333);
    q.emplace(1);
    q.pop();
    cout<<q.top()<<endl;//8
    q.pop();
    while(!q.empty()) // to print squeue element every time  do top() and pop();
    {
        cout<<q.top()<<" "; //6 4 3 2 1
        q.pop();
    }
    cout<<endl;
    cout<<q.empty()<<endl; //1
  // swap ---> It does not support random access so need to swap one stack with the other one.
  q.swap(q2);
  while(!q.empty())
  {
    cout<<q.top()<<" "; // 200 100
    q.pop();
  }
  cout<<endl;
    return 0;
}

//Output:
Size of Priority Queue: 5
8
6 4 3 2 1 
1
200 100 




//smallest element has highest priority. it gives priority to largest value by default.

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>>q; // it does not supprot direct initialization like list and vector {};
    priority_queue<int>q2;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(8);
    q2.push(100);
    q2.push(200);
    cout<<"Size of Priority Queue: "<<q.size()<<endl;//5
    q.push(333);
    q.emplace(1);
    q.pop();
    cout<<q.top()<<endl;//2
    q.pop();
    while(!q.empty()) // to print squeue element every time  do top() and pop();
    {
        cout<<q.top()<<" "; //3 4 6 8 331
        q.pop();
    }
    cout<<endl;
    cout<<q.empty()<<endl; //1
  // swap ---> It does not support random access so need to swap one stack with the other one.
//   q.swap(q2); // for swap both must be same like having same priority_queue.
    return 0;
}

//Output:
Size of Priority Queue: 5
2
3 4 6 8 333 
1


//---------------------------------------------------------------------------------------


4. Container: - Map: - It store key-value pair, Map sort data by default in ascending order.
Note: - 
#include<map>  //STL
map<string,int>mp; //initialization of queue
map<int,int>mp;
map<char,int>mp;
mp[key]=value;

//Functions
1. insert() //mp.insert({"Ayodhya",22});
2. emplace //mp.emplace("Ayodhya",23);
3. count   //mp.count("Ayodhya"); count count no.of keys
4. erase   //mp.erase("Ayodhya");
5. size    //mp.size()
6. empty   // !mp.empty()
7. find    //contain two part (found)->iterator and (not found)->m.end()--->if found return 
            //iterator if not found we get m.end();
//------------------------------------------------------
            // imp:- find
            // If the element is found → returns an iterator pointing to that element.
            // If the element is not found → returns m.end() (the past‑the‑end iterator).
//--------------------------------------------------------------------------------------
Code:-
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int>mp={{"Ayodhya", 20},{"Saudikshya",21},{"Kalpana",23},{"Rahul",10}};
    mp.emplace("Ayodhya",21);
    mp["Srijana"]=23;
    mp.insert({"Ram",30}); //use initializer list
    cout<<"Count of key: "<<mp.count("Ayodhya")<<endl;
    cout<<"Size of map: "<<mp.size()<<endl;
    cout<<mp.empty()<<endl;
    cout<<mp.erase("Kalpana")<<endl;
    //cout<<mp.erase(2)<<endl; //remove element with key-value 2 if found.
   //if(auto it = mp.find(3); it != mp.end()) mp.erase(it); //Erase by iterator
   //mp.erase(mp.begin(), mp.find(5)) //remove all element in given range(start,end)
   //useful for bulk element deletation     //Complexity: O(log n) for single erase, O(n) for range.
   for(auto it =mp.begin(); it != mp.end(); it++)
   {
    cout<<it->first<<" "<<it->second<<endl;
   }
   cout<<endl;
for(auto P: mp)
{
    cout<<P.first<<" "<<P.second<<endl;
}
    return 0;
}

//Output: -
Count of key: 1
Size of map: 6
0
1
Ayodhya 20
Rahul 10
Ram 30
Saudikshya 21
Srijana 23

Ayodhya 20
Rahul 10
Ram 30
Saudikshya 21
Srijana 23


//Other Maps
1. Multi map //Allow multiple duplicate keys 
2. Unordered_map // Not allow duplicate key value, print data in random order
Note: - 
#include<unordered_map>
unordered_map<string,int>mp;



5. Container: - Set  // provide unique values in sorted order.
Note: -
#include<set>
set<int>s;

//Functions
1. insert(), emplace()
2. count()
3. erase()
4.find()
5. size()
6. empty()


//Other set
1. Multi set //Allow multiple duplicate keys 
2. Unordered_set // Not allow duplicate key value, print data in random order
Note: - 
#include<unordered_set>
unordered_set<string,int>mp;


