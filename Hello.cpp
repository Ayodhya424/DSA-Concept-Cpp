// // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // int main()
// // // // // // // // // // // // {
// // // // // // // // // // // //     int arr[]={3,6,7,4,6,5,4,6,5,4};
// // // // // // // // // // // //     int n = sizeof(arr)/sizeof(arr[0]);
// // // // // // // // // // // //     for(int i = 0 ; i<n; i++) // also while and for each loop can be used
// // // // // // // // // // // //     {
// // // // // // // // // // // //         cout<<arr[i]<<" ";
       
// // // // // // // // // // // //     }
// // // // // // // // // // // //      return 0;
// // // // // // // // // // // // }

// // // // // // // // // // // #include<iostream>
// // // // // // // // // // // using namespace std;
// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //      int arr[10]={3,6,7,4,6,5,4,6,5,4};
// // // // // // // // // // //     int n = sizeof(arr)/sizeof(arr[0]);
// // // // // // // // // // //     for(int i = n-1 ; i >= 0; i--) // also while and for each loop can be used
// // // // // // // // // // //     {
// // // // // // // // // // //         cout<<arr[i]<<" ";
// // // // // // // // // // //     }
// // // // // // // // // // //     return 0;

// // // // // // // // // // // }


// // // // // // // // // // #include<iostream>
// // // // // // // // // // using namespace std;
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     int arr[] = {23,45,65,4,63,464,8};
// // // // // // // // // //     int target = 8;
// // // // // // // // // //     int n = sizeof(arr)/sizeof(arr[0]);
// // // // // // // // // //     for(int i =0; i<n; i++)
// // // // // // // // // //     {
// // // // // // // // // //         if(arr[i]== target)
// // // // // // // // // //         {
// // // // // // // // // //             cout<<"target element found at index : "<<i<<endl;
// // // // // // // // // //         }
// // // // // // // // // //     }
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int arr[] = {23,45,65,4,63,464,8};
// // // // // // // // //     int n = sizeof(arr)/sizeof(arr[0]);
// // // // // // // // //     arr[6] = 34;
// // // // // // // // //     for(int i =0; i<n; i++)
// // // // // // // // //     {
// // // // // // // // //        arr[i] +=2;
// // // // // // // // //     }
// // // // // // // // //   for(int i =0; i<n; i++)
// // // // // // // // //   {
// // // // // // // // //       cout<<arr[i]<<" ";
// // // // // // // // //   }
// // // // // // // // //     return 0;
// // // // // // // // // }




// // // // // // // // #include<vector>
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     vector<int> arr ={23,56,87,54,34,90};
// // // // // // // //     int element = 27;
// // // // // // // //     arr.insert(arr.begin(), element);
// // // // // // // //     for(int i =0; i<arr.size(); i++)
// // // // // // // //     {
// // // // // // // //         cout<<arr[i]<<" ";
// // // // // // // //     }
// // // // // // // //     return 0;
// // // // // // // // }


// // // // // // // #include<iostream>
// // // // // // // #include<vector>
// // // // // // // using namespace std;
// // // // // // // int main()
// // // // // // // {
// // // // // // //     vector<int> arr = {23,45,67,87,90,78};
// // // // // // //     int n = arr.size();
// // // // // // //     int element = 27;
// // // // // // //     for(int i = n-1 ; i >= 0; i--)
// // // // // // //     {
// // // // // // //         arr[i+1] = arr[i];
// // // // // // //     }
// // // // // // //     arr[0] =element;
// // // // // // //     for(int i = 0; i<= n; i++)
// // // // // // //     {
// // // // // // //         cout<<arr[i]<<" ";
// // // // // // //     }
// // // // // // //     return 0;
// // // // // // // }






// // // // // // // Insert Element at a Given Position in an Array
// // // // // // #include<iostream>
// // // // // // #include<vector>
// // // // // // using namespace std;
// // // // // // int main()
// // // // // // {
// // // // // //     vector<int> arr ={23,45,65,43,65,36};
// // // // // //     int element = 255;
// // // // // //     int position = 3;
// // // // // //     int n = arr.size();
// // // // // //     arr.insert(arr.begin() +position -1,element);
// // // // // //     for(int i = 0; i<n; i++)
// // // // // //     {
// // // // // //         cout<<arr[i]<<" ";
// // // // // //     }
// // // // // //     return 0;
// // // // // // }


// // // // // // output: - 23 45 255 65 43 65 

// // // // // #include<iostream>
// // // // // #include<vector>
// // // // // using namespace std;
// // // // // int main()
// // // // // {
// // // // //     vector<int> arr = {3,5,6,7,8,9};
// // // // //     int element = 4;
// // // // //     int position = 2;
// // // // //     int n = arr.size();
// // // // //     for(int i = n; i >= position; i--)
// // // // //     {
// // // // //         arr[i] = arr[i-1];
// // // // //     }
// // // // //     arr[position-1] = element;
// // // // //     for(int i = 0; i<= n; i++)
// // // // //     {
// // // // //             cout<<arr[i]<<" ";
// // // // //     }
// // // // //     return 0;
// // // // // }




// // // // //Add element at the end of array

// // // // //using built- in method
// // // // #include<iostream>
// // // // #include<vector>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     vector<int> arr = {3,4,6,7,8,9};
// // // //     int ele = 50;
// // // //     int n = arr.size();
// // // //     arr.push_back(ele);
// // // //     for(int i =0; i<=n; i++)
// // // //     {
// // // //         cout<<arr[i]<<" ";
// // // //     }
// // // //     return 0;
// // // // }



// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;
// // // int main()
// // // {
// // //     vector<int> arr = {3,4,6,7,8,9};
// // //     int ele = 50;
// // //     int n = arr.size();
// // //     arr[n] = ele;
// // //     for(int i =0; i<=n; i++)
// // //     {
// // //         cout<<arr[i]<<" ";
// // //     }
// // //     return 0;
// // // }



// // #include<iostream>
// // #include<vector>
// // #include<algorithm>
// // using namespace std;
// // int main()
// // {
// //     vector<int> arr ={ 4,-3,5,0,-1,2,-6};
// //     int  n = arr.size();
// //     sort(arr.begin(), arr.end());
// //     for(int i = 0; i<n; i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }
// //     return 0;

// // }



// //Printing alternate element of an array
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> AltElement(vector<int> arr)
// {
//     vector<int>res;
//     int n = arr.size();
//     for(int i =0 ; i<n; i++)
//     {
//         if(i % 2 == 0)
//         {
//             res.push_back(arr[i]);
//         }
//     }
//     return res;
// }

// int main()
// {
//     vector<int> arr = {2,3,4,5,6,7,8,9};
//     vector<int>res = AltElement(arr);
//     for(auto a : res)
//     {
//         cout<<a<<" ";
//     }
//     return 0;
// }



//Leader element problem: element must be greater than or equals to right side all element
// //1. Using naive approach i.e O(n^2) Time and O(1) Space: using nested loop
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> LeaderEle(vector<int> arr)
// {
//     vector<int>res;
//     int n = arr.size();
//     for(int i =0; i<n; i++)
//     {
//         bool leader = true;
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i] < arr[j])
//             {
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader)
//             {
//                 res.push_back(arr[i]);
//             }
//     }
//     return res;
// }
// int main()
// {
//     vector<int> arr = { 28,5,6,7,55,43,656,5};
//     vector<int>res = LeaderEle(arr);
//     for(auto a: res)
//     {
//         cout<<a<<" ";
//     }
//     return 0;
// }



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
