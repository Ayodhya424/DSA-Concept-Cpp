//stack Implementation using Linked List
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class MyStack
{
    Node* top;
    int count;
    public:
    MyStack()
    {
        top = NULL;
        count = 0;
    }
    void push(int x)
    {
        Node* temp = new Node(x);
        temp->next =top;
        top = temp;
        count++;
    }
    int pop()
    {
        if(top == NULL)
        {
            cout<<"Stack Underflow \n";
            return -1;
        }
        Node* temp = top;
        top = top->next;
        int val = temp->data;
        count--;
        delete temp;
        return val;
    }
    int peek()
    {
        if(top == NULL)
        {
            cout<<"Stack UnderFlow\n";
            return -1;
        }
        return top->data;
    }
    int size()
    {
        return count;
    }
};

int main()
{
    MyStack st;
    st.push(23);
    st.push(2);
    st.push(25);
    st.push(56);
    st.push(89);
    st.push(90);
    st.push(05);
    cout<<"Top Element: "<<st.peek()<<endl;
    cout<<"Popped Element: "<<st.pop()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<"Top Element: "<<st.peek()<<endl;
    cout<<"Size of stack: "<<st.size()<<endl;
    return 0;
}


//Output: -

// Top Element: 5
// Popped Element: 5
// Top Element: 25
// Size of stack: 3