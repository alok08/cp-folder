#include<bits/stdc++.h>
using namespace std;
#define m 10
#define n 10

bool issafe(int mat[m][n], int visited[m][n], int x, int y)
{
    if(mat[x][y] == 0 || visited[x][y] == 1)
    {
        return false;
    }
    return true;
}

bool isvalid(int x, int y)
{
    if(x<0 || x>=m || y<0 || y>=n)
    {
        return false;
    }
    return true;
}

void longestpathinmaze(int mat[m][n], int visited[m][n], int i, int j, int x, int y, int &max_dist, int distance)
{
    if(i == x && j == y)
    {
        max_dist = max(distance, max_dist);
        return;
    }

    visited[i][j] = 1;

    if(issafe(mat, visited, i+1, j) && isvalid(i+1, j))
    {
        longestpathinmaze(mat, visited, i+1, j, x, y, max_dist, distance+1);
    } 

    if(issafe(mat, visited, i, j+1) && isvalid(i, j+1))
    {
        longestpathinmaze(mat, visited, i, j+1, x, y, max_dist, distance+1);
    }

    if(issafe(mat, visited, i, j-1) && isvalid(i, j-1))
    {
        longestpathinmaze(mat, visited, i, j-1, x, y, max_dist, distance+1);
    }

    if(issafe(mat, visited, i-1, j) && isvalid(i-1, j))
    {
        longestpathinmaze(mat, visited, i-1, j, x, y, max_dist, distance+1);
    }
    visited[i][j] = 0;
}

int main()
{
    int mat[m][n] =
    {
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
        { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
    };
    int visited[m][n];
    memset(visited, 0, sizeof(visited));
    int max_dist = 0;
    longestpathinmaze(mat, visited, 0, 0, 7, 5, max_dist, 0);
    cout<<"the longest path is : "<<max_dist<<endl;

    return 0;
}