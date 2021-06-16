#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 100;
    int result = accumulate(arr, arr+n, sum, minus<int>());
    cout<<result<<endl;*/

    int arr1[] = {122, 165, 241, 156, 177, 200};
    int arr2[] = {10, 20, 30};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int result[5];
    transform(arr1, arr1+n, arr2, result, minus<int>());
    for(int i=0; i<n; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}