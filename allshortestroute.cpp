#include<bits/stdc++.h>
using namespace std;
#define m 3
#define n 3

void findpath(int mat[m][n], vector<int>&path, int x, int y)
{
    if(x == m-1 && y==n-1)
    {
        for(auto i : path)
        {
            cout<<i<<" -- ";
        }
        cout<<mat[x][y]<<endl;
        return;
    }

    path.push_back(mat[x][y]);
    if(x+1<m)
    {
        findpath(mat, path, x+1, y);
    }
    if(y+1<n)
    {
        findpath(mat, path, x, y+1);
    }
    if(x+1<m && y+1<n)
    {
        findpath(mat, path, x+1, y+1);
    }
    path.pop_back();
}

int main()
{
    int mat[m][n] = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> path;
    findpath(mat, path, 0, 0);

    return 0;
}