// //----------------------------Reverse an array arr[]--------------------------------- 

// //Reversing an array means rearranging the elements such that the first element becomes 
// //the last, the second element becomes second last and so on.

// // Examples:

// // Input: arr[] = [1, 4, 3, 2, 6, 5]  
// // Output:  [5, 6, 2, 3, 4, 1]
// // Explanation: The first element 1 moves to last position, 
// // the second element 4 moves to second-last and so on.


// //Approach:- 1---------------------Temporary Array-----------------------
#include<iostream>
#include<vector>
using namespace std;
int reverse(vector<int> &arr)
{
    int n = arr.size();
    vector<int>temp(n);
    for(int i=0; i<n; i++)
    {
        temp[i] = arr[n-i-1];
    }
    for(int i=0; i<n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    vector<int> arr={8,9,2,4,1,56,65};
    reverse(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Output: - 65 56 1 4 2 9 8 

// Time Complexity: O(n), Copying elements to a new array is a linear operation.
// Auxiliary Space: O(n), as we are using an extra array to store the reversed array.


//-------------[Expected Approach - 1] Using Two Pointers - O(n) Time and O(1) Space
#include<iostream>
#include<vector>
using namespace std;
int reverseArray(vector<int>&arr)
{
    int n = arr.size();
    int left =0;
    int right = n-1;
    while(left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
    vector<int>arr={2,38,34,54,8,90};
    reverseArray(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Output: - 90 8 54 34 38 2 




//---------------[Expected Approach - 2] Using Single Pointer - O(n) Time and O(1) Space

#include<iostream>
#include<vector>
using namespace std;
int reverseArray(vector<int>&arr)
{
    int n = arr.size();
    for(int i=0; i<n/2; i++)
    {
        swap(arr[i], arr[n-i-1]);
    }
}
int main()
{
    vector<int>arr={2,38,34,54,8,90};
    reverseArray(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

Output: -  90 8 54 34 38 2 