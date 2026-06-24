//---------------------------------------problem statement--------------------------
// keep a list of scores, apply each operation step by step, and finally sum them up.
// Start with an empty record.
// If the operation is an integer x → add x as a new score.
// If it’s "+" → add the sum of the last two scores.
// If it’s "D" → add double the last score.
// If it’s "C" → remove the last score.
// At the end → return the total sum of all scores in the recor

//Approach: - stack

#include<iostream>
#include<vector>
using namespace std;
int totalscore(vector<string>&opr)
{
    vector<int> result;   // store score
    int sum =0;
    for(auto s: opr)
    {
        if(s == "+")
        {
            int n = result.size();
            result.push_back(result[n-1]+result[n-2]);
        }
        else if(s =="C")
        {
            result.pop_back();
        }
        else if(s =="D")
        {
            result.push_back(2*result.back());
        }
        else
        {
            result.push_back(stoi(s));
        }
    }
    for(auto num : result)
    {
        sum += num;
    }
    return sum;
}
int main()
{
    //vector<string>opr = {"5","2","C","D","+"};
    vector<string>opr = {"5","-2","4","C","D","9","+","+"};
    int ans= totalscore(opr);//store the returned sum
    cout<<ans<<endl;  // print ans
    return 0;
}
