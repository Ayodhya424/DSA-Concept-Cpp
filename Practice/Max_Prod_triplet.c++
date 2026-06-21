// ---------------------------Maximum product of a triplet (subsequence of size 3) in array----------

// Given an integer array, find a maximum product of a triplet in the array.
// Examples: 
// Input:  arr[ ] = [10, 3, 5, 6, 20]
// Output: 1200
// Explanation: Multiplication of 10, 6 and 20

// Input:  arr[ ] =  [-10, -3, -5, -6, -20]
// Output: -90

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int MaxProductThree(vector<int>&arr)
{
    int n = arr.size();
    int maxProduct = INT_MIN;
    for(int i =0;i<n-2; i++)
    {
        for(int j =i+1; j<n-1; j++)
        {
            for(int k =j+1; k<n; k++)
            {
                maxProduct = max(maxProduct,arr[i]*arr[j]*arr[k]);
            }
        }
    }
    return maxProduct;
}
int main()
{
    vector<int>arr={-5,-4,23,56,4,8,9,10};   // Output: - 12880
    //vector<int>arr= {10, 3, 5, 6, 20};       // Output: - 1200
    //vector<int>arr= {-10, -3, -5, -6, -20};    // Output: - -90
    int result = MaxProductThree(arr);
    cout<<result;
    return 0;
}





//-------------------------[Expected Approach] By Using Greedy approach - Time O(n) and Space O(1)

// 1. Scan the array and compute the Maximum, second maximum and third maximum element present in the array.
// 2. Scan the array and compute Minimum and second minimum element present in the array.
// 3. Return the maximum of product of Maximum, second maximum and third maximum and product of Minimum, 
// second minimum and Maximum element.




#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int MaxProductThree(vector<int>&arr)
{
    int n = arr.size();
    int MinA = INT_MAX;
    int MinB = INT_MAX;
    int MaxA = INT_MIN;
    int MaxB = INT_MIN;
    int MaxC = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > MaxA)
        {
            MaxC = MaxB;
            MaxB = MaxA;
            MaxA = arr[i];
        }
        else if(arr[i] > MaxB)
        {
            MaxC =MaxB;
            MaxB = arr[i];
        }
        else if(arr[i] > MaxC)
        {
            MaxC = arr[i];
        }
        if(arr[i] < MinA)
        {
            MinB =MinA;
            MinA = arr[i];
        }
        else if(arr[i] < MinB)
        {
            MinB = arr[i];
        }
    }
    return max(MinA*MinB*MaxA, MaxA*MaxB*MaxC);
}
int main()
{
    vector<int> arr = {-5,-4,23,56,4,8,9,10};
    int result = MaxProductThree(arr);
    cout<<result<<" ";
    return 0;
}

