#include<bits/stdc++.h>
using namespace std;

int returnfirstsetbit(int n)
{
    int m=1;
    while((n&m)!=m)
    {
        m++;
    }
    return m;
}

int main()
{
    cout<<"enter an integer : ";
    int n;
    cin>>n;
    cout<<"the required answer is : "<<returnfirstsetbit(n)<<endl;

    return 0;
}