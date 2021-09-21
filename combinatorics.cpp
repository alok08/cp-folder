#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b, c, m;
        cin>>a>>b>>c>>m;
        if(m==0)
        {
            cout<<"YES"<<endl;
        }
        else if (a>1 || b>1 || c>1)
        {
            int n1 = a/m;
            int n2 = b/m;
            int n3 = c/m;
            if(n1+n2+n3 == m)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}