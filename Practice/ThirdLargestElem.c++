// Task is to find the third largest element.

// Examples : 
// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3
// Explanation: The third largest element in the array [2, 4, 1, 3, 5] is 3.

//-----[Expected Approach - 2] Using Single Loop - O(n) Time and O(1) Space -----------

//The idea is to traverse the array from start to end and to keep track of the three largest elements up to that index (stored in variables). So after traversing the whole array, the variables would have stored the indices (or value) of the three largest elements of the array.

//---------------------Step by step approach: 

// 1. Create three variables, first, second, third, to store indices of three largest elements of the array. (Initially all of them are initialized to a minimum value).
// 2. Move along the input array from start to the end.
// 3. For every index check if the element is larger than first or not. Update the value of first, if the element is larger, and assign the value of first to second and second to third. So the largest element gets updated and the elements previously stored as largest becomes second largest, and the second largest element becomes third largest.
// 4. Else if the element is larger than the second, then update the value of second, and the second largest element becomes third largest.
// 5. If the previous two conditions fail, but the element is larger than the third, then update the third.


#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int thirdlarge(vector<int>arr)
{
    int n= arr.size();
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    if(n <3) return 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }
    return third;
}
int main()
{
    vector<int> arr ={8,45,32,54,32,54,90,96,100,90};
    cout<<thirdlarge(arr)<<endl;
    return 0;
}


Output: - 
90