#include<bits/stdc++.h>
using namespace std;
int  solve(int n, char source, char aux, char des)
{
    int count = 1;
    if(n==1)
    {
        cout<<"move disk "<<n<<" from "<<source<<" to "<<des<<endl;
        return count;
        
    }
    count+=solve(n-1, source, des, aux);
    cout<<"move disk "<<n<<" from "<<source<<" to "<<des<<endl;
    count+=solve(n-1, aux, source, des);
    return count;
}

int main()
{
    cout<<"enter an integer number : ";
    int n;
    cin>>n;
    int count = solve(n, 'a', 'b', 'c');
    cout<<"count is : "<<count<<endl;

    return 0;
}