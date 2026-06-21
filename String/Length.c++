// 1. Length of a String
#include<iostream>
#include<string>
using namespace std;
int isString(string s1)
{
  return s1.size();

}
int main()
{
    string s1 = "Ayodhya";
    int a = isString(s1);
    cout<<a<<endl;
    return 0;
}