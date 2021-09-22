#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll arr[3], m;
        cin>>arr[0]>>arr[1]>>arr[2]>>m;
        sort(arr, arr+3);
        int max = arr[0]+arr[1]+arr[2]-3;
        int min = arr[2]-arr[1]-arr[0]-1;
        if(max<m)
        {
            cout<<"NO"<<endl;
        }
        else if(min>m)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}