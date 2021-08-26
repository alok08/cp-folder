#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcdef";
    cout<<s<<endl;
    cout<<s.substr(2)<<endl;
    cout<<s.find("def")<<endl;
    string s1;
    s1 = "alok singh bhadauria";
    cout<<s1<<endl;

    string* str = new string;
    *str = "alok again";
    cout<<str<<endl;
    cout<<*str<<endl;

    string st;
    getline(cin, st);
    cout<<st<<endl;

    return 0;
}