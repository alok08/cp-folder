#include<bits/stdc++.h>
using namespace std;

int fab(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return fab(n-1)+fab(n-2);
}

int fab2(int n, int *arr)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(arr[n]>0)
    {
        return arr[n];
    }
    int output = fab2(n-1, arr)+fab2(n-2, arr);
    arr[n] = output;
    return output;
}

int fabi(int n)
{
    int *arr = new int [n+1];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2; i<=n; i++)
    {
        arr[i] = arr[i-1]+arr[i-2];
    }
    int output = arr[n];
    delete []arr;
    return output;
}

int main()
{
    cout<<"enter an integer number : ";
    int n;
    cin>>n;
    cout<<"fabonacci element is : "<<fab(n)<<endl;
    cout<<"fabonacci element from another method is : "<<fab2(n, arr)<<endl;
    cout<<"iterative solution is : "<<fabi(n)<<endl;

    return 0;
}