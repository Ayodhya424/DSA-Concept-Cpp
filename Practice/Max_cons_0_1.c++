//------------------------------Maximum consecutive one’s (or zeros) in a binary array
// Given a binary array arr[] consisting of only 0s and 1s, find the length of the 
// longest contiguous sequence of either 1s or 0s in the array.

// Examples : 
// Input: arr[] = [0, 1, 0, 1, 1, 1, 1]
// Output: 4
// Explanation: The maximum number of consecutive 1’s in the array is 4 from index 3-6.

//[Approach - 1] Using Simple Traversal - O(n) Time and O(1) Space
// The idea is to traverse the array once and count how many times the same value repeats 
// consecutively. The thought process is to use a counter that increases when the current element
//  matches the previous one. If a change is detected, we update the maximum streak and reset the count.


#include<iostream>
#include<vector>
using namespace std;
int MaxConsecutive_0_1(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    int maxElement =0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] == arr[i-1])
        {
            count++;
        }
        else
        {
            maxElement = max(count, maxElement);
            count =1; //reset for new sequence
        }
    }
    return max(count, maxElement);
}
int main()
{
    vector<int> arr = { 1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1};
    int result = MaxConsecutive_0_1(arr);
    cout<<result;
    return 0;
}

//Output: - 7



//[Approach - 2] Using Bit Manipulation - O(n) Time and O(1) Space
//The idea is to use XOR (^) to check if consecutive elements are the same. As XOR of two numbers 
//is 0 if both numbers are same. So, If prev ^ num == 0, the sequence continues; else we update the 
//maximum streak and reset the count.

int maxConsecBits(vector<int> &arr) {

    int maxCount = 0, count = 0, prev = -1;

    for (int num : arr) {
        
        // If the current number is the 
        // same as the previous number
        if ((prev ^ num) == 0) {
            count++;
        } else {
            
            // Update maxCount and reset count
            maxCount = max(maxCount, count);
            count = 1;
        }
        prev = num;
    }

    return max(maxCount, count);
}
