//--------------------------------Check if a string is substring of another
//Given two strings txt and pat, the task is to find if pat is a substring of txt. If yes, 
//return the index of the first occurrence, else return -1.

// Examples : 
// Input: txt = "geeksforgeeks", pat = "eks"
// Output: 2
// Explanation: String "eks" is present at index 2 and 10, so 2 is the smallest index

// Approach:- Naive algorithm for Pattern Searching


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> PatterMatching(string &Big, string &small)
{
    int m = Big.size();
    int n = small.size();
    vector<int>res;
    for(int i =0; i<m-n; i++)
    {
        int j;
        for(j=0; j<n; j++)
        {
            if(Big[i+j] != small[j])
            break;
        }
        if(j==n)
        {
            res.push_back(i);
        }
    }
    return res;
}
int main()
{
    string Big ="AyodhyaLovesSaudikshyaLovesAyodhya";
    string small ="Loves";
    vector<int>res = PatterMatching(Big, small);
    for(auto it: res)
    {
        cout<<it<<endl;
    }
   return 0;
}

//Output: - 7 22

// Time Complexity
// O(n × m), because every possible starting position in the text is checked and up to m characters are 
// compared at each position.

// Auxiliary Space
// O(1), only a few variables are used, and no extra data structures are required.