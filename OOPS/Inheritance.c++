// #include<iostream>
// using namespace std;
// class Person
// {
//     public:
//     string name;
//     int age;
//     Person()
//     {
//         this->name = name;
//         this->age = age;
//     }
// };
// class student : public Person{
//     public:
//     int rollno;
//     string depart;
//     void getinf()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Rollno: "<<rollno<<endl;
//     }
// };
// int main()
// {
//     student S1;
//     S1.name = "Ayodhya";
//     S1.age = 21;
//     S1.rollno=01;
//     S1.getinf();
// }


#include<iostream>
#include<string>
using namespace std;

class Vehicles {
public:
    string Model;
    string brand;
    double price;

    Vehicles(string b, string m, double p) {
        brand = b;
        Model = m;
        price = p;
        cout << "Brand: " << brand << endl;
    }
};
class Car : public Vehicles {
public:
    Car(string b, string m, double p) : Vehicles(b, m, p) {
        cout << "Model: " << Model << endl;
        cout << "Price: " << price << endl;
    }
};
int main() {
    Car s1("TY", "Toyota", 32343.00);
    return 0;
}
