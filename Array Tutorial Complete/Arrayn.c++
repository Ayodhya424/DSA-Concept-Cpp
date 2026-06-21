// Declaration a array
int arr[5];
char arr[10];
float arr[3];


// fixed size-initialization of the array
int arr[5]={3,6,7,8,9};
int arr[]={34,654,34,3,65,34};
char arr[5]={'a','e','i','o','u'};


//Dynamic size array initialization
#include<vector>
vector<int>v;


//Types of array based on the dimensions
1. 1-D array: - An array having only one row, where element are stored one after another.
2. Multi-dimensional array: - An array having more than one dimensions and store complex data in the form of tables.

//Problem: - 1
//Traversal in array: - Process of accessing each element of the array sequentially and performing operation like searching,
//modifying and sorting.
1. Linear traversal: - Process of visiting each element of an array sequentially, starting from the first element and moving to the 
last element. 

Code: - 
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={3,6,7,4,6,5,4,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n; i++) // also while and for each loop can be used
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

output: - 3 6 7 4 6 5 4 6 5 4

Time complexity: -O(n)
Space complexity: -O(1)

//Problem: - 2
2. Reverse traversal: - Process of visiting each element of the array starting from the last and moving towards the first.
code: - 
#include<iostream>
using namespace std;
int main()
{
     int arr[10]={3,6,7,4,6,5,4,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = n-1 ; i >= 0; i--) // also while and for each loop can be used
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

output: - 4 5 6 4 5 6 4 7 6 3 

Time complexity: -O(n)
Space complexity: -O(1)

//Problem: - 3
Application of Array Traversal
1. Searching element: Search an element in an array by visiting each element of the array sequentially and comparing the each
element with the target value to determine if it exists or not.

code: - 

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {23,45,65,4,63,464,8};
    int target = 8;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n; i++)
    {
        if(arr[i]== target)
        {
            cout<<"target element found at index : "<<i<<endl;
        }
    }
    return 0;
}

output: - target element found at index : 6

Time complexity: -O(n)
Space complexity: -O(1)


//Problem: - 4
2. Modifying the element: - modifying the element means changing the array 
size or or updating the array element.
Code: - 



