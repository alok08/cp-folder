#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    vector<int> v1;
    for(ll i=0; i<t; i++)
    {
        ll data;
        cin>>data;
        v1.push_back(data);
    }
    ll k;
    cin>>k;
    vector<int> v2 = v1;
    cout<<"vector 1 is : ";
    for(auto it=v1.begin(); it!=v1.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    sort(v2.begin(), v2.end(), greater<ll>());
    cout<<"vector 2 is : ";
    for(auto it=v2.begin(); it!=v2.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    map<int, int> m;
    for(int i=0; i<k; i++)
    {
        m[v2[i]]++;
    }

    // for(auto pt:m)
    // {
    //     cout<<(pt).first<<" "<<(pt).second<<" ";
    // }
    // cout<<endl;

    // map<int, int>::iterator it;
    for(auto it=m.begin(); it!=m.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<" ";
    }
    cout<<endl;

    for(int i=0; i<t; i++)
    {
        if(m.find(v1[i])!=m.end())
        {
            cout<<v1[i]<<" ";
            m[v1[i]]--;
        }
    }
    cout<<endl;
}