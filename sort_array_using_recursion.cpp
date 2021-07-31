#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&vect, int temp)
{
    if(vect.size()==0 || vect[vect.size()-1]<=temp)
    {
        vect.push_back(temp);
        return;
    }
    int val = vect[vect.size()-1];
    vect.pop_back();
    insert(vect, temp);
    vect.push_back(val);
}

void sort(vector<int>&vect)
{
    if(vect.size()==1)
    {
        return;
    }
    int temp = vect[vect.size()-1];
    vect.pop_back();
    sort(vect);
    insert(vect, temp);
}

int main()
{
    vector<int> vect{5, 1, 7, 3, 0, 6, 4};
    sort(vect);
    for(int i:vect)
    {
        cout<<i<<" ";
    } 
    cout<<endl;

    return 0;
}