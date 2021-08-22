#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *pointer;
    node(int x)
    {
        data = x;
        pointer=NULL;
    }
};

// node *insertbegin(node *temp, int data)
// {
//     if(temp==NULL)
//     {
//         temp->data=data;
//         temp->pointer=NULL;
//     }
//     else
//     {
//         temp->data = data;
//         temp->pointer = head->pointer;
//         head->pointer = temp;
//     }
// }

node * insertbegin(node *head, int data)
{
    node * temp=new node(data);
    temp->pointer = head;
    return temp;
}

void printlist(node *head)
{
    node *ptr = head;
    if(ptr==NULL)
    {
        cout<<"list is empty . "<<endl;
    }
    else
    {
       while(ptr!=NULL)
       {
           cout<<ptr->data<<" --> ";
           ptr = ptr->pointer;
       }
    }
}

int main()
{
    node *head = NULL;
    head = insertbegin(head, 30);
    head = insertbegin(head, 20);
    head = insertbegin(head, 10);
    printlist(head);

    return 0;
}