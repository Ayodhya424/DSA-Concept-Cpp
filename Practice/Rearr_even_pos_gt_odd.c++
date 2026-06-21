//---------------------Rearrange array such that even positioned are greater than odd-------------
//---------------------[Approach 2] - Rearranging array by swapping elements
// Traverse the array once from left to right and compare each element with its previous one. 
// If a position is even (1-based) and the current element is smaller than the previous element, 
// swap them. If a position is odd (1-based) and the current element is greater than the previous 
// element, swap them. These local swaps ensure the array satisfies the given conditions in a single 
// pass without extra space.


#include<iostream>
#include<vector>
using namespace std;
vector<int> EvenGtOddEle(vector<int> arr)
{
    int n = arr.size();
    for(int i =1; i<n; i++)
    {
        if((i+1) % 2 ==0)
        {
            if(arr[i] < arr[i-1])
            {
                swap(arr[i], arr[i-1]);
            }
        }
        else
        {
            if(arr[i] > arr[i-1])
            {
                swap(arr[i], arr[i-1]);
            }
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {12,10,24,35,90,9,8};
    vector<int> arr1  =EvenGtOddEle(arr);
    for(auto arr1: arr)
    {
        cout<<arr1<<" ";
    }
    return 0;
}