// // //Implementation using Array
// #include<iostream>
// using namespace std;
// class MyStack
// {
//     int *arr; //Array to store elememt
//     int capacity; // MAximum size of stack
//     int top;   //index of top element
//     public:
//     MyStack(int cap)  //constructor
//     {
//         capacity = cap;
//         top = -1;
//         arr = new int[capacity];
//     }
//     ~MyStack() { //destructor to free space
//     delete[] arr;
// }
//     //push operation
//     void push(int x)
//     {
//         if( top == capacity-1)
//         {
//             cout<<"Stack Overflow\n";
//             return;
//         }
//         arr[++top]=x;
//     }

//     int pop() //pop operation
//     {
//         if(top == -1)
//         {
//             cout<<"Stack is empty\n";
//             return -1;
//         }
//         return arr[top--];
//     }
//     int peek()  //peek or top operation
//     {
//         if(top == -1)
//         {
//             cout<<"Stack Underflow\n";
//             return -1;
//         }
//         return arr[top];
//     }
//     bool isEmpty() //Check if stack is empty
//     {
//         return top==-1;
//     }

//     bool isFull() //check if stack is full
//     {
//         return top == capacity-1;
//     }
// };

// int main()
// {
//     MyStack st(7);
//     st.push(23); //pushing element in stack
//     st.push(2);
//     st.push(42);
//     st.push(52);
//     st.push(32);
//     st.push(302);
//     st.push(30);
//     cout<<"Top Element: "<<st.peek()<<endl; // returning Top element
//     st.pop();
//     cout<<"Popped Element: "<<st.pop()<<endl; //popping one element
//    cout<<"Is stack empty: "<<(st.isEmpty() ? "Yes":"No")<<endl; //check if stack is empty
//    st.push(344);
//    st.push(305);
//    st.push(309);
//    cout<<"Is stack Full: "<<(st.isFull() ? "Yes":"No")<<endl; //check if stack is full
//    return 0;
// }

//Output: - 

// Top Element: 30
// Popped Element: 302
// Is stack empty: No
// Stack Overflow
// Is stack Full: Yes



// Stack Implementation using Dynamic arrays
#include<iostream>
#include<vector>
using namespace std;
class MYStack
{
    vector<int>arr;
    public:
    void push(int x)
    {
        arr.push_back(x);
    }
    int pop()
    {
        if(arr.empty())
        {
            cout<<"Stack is Underflow"<<endl;
            return -1;
        }
        int val = arr.back();
        arr.pop_back();
        return val;
    }
    int peek()
    {
        if(arr.empty())
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr.back();
    }
    bool isEmpty()
    {
        return arr.empty();
    }
    int size()
    {
        return arr.size();
    }
};

int main()
{
    MYStack st;
    st.push(2);
    st.push(29);
    st.push(28);
    st.push(23);
    st.push(7);
    st.push(77);
    st.push(79);
    st.push(70);
    st.push(230);
    cout<<"Top Element: "<<st.peek()<<endl;
    st.pop();
    cout<<"Popped Element: "<<st.pop()<<endl;
    cout<<"Is stack Empty: "<<(st.isEmpty()?"Yes":"No")<<endl;
    cout<<"Stack Size: "<<st.size()<<endl;
    return 0;
}

//Output: -
// Top Element: 230
// Popped Element: 70
// Is stack Empty: No
// Stack Size: 7