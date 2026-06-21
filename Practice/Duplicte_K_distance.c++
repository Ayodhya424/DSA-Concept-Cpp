// //----------------------------------------Duplicate within K Distance in an Array------------------

// Given an integer array arr[] and an integer k, determine whether there exist two indices 
// i and j such that arr[i] == arr[j] and |i - j| ≤ k. If such a pair exists, return 'Yes', 
// otherwise return 'No'.

// Examples: 

// Input: k = 3, arr[] = [1, 2, 3, 4, 1, 2, 3, 4]
// Output: No
// Explanation: Each element in the given array arr[] appears twice and the distance between every 
// element and its duplicate is 4.

//-----------------------1. [Naive Approach] - O(n * k) Time and O(1) Space------------------
// The idea is to run two loops. The outer loop picks every index i as a starting index, and the 
// inner loop compares all elements which are within k distance of i, i.e. i + k.


#include<iostream>
#include<vector>
using namespace std;
bool DuplicateKDistance(vector<int>arr, int k)
{
    int n = arr.size();
    for(int i =0; i<n; i++)
    {
        for(int j =i+1;j<=i+k && j<n; j++)
        {
            if(arr[i] == arr[j])
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int>arr = {2,4,5,6,8,9,0,8};
    int k=2;
    if(DuplicateKDistance(arr,k))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

//Output: - for k = 2 NO
//Output: - for k = 3 YES



//-------------------------------2. [Expected Approach] - Using HashSet - O(n) Time and O(k) Space----
// The idea is to use HashSet to store elements of the array arr[] and check if there is any duplicate 
// present within a k distance. Also remove elements that are present at more than k distance from the 
// current element. Following is a detailed algorithm.

// 1. Create an empty HashSet. 
// 2. Traverse all elements from left to right. Let the current element be 'arr[i]' 
// ->If the current element 'arr[i]' is present in a HashSet, then return true. 
// ->Else add arr[i] to hash and remove arr[i-k] from hash if i >= k