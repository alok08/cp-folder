#include<bits/stdc++.h>
using namespace std;

/*int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}*/

int factorial(int n);

int main()
{
    cout<<"enter an integer number : ";
    int n;
    cin>>n;
    cout<<factorial(n);

    return 0;
}

int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}