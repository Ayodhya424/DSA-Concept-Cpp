//---------------------------------------Sum of all Subarrays------------------------------------

//Given an integer array arr[], compute the sum of all possible sub-arrays of the array. 
//A sub-array is a contiguous part of the array.

// Examples: 
// Input: arr[] = [1, 4, 5, 3, 2]
// Output: 116
// Explanation: Sum of all possible subarrays of the array [1, 4, 5, 3, 2] is 116.


//--------------------------[Naive Approach] Using Nested Loop - O(n2) Time and O(1) Space
//The main idea of this approach is to iterate over all possible subarrays of the given array using 
//two nested loops. The outer loop selects the starting index of the subarray, while the inner loop 
//extends the subarray to include all possible ending points. During this process, a running sum 
//(temp) is maintained for each subarray and added to the total result. 

#include<iostream>
#include<vector>
using namespace std;
int SumOfAllSubArray(vector<int>arr)
{
    int n = arr.size();
    int result =0;
    for(int i=0; i<n; i++)
    {
        int sum =0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
            result +=sum;
        }
    }
    return result;
}
int main()
{
    vector<int> arr ={1,4,5,3,2};
   cout<<SumOfAllSubArray(arr)<<endl;
   return 0;
}

//Output: - 116




//---------------------2.--[Expected Approach] Element Contribution Method - O(n) Time and O(1) Space
//Step by step Implementation:

// Declare an integer answer equal to zero
// Run a for loop for i from [0, n-1]: Add arr[i] * (i+1) * (n-i) into the answer at each iteration
// Return answer


#include<iostream>
#include<vector>
using namespace std;
int SumOfAllSubArray(vector<int>arr)
{
    int n = arr.size();
    int result =0;
    for(int i=0; i<n; i++)
    {
        result += (arr[i]*(i+1)*(n-i));
    }
    return result;
}
int main()
{
    vector<int> arr ={1,4,5,3,2};
   cout<<SumOfAllSubArray(arr)<<endl;
   return 0;
}

//Output: - 116
