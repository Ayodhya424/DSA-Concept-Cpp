#include<iostream>
using namespace std;
// int main()
// {// 1. showing memory address of varible a
//     int a = 12;
//    // int b = &a;
//     cout<<&a<<endl;
// }


// //2. Using pointer to show memory address of another variable and pointer

// int main()
// {
//     int n = 23;
//     int* ptr = &n;
//     cout<<&n <<endl<<ptr<<endl;
//     return 0;
// }


// 3. Using Pointer to pointer for memory address
int main()
{
    int n = 32;
    int* ptr = &n;
    int** ptr2 = &ptr;
    //cout<<&n<<endl<<ptr<<endl<<ptr2<<endl;
    cout<<(&n)<<endl;
    cout<<(ptr)<<endl;
    cout<<(&ptr)<<endl;
    cout<<(ptr2)<<endl;
    cout<<*(ptr)<<endl;
    cout<<**(ptr2)<<endl;
    return 0;

}