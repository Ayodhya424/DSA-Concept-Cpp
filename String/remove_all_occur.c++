// Remove all occurrences of a character in a string
// Given a string and a character, remove all the occurrences of the character in the string.

// Examples: 
// Input : s = "geeksforgeeks"
//         c = 'e'
// Output : s = "gksforgks"

#include<iostream>
#include<string>
using namespace std;
string removeallocc(string s, char c)
{
    int n = s.size();
    int ind =0;
    for(int i=0; i<n; i++)
    {
        if(s[i] != c)
        {
            s[ind++] = s[i];
        }
    }
    s.resize(ind);
    return s;
}
int main()
{
    string s = "aaAyodhya";
    char c ='a';
    string d = removeallocc(s,c);
    cout<<d;
    return 0;

}