#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*pointer;
    node(int x)
    {
        data = x;
        pointer=NULL;
    }
};

void printlist(node *head)
{
    node * ptr = head;
    if(head==NULL)
    {
        cout<<"list is empty. ";
    }
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ---> ";
            ptr=ptr->pointer;
        }
    }
}

void rprint(node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" --> ";
    rprint(head->pointer);
}

int main()
{
    node *head = new node(10);
    head->pointer = new node(20);
    head->pointer->pointer = new node(30);
    head->pointer->pointer->pointer = new node(40);
    head->pointer->pointer->pointer->pointer = new node(50);
    printlist(head);
    cout<<endl;
    rprint(head);

    return 0;
}