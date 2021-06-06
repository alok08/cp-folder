#include<bits/stdc++.h>
using namespace std;

void print(vector<int> const &vect)
{
    for(auto it = vect.begin(); it!=vect.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void findallcombinations(int arr[], int n, vector<int> &vect, int i, int k)
{
    if(vect.size() ==  k)
    {
        print(vect);
        return;
    }

    for(int j=i; j<n; j++)
    {
        vect.push_back(arr[j]);
        findallcombinations(arr, n, vect, j, k);
        vect.pop_back();

        while (j < n - 1 && arr[j] == arr[j + 1]) {
            j++;
        }
    }
}

int main()
{
    int n, k;
    int * arr = new int [10];
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);

    vector<int> vect;
    findallcombinations(arr, n, vect, 0, k);

    delete [] arr;

    return 0;
}