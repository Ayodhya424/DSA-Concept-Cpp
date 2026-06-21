// Given an integer array arr[] and k. Find the k'th smallest element in the given array.
// Note: k is always smaller than the size of the array.

// Examples:

// Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
// Output: 5


#include<iostream>
#include<queue>
using namespace std;

int KlargHeap(vector<int> arr, int k)
{
    int n = arr.size();
    priority_queue<int>Ay;
    for(int i =0; i<n; i++)
    {
        Ay.push(arr[i]);
    }
    if(k < Ay.size())
    {
        Ay.pop();
    }
    return Ay.top();
}
int main()
{
    vector<int>arr ={2,3,4,8,5,9,10};
    int k = 2;
    cout<<KlargHeap(arr,k);
    return 0;

}
