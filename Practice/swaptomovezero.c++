// In one operation, you can choose any two distinct indices i and j 
// and swap nums[i] and nums[j].

// Return an integer denoting the minimum number of operations 
// required to move all 0s to the end of the array.
// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: 2

// Explanation:

// We perform the following swap operations:

// Swap nums[0] and nums[3], giving nums = [3, 1, 0, 0, 12].
// Swap nums[2] and nums[4], giving nums = [3, 1, 12, 0, 0].
// Thus, the answer is 2.

#include<iostream>
#include<vector>
using namespace std;
int minSwap(vector<int>arr)
{
    int n = arr.size();
    int count =0;
    int swap =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            count++;
        }
    }
    for(int i=0; i<count; i++)
    {
        if(arr[i] == 0)
        {
            swap++;   
        }
    }
    return swap;
}
int main()
{
    vector<int>arr ={0,3,0,4,5,0,7,8,9,0,4,0};
    cout<<minSwap(arr)<<endl;
    return 0;
}
