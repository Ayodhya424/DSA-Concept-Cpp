#include<iostream>
#include<vector>
using namespace std;

class student
{
    public:
    int Id;
    string Name;
    int Marks;
    //-------------------------------------------------
    student() // default
    {
    }
    //-------------------------------------------------

    //Parameterized constructor
    student(int id, string N, int m)
    {
        Id =id;
        Name = N;
        Marks =m;
    }
};
int main()
{
    student s1(23030,"Ayodhya",456);
    cout<<"Student_ID: "<<s1.Id<<endl;
    cout<<"Student_Name: "<<s1.Name<<endl;
    cout<<"Student_Marks: "<<s1.Marks<<endl;
    return 0;
}