#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>Ay;
    Ay.push(12);
    Ay.push(14);
    Ay.push(8);
    Ay.push(6);
    Ay.push(60);
    Ay.push(67);
    Ay.push(64);
    //cout<<"Top most element"<<Ay.pop();
    cout<<"Front element : "<<Ay.front()<<endl;
    cout<<"Back  element : "<<Ay.back()<<endl;
   // cout<<"Front element : "<<Ay.front()<<endl;
    Ay.pop();
    Ay.pop();
    cout<<"Front Elment: "<<Ay.front();
    return 0;
}