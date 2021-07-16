#include<bits/stdc++.h>
using namespace std;

int mah(vector<int>&v)
{
    vector<int> left;
    vector<int> right;
    stack<pair<int, int>> s;
    int n = v.size();
    int pseudoindex = n, width[n];
    //for nsr index
    for(int i = n-1; i>=0; i--)
    {
        if(s.size()==0)
        {
            right.push_back(pseudoindex);
            s.push({v[i], i});
        }
        else if(s.size()>0  && s.top().first<v[i])
        {
            right.push_back(s.top().second);
            s.push({v[i], i});
        }
        else if(s.size()>0&&s.top().first>=v[i])
        {
            while(s.size()>0&&s.top().first>=v[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                right.push_back(pseudoindex);
                s.push({v[i], i});
            }
            else
            {
                right.push_back(s.top().second);
                s.push({v[i], i});
            }
        }
    }
    reverse(right.begin(), right.end());

    // for nsl index

    while(!s.empty())
    {
        s.pop();
    }

    for(int i=0; i<n; i++)
    {
        if(s.size()==0)
        {
            left.push_back(-1);
            s.push({v[i], i});
        }
        else if(s.size()>0&&s.top().first<v[i])
        {
            left.push_back(s.top().second);
            s.push({v[i], i});
        }
        else if(s.size()>0&&s.top().first>=v[i])
        {
            while(s.size()>0&&s.top().first>=v[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                left.push_back(-1);
                s.push({v[i], i});
            }
            else
            {
                left.push_back(s.top().second);
                s.push({v[i], i});
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        width[i] = right[i]-left[i]-1;
    }
    int ans = width[0]*v[0];
    for(int i=1; i<n; i++)
    {
        ans = max(ans, width[i]*v[i]);
    }
    return ans;
}

int main()
{
    int m=4, n=4;
    int arr[m][n] = {{0,1,1,0},{ 1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int mx = 0;
    vector<int> v;
    for(int i=0;i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0)
            {
                v.push_back(arr[i][j]);
            }
            else
            {
                if(arr[i][j]==0)
                {
                    v[j] = 0;
                }
                else
                {
                    v[j] = v[j]+arr[i][j];
                }
            }
        }
        mx = max(mx, mah(v));
    }
    cout<<"answer is : "<<mx<<endl;
}