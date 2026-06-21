#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int newNode)
    {
        this->data = newNode;
        next = NULL;
    }
};

class List
{
    Node* head;
    Node* tail;
    public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head=tail=newNode;
            return;
        }
        else
        {
            newNode->next=head;
            head = newNode;
        }
    }
    void printLL()
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            cout<<temp->data<<"-> ";
            temp = temp->next;
        }
        cout<<"NULL";

    }
};

int main(){
    List l;
    l.push_front(3);
    l.push_front(6);
    l.push_front(8);
    l.push_front(56);
    l.printLL();
    return 0;
}