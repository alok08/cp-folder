#include<bits/stdc++.h>
using namespace std;

int clearallbitsfrommsb(int n, int i)
{
    int m = (1<<(i-1))-1;
    return (n&m);
}

int main()
{
    cout<<"enter the value of n and i : ";
    int n, i;
    cin>>n>>i;
    cout<<"the required answer will be  : "<<clearallbitsfrommsb(n, i)<<endl;

    return 0;
}