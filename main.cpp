#include<bits/stdc++.h>
using namespace std;

void printcharwithfrequency(string str)
{
    map<char, int> m;
    for(char i : str)
    {
        m[i]++;
    }
    map<char, int>::iterator it;
    for(it = m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
}

int main()
{
    string str;
    cin>>str;
    printcharwithfrequency(str);

    return 0;
}
