#include<bits/stdc++.h>
using namespace std;
int mul(int x, int y)
{
    return x*y;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int sum = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<accumulate(arr, arr+n, sum)<<endl;
    cout<<accumulate(arr, arr+n, sum, mul)<<endl;
    cout<<accumulate(arr, arr+n, sum, minus<int>())<<endl;
    return 0;
}