//-----------------------------Rotate an Array by d - Counterclockwise or Left -- one by one element rotate
// Given an array of integers arr[] of size n, the task is to rotate the array 
//elements to the left by d positions.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5, 6], d = 2
// Output: [3, 4, 5, 6, 1, 2]
// Explanation: After first left rotation, arr[] becomes [2, 3, 4, 5, 6, 1] and 
// after the second rotation, arr[] becomes [3, 4, 5, 6, 1, 2]


// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> RotateArrayLeftbyD(vector<int> &arr, int d)
// {
//     int n = arr.size();
//     for(int i=0; i<d; i++)
//     {
//         int first = arr[0];
//         for(int j =0; j<n-1; j++)
//         {
//             arr[j] = arr[j+1];
//         }
//         arr[n-1] = first;
//     }
//     return arr;
// }
// int main()
// {
//     vector<int> arr={23,54,8,9,6,3,2,10};
//     int d =2;
//     RotateArrayLeftbyD(arr,d);
//     for(auto a: arr)
//     {
//         cout<<a<<" ";
//     }
//     return 0;
// }


// Output: -  8 9 6 3 2 10 23 54 
// [Naive Approach] Rotate One by One - O(n * d) Time and O(1) Space


//----------------------------[Better Approach] Using Temporary Array - O(n) Time and O(n) Space
//The idea is to use a temporary array of size n, where n is the length of the original array. 
//If we left rotate the array by d positions, the last n - d elements will be at the front and the 
//first d elements will be at the end.

// Copy the last (n - d) elements of original array into the first n - d positions of temporary array.
// Then copy the first d elements of the original array to the end of temporary array. 
// Finally, copy all the elements of temporary array back into the original array.



#include<iostream>
#include<vector>
using namespace std;
vector<int> RotataArray(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;//    // Handle case when d > n , no need to return k times
    vector<int>temp(n);
    for(int i=0; i <n-k; i++)
    {
        temp[i]=arr[k+i];
    }
    for(int i =0; i<k; i++)
    {
        temp[n-k+i] = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        arr[i] = temp[i];
    }
    return arr;
}
int main()
{
    vector<int> arr ={2,5,7,9,10,88,44,33};
    int k =30;
    RotataArray(arr,k);
    for(auto a: arr)
    {
        cout<<a<<" ";
    }
    return 0;
}

//Output: -  9 10 88 44 33 2 5 7 
