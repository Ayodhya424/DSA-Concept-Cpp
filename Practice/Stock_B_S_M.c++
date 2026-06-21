//-------------------------Stock Buy and Sell - Multiple Transaction Allowed -------------

// Given an array prices[] representing stock prices, find the maximum total profit that can be earned 
// by buying and selling the stock any number of times.

// Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on 
// any day.

// Examples:
// Input: prices[] = [100, 180, 260, 310, 40, 535, 695]
// Output: 865
// Explanation: Buy the stock on day 0 and sell it on day 3 = 310 - 100 = 210 and Buy the stock on day
//  4 and sell it on day 6 = 695 - 40 = 655 so the Maximum Profit  is = 210 + 655 = 865.


//----------------------------[Expected Approach] By Accumulating Profit - O(n) Time and O(1) Space
#include<iostream>
#include<vector>
using namespace std;
int StockBuySell(vector<int>arr)
{
    int n = arr.size();
    int profit =0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[i-1])
        {
            profit  += arr[i]-arr[i-1];
        }
    }
    return profit;
}
int main()
{
    vector<int> arr ={100, 180, 260, 310, 40, 535, 695};
   cout<<StockBuySell(arr)<<endl;
   return 0;
}

//Output: - 865

