// You are given a string password.

// The strength of the password is calculated based on the following rules:

// 1 point for each distinct lowercase letter ('a' to 'z').
// 2 points for each distinct uppercase letter ('A' to 'Z').
// 3 points for each distinct digit ('0' to '9').
// 5 points for each distinct special character from the set "!@#$".
// Each character contributes at most once, even if it appears multiple times.

#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
int passStrength(string password)
{
    unordered_map<char,bool>mp;
    vector<char>res;
    int n = password.size();
    for(auto a: password)
    {
        if(mp.find(a) ==mp.end())
        {
            res.push_back(a);
            mp[a] =true;
        }
    }
   // return res;
    int m = res.size();
    int points =0;
    for(int i=0; i<m; i++)
    {
        if(islower(res[i]))
        {
            points +=1;
        }
        else if(isupper(res[i]))
        {
            points +=2;
        }
        else if(isdigit(res[i]))
        {
            points +=3;
        }
        else
        {
            points +=5;
        }
    }
    return points;
}
int main()
{
    string password ="Aayo343(*)Aayo343(*)";
    cout<<passStrength(password)<<endl;
    return 0;

}
