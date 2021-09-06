#include<bits/stdc++.h>
using namespace std;

int length(char str[])
{
    if(str[0] == '\0')
    {
        return 0;
    }
    int smallstringlength = length(str+1);
    return smallstringlength+1;
}

int main()
{
    char str[100];
    cin>>str;

    int l = length(str);
    cout<<l<<endl;
}