//Given a character ch and a string s, the task is to find the index of the first 
//occurrence of the character in the string. If the character is not present in the string, return -1.

#include<iostream>
#include<string>
using namespace std;
int isFound(string s, char c)
{
    int n = s.size();
    for(int i =0; i<n; i++)
    {
        if(s[i] == c)
        {
            return i;            
        }
    }
    return -1;
}

int main()
{
    string s ="Saudikshya";
    char c = 'k';
    int a = isFound(s,c);
    cout<<a<<endl;
    return 0;
    
}
