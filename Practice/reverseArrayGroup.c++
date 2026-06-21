//---------------------------------Reverse an Array in groups
//Given an array arr[] and an integer k, find the array after reversing every subarray 
//of consecutive k elements in place. If the last subarray has fewer than k elements, 
//reverse it as it is. Modify the array in place, do not return anything.

// Examples: 
// Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8], k = 3 
// Output: [3, 2, 1, 6, 5, 4, 8, 7]
// Explanation: Elements is reversed: [1, 2, 3] → [3, 2, 1], [4, 5, 6] → [6, 5, 4], 
// and the last group [7, 8](size < 3) is reversed as [8, 7]. 

#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseGroupelem(vector<int>&arr , int k)
{
    int n = arr.size();
    for(int i=0; i<n; i+=k)
    {
        int left =i; 
        int right = min(i+k-1, n-1);
        while(left < right)
        {
            swap(arr[left++], arr[right--]);
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {3,4,5,9,8,0,90,45,89};
    int k =3;
    reverseGroupelem(arr,k);
    for(auto a: arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}

//Output: -  5 4 3 0 8 9 89 45 90 
//Fixed-Size Group Reversal–Time O(n) and Space O(1)
