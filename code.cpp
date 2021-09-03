#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t;
   cin>>t;
   vector<ll>arr;
   for(ll i=0;i<t;i++)
   {
       ll data;
       cin>>data;
       arr.push_back(data);
   }
   ll k;
   cin>>k;
   vector<ll>arr1=arr;
   sort(arr1.begin(),arr1.end(),greater<ll>());
   map<int,int>m;
   for(int i=0;i<k;i++)
   {
       m[arr1[i]]++;
   }
   
   for(int i=0;i<t;i++)
   {
       if(m.find(arr[i])!=m.end())
       {
           cout<<arr[i]<<" ";
           m[arr[i]]--;
       }
   }
   return 0;
}