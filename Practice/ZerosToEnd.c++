//-----------------------------------------Move all Zeros to End of Array ------------------------
// Given an array of integers arr[], move all the zeros to the end of the array while 
// maintaining the relative order of all non-zero elements.

// Examples: 
// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
// Explanation: There are three 0s that are moved to the end.

// Input: arr[] = [10, 20, 30]
// Output: [10, 20, 30]
// Explanation: No change in array as there are no 0s.

 

//--------------------[Better Approach] Two Traversals-O(n) Time and O(1) space
// //The idea is to move all the zeros to the end of the array while maintaining the relative order of 
// non-zero elements using two traversals. Traverse the array once to move all non-zero elements to the 
// front while maintaining order, then traverse the remaining positions and fill them with zeros.

#include<iostream>
#include<vector>
using namespace std;
vector<int> MoveZerosEnd(vector<int>arr)
{
    int count=0;
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while(count < n)
        {
            arr[count++] =0;
        }
    
    return arr;
}
int main()
{
    vector<int>arr = {23,0,45,89,0,0,0,2};
    vector<int> arr1 = MoveZerosEnd(arr);
    for(auto a: arr1)
    {
        cout<< a<<" ";
    }
    return 0;
}

//Output: - 23 45 89 2 0 0 0 0 



//--------------------------------[Expected Approach] One Traversal-O(n) Time and O(1) space---------
//The idea is similar to the previous approach where we took a pointer, say count to track 
//where the next non-zero element should be placed. However, on encountering a non-zero element, 
//instead of directly placing the non-zero element at arr[count], we will swap the non-zero element 
//with arr[count]. This will ensure that if there is any zero present at arr[count], it is pushed 
//towards the end of array and is not overwritten.


#include<iostream>
#include<vector>
using namespace std;
vector<int> MoveZerosEnd(vector<int>arr)
{
    int count=0;
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    return arr;
}
int main()
{
    vector<int>arr = {23,0,45,89,90,0,0,0,2};
    vector<int> arr1 = MoveZerosEnd(arr);
    for(auto a: arr1)
    {
        cout<< a<<" ";
    }
    return 0;
}

//Output: - 23 45 89 90 2 0 0 0 0   


