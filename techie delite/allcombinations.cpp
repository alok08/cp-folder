#include<bits/stdc++.h>
using namespace std;

void findallcombinations(vector<int> &vect, int n, int x)
{
    if(x>n)
    {
        for(int i:vect)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=0; i<2*n; i++)
    {
        if(vect[i] == -1 && (x+i+1)<2*n && vect[x+i+1] == -1)
        {
            vect[i] = x;
            vect[x+i+1] = x;
            findallcombinations(vect, n, x+1);
            vect[i] = -1;
            vect[x+i+1] = -1;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int> v1(2*n, -1);
    findallcombinations(v1, n, 1);

    return 0;
}