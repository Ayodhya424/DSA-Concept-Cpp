// -----------------Find second largest distinct element in the array.

//Note: If the second largest element does not exist, return -1.

// Examples:
// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int SecondLargest(vector<int>arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i= n-2; i >= 0; i--)
    {
        if(arr[i] < arr[n-1])
        {
            return arr[i];
        }
    }
}
int main()
{
    vector<int> arr = {2,43,23,21,90,48,9,4,90,48};
    cout<<SecondLargest(arr)<<" ";
    return 0;
}

// Output:-
// 48


// --Time Complexity: O(n*log(n)), as sorting the array takes O(n*log(n)) time and traversing the 
// array can take O(n) time in the worst case, so total time complexity = (n*log(n) + n) = O(n*log(n)).

// --Auxiliary space: O(1), as no extra space is required



//------------------------------[Expected Approach] One Pass Search---------------------------------------------------

// The idea is to keep track of the largest and second largest element while traversing the array. 
// Initialize largest and secondLargest with -1. Now, for any index i,

// If arr[i] > largest, update secondLargest with largest and largest with arr[i].
// Else If arr[i] < largest and arr[i] > secondLargest, update secondLargest with arr[i]. 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int SecondLargest(vector<int>arr)
{
    int n = arr.size();
    int largest = -1;
    int Secondlargest = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            Secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > Secondlargest)
        {
            Secondlargest = arr[i];
        }
    }
    return Secondlargest;
}
int main()
{
    vector<int> arr = {2,43,23,21,9,4,90,48,767};
    cout<<SecondLargest(arr)<<" ";
    return 0;
}

Output: - 
90

Time Complexity: O(n), as we are traversing the array only once.
Auxiliary space: O(1)