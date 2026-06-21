// On each day, you may decide to buy and/or sell the stock. 
// You can only hold at most one share of the stock at any time. 
// However, you can sell and buy the stock multiple times on the same day, 
// ensuring you never hold more than one share of the stock.

// Find and return the maximum profit you can achieve.


#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>arr)
{
    int n= arr.size();
    int profit =0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[i-1])
        {
            profit += arr[i]-arr[i-1];
        }
    }
    return profit;

}
int main()
{
    vector<int>arr={2,3,4,1,5,9,7,8};
    cout<<maxProfit(arr)<<endl;
    return 0;
}