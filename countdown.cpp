#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count = 0, sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=(str[i]-'0');
            if(str[i]!='0')
            {
                count++;
            }
        }
        if(str[n-1]!='0')
        {
            cout<<sum+(count-1)<<endl;
        }
        else
        {
            cout<<sum+count<<endl;
        }

    }

    return 0;
    
}