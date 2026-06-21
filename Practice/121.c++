//Best time to buy and sell a stock single buy allow and multiple day sell allow once to make more 
//profit

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
//vector<int> maxProfit(vector<int>arr)  wrong function type mismatch
int maxProfit(vector<int>arr)
{
    int n = arr.size();
    int minprice =INT_MAX;
    int maxprofit =0;
    for(auto a: arr)
    {
        if( a < minprice)
        {
            minprice = a;
        }
        int curr_profit = a-minprice;
        if(curr_profit > maxprofit)
        {
            maxprofit = curr_profit;
        }
    }
    return maxprofit;
}
int main()
{
    vector<int> arr ={34,1,5,6,8,9,11};
   // vector<int> b=maxProfit(arr);
    cout<<maxProfit(arr)<<endl;
    return 0;
}