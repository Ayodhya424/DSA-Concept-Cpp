//------------Approach: 1...------------------Using Two Pointers - O(n) Time and O(1) Space
//Start from both ends of the string and keep swapping characters while moving toward the center. 
// Each swap places the correct character in its reversed position, and when both pointers meet in the 
// middle, the entire string becomes reversed.


#include<iostream>
#include<vector>
using namespace std;
string Reverse(string s)
{
   int n = s.size();
   int left =0;
   int right = n-1;
   while(left < right)
   {
    swap(s[left],s[right]);
    {
        left++;
        right--;
    }
   }
    return s;
}
int main()
{
    string s="Ayodhya";
    cout<<Reverse(s)<<endl;
    return 0;
}

//Output: - ayhdoyA




//------------------Approach: 2..........[Using Stack - O(n) Time and O(n) Space
// The idea is to use stack for reversing a string because Stack follows Last In First Out (LIFO) 
// principle. This means the last character you add is the first one you'll take out. So, when we push 
// all the characters of a string into the stack, the last character becomes the first one to pop. 

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
string Reverse(string s)
{
   int n = s.size();
   stack<char>res;
   for(auto a: s)
   {
    res.push(a);
   }
   for(int i=0; i<n; i++)
   {
    s[i]=res.top();
    res.pop();
   }
   return s;

}
int main()
{
    string s="Ayodhya";
    cout<<Reverse(s)<<endl;
    return 0;
}

//Output: - ayhdoyA
