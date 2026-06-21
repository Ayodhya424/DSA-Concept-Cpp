#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    private:
    double Balance;
public:
    long ACnum;
    string ACHol;
    string IFSC;

//parametorized constructor - where we are passing parameter -- in this we pass all value inside a single line and get initilize
    BankAccount(long A, string B, string C, double D)
   {
        this->ACnum =A;
        this->ACHol =B;
        this->IFSC =C;
        this->Balance =D;
    }
    // // Non-parametorize constructor
    // BankAccount()
    // {
    //     IFSC="PUNB00863";
    // }
    double getBalance()
    {
        return Balance;
    }
};
int main()
{
    BankAccount B1(30088383,"Ayodhya","PUNB0082",454646.89);
    cout<<B1.ACnum<<endl<<B1.ACHol<<endl<<B1.IFSC<<endl<<B1.getBalance()<<endl;
    // BankAccount B1;
    // cout<<B1.IFSC<<endl;
}
