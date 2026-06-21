#include<iostream>
#include<vector>
using namespace std;

class student
{
    public:
    int id;
    string name;
    int marks;
};

int main()
{
    student s1;
    s1.id = 23;
    s1.name="Ayodhya";
    s1.marks=34;

    cout<<"Student_ID: "<<s1.id<<endl;
    cout<<"Student_Name: "<<s1.name<<endl;
    cout<<"Student_Marks: "<<s1.marks<<endl;
    return 0;
}