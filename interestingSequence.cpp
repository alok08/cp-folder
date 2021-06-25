#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l;
    cin>>n>>k>>l;
    int *arr = new int[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int min=arr[0], max=arr[n-1], cost=0;
    for(int i=min; i<=max; i++)
    {
        int inc=0, dec=0, temp_cost=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]<=i)
            {
                inc+=i-arr[j];
            }
            else
            {
                dec+=arr[j]-i;
            }
        }
        if(dec<=inc)
        {
            temp_cost=dec*k+(inc-dec)*l;
            if(cost==0)
            {
                cost=temp_cost;
            }
        }
        if(cost>=temp_cost&&temp_cost>0)
        {
            cost=temp_cost;
        }
    }
    cout<<cost<<endl;
    delete[] arr;

    return 0;
}