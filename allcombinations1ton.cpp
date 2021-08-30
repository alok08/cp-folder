#include<bits/stdc++.h>
using namespace std;

void print(vector<int> const &vect)
{
    for(int i:vect)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void allcombinations(int i, int n, vector<int> &vect)
{
    if(n == 0)
    {
        print(vect);
        return;
    }

    for(int j=i; j<=n; j++)
    {
        vect.push_back(j);
        allcombinations(j, n-j, vect);
        vect.pop_back();
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> vect;
    allcombinations(1, n, vect);

    return 0;
}