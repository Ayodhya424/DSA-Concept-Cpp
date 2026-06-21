//Insert a character in String at a Given Position.   Given a string s, a character c and an integer 
//position pos, the task is to insert the character c into the string s at the specified position pos.

#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> isInsert(vector<string>s, string word, int p)
{
    int n = s.size();
    s.push_back("");
    for(int i= n; i >= p; i--)
    {
        s[i] =s[i-1];
    }
    s[p-1]= word;
    return s;
}

int main()
{
vector<string> s ={"Ayodhya","Saudikshya","Kalpana","Srijana","Bal"};
string word = "Gyawa";
int p= 2;
vector<string> a =isInsert(s,word,p);
for(auto x: a)
{
    cout<<x<<endl;
}
return 0;
}


