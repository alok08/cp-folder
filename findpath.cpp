#include<bits/stdc++.h>
using namespace std;
#define m 3
#define n 3

void print(vector<int> const &path, int last)
{
    for(auto i:path)
    {
        cout<<i<<" - ";
    }
    cout<<endl;
}

bool isvalid(int x, int y)
{
    return(x>=0&&x<m&&y>=0&&y<n);
}

void findpath(int mat[m][n], vector<int>&path, int x, int y)
{
    if(x==m-1 && y==n-1)
    {
        print(path, mat[x][y]);
        return;
    }

    path.push_back(mat[x][y]);
    if(isvalid(x, y+1))
    {
        findpath(mat, path, x, y+1);
    }
    if(isvalid(x+1, y))
    {
        findpath(mat, path, x+1, y);
    }
    path.pop_back();
}

int main()
{
    int mat[m][n] =
    {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    vector<int> path;
    findpath(mat, path, 0, 0);

    return 0;
}