//-----------------------------[Better Approach] Using Hashing - O(n) Time and O(n) Space
// This approach uses a hash array (or frequency array) to track the presence of each number from 
// 1 to n in the input array. It first initializes a hash array to store the frequency of each element.
// Then, it iterates through the hash array to find the number that is missing (i.e., the one with a 
// frequency of 0).




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MissingElement(vector<int>arr)
{
    int n = arr.size();
    vector<int>hm(n+1,0);
        for(auto a: arr)
        {
            hm[a]++;
        }
        for(int i =1; i<=hm.size(); i++)
        {
            if(hm[i] == 0)
            {
                return i;
            }
        }
    return -1;
}
int main()
{
    vector<int> arr ={1,5,8,9,2,4,6,7};
    //vector<int> arr ={1,2,3,4,6,7,5,9};
   cout<<MissingElement(arr)<<endl;
   return 0;
}

//Output: - 3




//BruteForce Approach: - O(nlogn) Time and O(1) Space

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int MissingElement(vector<int>arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n; i++)
    {
        if(arr[i] != i+1)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr ={1,5,8,9,2,4,6,7};
    //vector<int> arr ={1,2,3,4,6,7,5,9};
   cout<<MissingElement(arr)<<endl;
   return 0;
}

//Output: - 3