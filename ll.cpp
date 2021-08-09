#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *pointer;
    node(int x)
    {
        data = x;
        pointer = NULL;
    }
};

int main()
{
    node *head = new node(10);
    node * temp1 = new node(20);
    node * temp2 = new node(30);

    head->pointer=temp1;
    temp1->pointer=temp2;


    return 0;
}