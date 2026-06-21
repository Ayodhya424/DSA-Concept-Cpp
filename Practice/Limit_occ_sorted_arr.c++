// You are given a sorted integer array nums and an integer k.

// Return an array such that each distinct element appears at most k times, 
// while preserving the relative order of the elements in nums.

// Note: If a distinct element appears at least k times, then it must 
// appear exactly k times in the resulting array.

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,1,2,2,3]
// Explanation:

// Each element can appear at most 2 times.

// The element 1 appears 3 times, so only 2 occurrences are kept.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> limitoccurance(vector<int>arr, int k)
{
    int n = arr.size();
    unordered_map<int,int>mp;
    vector<int>res;
    for(auto x: arr)
    {
        if(mp[x] < k)
        {
            res.push_back(x);
            mp[x]++;
        }
        
    }
    return res;

}
int main()
{
    vector<int> arr = {2,3,4,2,3,4,2,3,5,6,7,7,6,7};
    int k = 2;
    vector<int> a = limitoccurance(arr,k);
    for(auto b: a)
    {
        cout<<b<<" ";
    }
    return 0;
}