//Majority Element II
// Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> MajorityElement(vector<int>&num)
{
    int n = num.size();
    vector<int>result;
    unordered_map<int,int>mp;
    for(auto a: num)
    {
        mp[a]++;
    }
    for( auto a: mp)
    {
        if(a.second > n/3)
        {
            result.push_back(a.first);
        }
    }
    return result;
}

int main()
{
    //vector<int>num = {1,1,1,1,2,3,4,5,1,1,1,1};
    vector<int>num = {3,2,3};
    vector<int>b = MajorityElement(num);
    for(auto a: b)
    {
        cout<<a<<endl;
    }
    return 0;
}
