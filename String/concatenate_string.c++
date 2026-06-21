//--------------------------------------------------------------Concatenation of Two Strings

//String concatenation is the process of joining two strings end-to-end to form a single string.

// Examples

// Input: s1 = "Hello", s2 = "World"
// Output: "HelloWorld"
// Explanation: Joining "Hello" and "World" results in "HelloWorld".

//Approach:- 1
//---------------------Using '+' Operator - O(n+m) Time and O(n+m) Space
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string Concatenate(string s1, string s2)
{
    return s1+s2;
}
int main()
{
    string s1 ="Ayodhya";
    string s2 =" Loves Saudikshya";
    cout<<Concatenate(s1, s2)<<endl;
    return 0;
}

//Output: - Ayodhya Loves Saudikshya

//Approach:- 2
//Write your Own Method - O(n+m) Time and O(n+m) Space

// steps: -

// 1. Create an empty result string.
// 2. Traverse through s1 and append all characters to result.
// 3. Traverse through s2 and append all characters to result.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string Concatenate(string s1, string s2)
{
    string res;
    int ind =0;
    for(auto a: s1)
    {
        res +=a;
    }

    for(auto a: s2)
    {
        res +=a;
    }
    return res;
}
int main()
{
    string s1 ="Ayodhya";
    string s2 =" Loves Saudikshya Rathore";
    cout<<Concatenate(s1, s2)<<endl;
    return 0;
}

//Output: - Ayodhya Loves Saudikshya Rathore