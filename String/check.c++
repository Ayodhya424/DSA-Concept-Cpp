// Given two strings, check if these two strings are identical(same) or not. Consider case sensitivity.

#include<iostream>
#include<string>
using namespace std;
bool isSame(string s, string t)
{
    int a = s.size();
    int b = t.size();
    int n = s.size();
    if( a != b)
    {
        return false;
    }
    for(int i = 0; i<n; i++)
    {
        if(s[i] != t[i])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    string s = "Apple";
    string t = "Appe";
    bool c = isSame(s,t);
    //cout<<c<<endl; // print 0 and 1
    cout<<boolalpha<<c<<endl; // print true and false
    return 0;

}