#include<iostream>
using namespace std;
int main()
{
    int arr[] = {23,45,65,4,63,464,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    arr[6] = 34;
    for(int i =0; i<n; i++)
    {
       arr[i] +=2;
    }
  for(int i =0; i<n; i++)
  {
      cout<<arr[i]<<" ";
  }
    return 0;
}

Output: - 25 47 67 6 65 466 36 

Time complexity: -O(n)
Space complexity: -O(1)


//Problem: - 5
//Insert Element at the Beginning of an Array
1. Using Built-in methods
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> arr ={23,56,87,54,34,90};
    int element = 27;
    arr.insert(arr.begin(), element);
    for(int i =0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

Output: - 27 23 56 87 54 34 90 

Time Complexity: O(n), where n is the size of the array.



2. method: - Using custom method: - To insert an element at the beginning of an array, first shift 
all the elements of the array to the right by 1 index and after shifting insert the new element at 0th position.

#include<iostream>
using namespace std;
int main()
{
    vector<int> arr = {23,45,67,87,90,78};
    int n = arr.size();
    int element = 27;
    for(int i = n-1 ; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] =element;
    for(int i = 0; i<= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

Output: - 27 23 45 67 87 90 78 
Time Complexity: O(n), where n is the size of the array.



//Problem: - 6
//Insert Element at a Given Position in an Array
1. Method: - Using Built- in method

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr ={23,45,65,43,65,36};
    int element = 255;
    int position = 3;
    int n = arr.size();
    arr.insert(arr.begin() +position -1,element);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


output: - 23 45 255 65 43 65 

Time Complexity: O(n), where n is the size of the array.


2.Custom method


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {3,5,6,7,8,9};
    int element = 4;
    int position = 2;
    int n = arr.size();
    for(int i = n; i >= position; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position-1] = element;
    for(int i = 0; i<= n; i++)
    {
            cout<<arr[i]<<" ";
    }
    return 0;
}

Output: - 3 4 5 6 7 8 9 

Time Complexity: O(n), where n is the size of the array.




//Problem: - 7
//Insert Element at the End of an Array


//Add element at the end of array
//using built- in method
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {3,4,6,7,8,9};
    int ele = 50;
    int n = arr.size();
    arr.push_back(ele);
    for(int i =0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


2. Using custom method
 
Code: - 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {3,4,6,7,8,9};
    int ele = 50;
    int n = arr.size();
    arr[n] = ele;
    for(int i =0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

Output: - 3 4 6 7 8 9 50 
Time Complexity: O(n), where n is the size of the array.





//Problem: - 8
//Printing alternate element of an array starting from the first
#include<iostream>
#include<vector>
using namespace std;
vector<int> AltElement(vector<int> arr)
{
    vector<int>res;
    int n = arr.size();
    for(int i =0 ; i<n; i++)
    {
        if(i % 2 == 0)
        {
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {2,3,4,5,6,7,8,9};
    vector<int>res = AltElement(arr);
    for(auto a : res)
    {
        cout<<a<<" ";
    }
    return 0;
}

Time Complexity: O(n), where n is the size of the array.
Space Complexity: O(1)


//Problem: - 9
//Printing Leader element in an Array. An element is a  leader if it is greater than 
//or equals to all the elements to its right side
//1. Using naive approach i.e O(n^2) Time and O(1) Space: using nested loop
#include<iostream>
#include<vector>
using namespace std;
vector<int> LeaderEle(vector<int> arr)
{
    vector<int>res;
    int n = arr.size();
    for(int i =0; i<n; i++)
    {
        bool leader = true;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                leader = false;
                break;
            }
        }
        if(leader)
            {
                res.push_back(arr[i]);
            }
    }
    return res;
}
int main()
{
    vector<int> arr = { 28,5,6,7,55,43,656,5};
    vector<int>res = LeaderEle(arr);
    for(auto a: res)
    {
        cout<<a<<" ";
    }
    return 0;
}

Output: -  656 5 


//2 Method: - Right to left Traversal Time complexity O(n)


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> LeaderTra(vector<int> arr)
{
    vector<int>res;
    int n = arr.size();
    int maxright = arr[n-1];
    res.push_back(maxright);
    for(int i =n-2; i >= 0; i--)
    {
        if(arr[i] >= maxright)
        {
            maxright = arr[i];
            res.push_back(maxright);
        }
    }
    reverse(arr.begin(), arr.end());
    return res;
}
int main()
{
    //vector<int> arr = {54,78,45,34,677,45,54};
    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int>res = LeaderTra(arr);
    for(auto a: res)
    {
        cout<<a<<" ";
    }
    return 0;
}

output: - 2 5 17 



//Problem: - 10
// remove the duplicate element form the sorted array
#include<iostream>
#include<vector>
using namespace std;
vector<int> removedup(vector<int>arr)
{
    int n = arr.size();
    vector<int>res;
    for(int i =0; i<n; i++)
    {
        if(arr[i]  != arr[i-1])
        {
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {2,3,4,4,7,8,9,9,56,56,78};
    vector<int> a= removedup(arr);
   for(auto x: a)
   {
    cout<<x<<" ";
   }
   return 0;
}

// output: - 2 3 4 7 8 9 56 78 
//Expected Approach - O(n) Time and O(1) Space




//Problem: - 11
//Given an array arr[], the task is to generate all the possible subarrays of the given array.

#include<iostream>
#include<vector>
using namespace std;

vector<int>subarray(vector<int>arr)
{
    int n = arr.size();
    for(int i =0; i<n; i++)
    {
        for(int j =i; j<n; j++)
        {
            for(int k =i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
                //return arr[k];
            }
            cout<<endl;
        }
    }
}
int main()
{
    vector<int> arr={1,2,3,4};
    vector<int>a = subarray(arr);
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    return 0;
}

// output: - 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 2 
// 2 3 
// 2 3 4 
// 3 
// 3 4 
// 4 
////Expected Approach - O(n3) Time and O(1) Space




//Problem: - 12
//Reverse an array arr[]. Reversing an array means rearranging the elements such that the 
//first element becomes the last, the second element becomes second last and so on.

#include<iostream>
#include<vector>
using namespace std;
vector<int> revarray(vector<int>arr)
{
    int n = arr.size();
    int left =0;
    int right = n-1;
    while(left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    return arr;
}
int main()
{
    vector<int> arr={9,8,7,6,5,4,5,6};
    vector<int> a = revarray(arr);
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    return 0;
}

// output: -  6 5 4 5 6 7 8 9 
//[Expected Approach - 1] Using Two Pointers - O(n) Time and O(1) Space


//Problem: - 13
//Rotate an Array - Clockwise or Right
// Rotations in the array is defined as the process of rearranging the elements 
// in an array by shifting each element to a new position. This is mostly done by 
// rotating the elements of the array clockwise or counterclockwise.

// There are two types of rotation.
1.  Right Rotation (or Clockwise) --The array elements are shifted towards the right.
Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
Output: {5, 6, 1, 2, 3, 4}

rotate one by one

#include<iostream>
#include<vector>
using namespace std;
vector<int> rightRotate(vector<int>arr, int d)
{
    int n = arr.size();
    for(int i = 0; i<d; i++)
    { 
        int last = arr[n-1];
        for(int j = n-1; j > 0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] =last;
    }
    return arr;
}
int main()
{
    vector<int> arr = {2,3,4,6,7,9,43};
    int d = 3;
    vector<int>a = rightRotate(arr,d);
    for(auto b:a)
    {
        cout<<b<<" ";
    }
    return 0;
}

output: - 7 9 43 2 3 4 6 
Time Complexity: O(n * d)
Auxiliary Space: O(1)

// Left Rotation (Anti-Clockwise) --The array elements are shifted towards the left. onr by onr
#include<iostream>
#include<vector>
using namespace std;
vector<int> rightRotate(vector<int>arr, int d)
{
    int n = arr.size();
    d %=n;
    for(int i = 0; i<d; i++)
    { 
        int first = arr[0];
        for(int j = 0; j <n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] =first;
    }
    return arr;
}
int main()
{
    vector<int> arr = {2,3,4,6,7,9,43};
    int d = 3;
    vector<int>a = rightRotate(arr,d);
    for(auto b:a)
    {
        cout<<b<<" ";
    }
    return 0;
}

// output: - 7 9 43 2 3 4 6 
// Time Complexity: O(n * d)
// Auxiliary Space: O(1)



//Problem: - 14
//Move all Zeros to End of Array
Given an array of integers arr[], 
move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.
Examples: 

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.

#include<iostream>
#include<vector>
using namespace std;
vector<int> moveZeros(vector<int>arr)
{
    int n = arr.size();
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while(count < n)
    {
        arr[count++]=0;
    }
    return arr;
}
int main()
{
    vector<int> arr = {1,2,0,4,3,0,5,0};
    vector<int> a = moveZeros(arr);
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    return 0;
}

//1 2 4 3 5 0 0 0 
[Better Approach] Two Traversals-O(n) Time and O(1) space

// The idea is to move all the zeros to the end of the array while maintaining the relative order 
// of non-zero elements using two traversals. Traverse the array once to move all 
// non-zero elements to the front while maintaining order, then traverse the 
// remaining positions and fill them with zeros.


// // 2. method [Expected Approach] One Traversal-O(n) Time and O(1) space
// The idea is similar to the previous approach where we took a pointer, say count to 
// track where the next non-zero element should be placed. However, on encountering a non-zero 
// element, instead of directly placing the non-zero element at arr[count], we will swap the 
// non-zero element with arr[count]. This will ensure that if there is any zero present 
// at arr[count], it is pushed towards the end of array and is not overwritten.

#include<iostream>
#include<vector>
using namespace std;
vector<int> moveZeros(vector<int>arr)
{
    int n = arr.size();
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {1,2,0,4,3,0,5,0};
    vector<int> a = moveZeros(arr);
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    return 0;
}

//1 2 4 3 5 0 0 0 


//[Expected Approach- 2] One Traversal-O(n) Time and O(1) space
#include<iostream>
#include<vector>
using namespace std;
vector<int> MoveZeros(vector<int>arr)
{
    int n = arr.size();
    int count = 0;
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
 vector<int> arr = {1,2,0,4,3,0,5,0};
    vector<int> a = MoveZeros(arr);
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    return 0;
}

//1 2 4 3 5 0 0 0 



//Problem: - 15
//Duplicate within K Distance in an Array
Given an integer array arr[] and an integer k, determine whether there exist two indices 
i and j such that arr[i] == arr[j] and |i - j| ≤ k. If such a pair exists, return 'Yes', 
otherwise return 'No'.
Examples: 
Input: k = 3, arr[] = [1, 2, 3, 4, 1, 2, 3, 4]
Output: No
Explanation: Each element in the given array arr[] appears twice and the distance between 
every element and its duplicate is 4.

//Method 1: [Naive Approach] - O(n * k) Time and O(1) Space
The idea is to run two loops. The outer loop picks every index i as a starting index, 
and the inner loop compares all elements which are within k distance of i, i.e. i + k.

#include<iostream>
#include<vector>
using namespace std;
bool Kdistance(vector<int>arr, int k)
{
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<i+k && j<n; j++)
        {
            if(arr[i] == arr[j])
            return true;
        }
    }
    return false;

}
int main()
{
    vector<int> arr =  {10, 5, 3, 4, 3, 5, 6};
   // vector<int> arr =  {1,2,3,4,1,2,3,4};
    int k = 3;
   // cout<<boolalpha<<Kdistance(arr,k); // return true or false
   if(Kdistance(arr,k))
   {
    cout<<"Yes";
   }
   else
   {
    cout<<"No";
   }
    return 0;
}
//Yes
//[Naive Approach] - O(n * k) Time and O(1) Space


method: 2
[Expected Approach] - Using HashSet - O(n) Time and O(k) Space
The idea is to use HashSet to store elements of the array arr[] and check if there is 
any duplicate present within a k distance. Also remove elements that are present at 
more than k distance from the current element. Following is a detailed algorithm.

Create an empty HashSet. 
Traverse all elements from left to right. Let the current element be 'arr[i]' 
If the current element 'arr[i]' is present in a HashSet, then return true. 
Else add arr[i] to hash and remove arr[i-k] from hash if i >= k


