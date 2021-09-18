#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr1[n], arr2[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>arr2[i];
        }

        int count = 0;
        bool status = true;
        for(int i=0; i<n; i++)
        {
            if(arr1[i]>arr2[0])
            {
                count++;
                status = false;
            }
            else
            {
                break;
            }
        }
        if(status == true)
        {
            for(int i=0; i<n; i++)
            {
                if(arr2[i]<arr1[0])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        if(arr1[0]<arr2[0])
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
    }

    return 0;
}