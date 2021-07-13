#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    stack<int>s;
    for(int i=n-1; i>=0; i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
            s.push(arr[i]);
        }
        else if(s.size()>0&&s.top()>arr[i])
        {
            v.push_back(s.top());
            s.push(arr[i]);
        }
        else if(s.size()>0&&s.top()<=arr[i])
        {
            while(s.size()>0&&s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
                s.push(arr[i]);
            }
            else
            {
                v.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }
    reverse(v.begin(), v.end());
    cout<<"the result is : "<<endl;
    for(auto i = v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    return 0;


}