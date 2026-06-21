// Remove a Character from a Given Position

// Given a string and a position (0-based indexing), 
//remove the character at the given position.
// Examples: 

// Input : s = "abcde",  pos = 1
// Output : s = "acde"

#include<iostream>
#include<string>
using namespace std;
string removeChar(string s, int p)
{
    int n = s.size();
    for(int i =p; i<n; i++)
    {
        s[i] = s[i+1];
    }
    s.resize(n-1);
    return s;
}
int main()
{
    string s ="Ayodhya";
    int p = 2;
    cout<<removeChar(s,p);
    return 0;
}

// Output: - Aydhya

// Time Complexity: O(n)
// Auxiliary Space: O(1)