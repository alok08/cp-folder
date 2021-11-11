/*#include<bits/stdc++.h>
using namespace std;
#define m 10
#define n 10

void shortestpathinmaze(int mat[m][n], int visited[m][n], int i, int j, int x, int y, int &min_dis, int distance)
{
    if(i==x && j==y)
    {
        min_dis = min(min_dis, distance);
        return;
    }
    if(i<0 || i>=m || j<0 || j>=n || mat[i][j] == 0 || visited[i][j] == 1)
    {
        return;
    }
    visited[i][j] = 1;
    shortestpathinmaze(mat, visited, i+1, j, x, y, min_dis, distance+1);
    shortestpathinmaze(mat, visited, i, j+1, x, y, min_dis, distance+1);
    shortestpathinmaze(mat, visited, i-1, j, x, y, min_dis, distance+1);
    shortestpathinmaze(mat, visited, i, j-1, x, y, min_dis, distance+1);
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
    int min_dis = INT_MAX;
    shortestpathinmaze(mat, visited, 0, 0, 7, 5, min_dis, 0);
    if(min_dis!=INT_MAX)
    {
        cout<<"the shortest distance is "<<min_dis<<endl;
    }
    else
    {
        cout<<"there is no such route. "<<endl;
    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
#define m 10
#define n 10
bool issafe(int x, int y)
{
    if (x < m && y < n && x >= 0 && y >= 0) {
        return true;
    }
 
    return false;
}

bool isvalid(int mat[m][n], int visited[m][n], int x, int y)
{
    if(mat[x][y] == 0 || visited[x][y] == 1)
    {
        return false;
    }
    return true;
}

void shortestpathinmaze(int mat[m][n], int visited[m][n], int i, int j, int x, int y, int &min_dis, int distance)
{
    if(i == x && j == y)
    {
        min_dis = min(distance, min_dis);
        return;
    }
    visited[i][j] = 1;
    if(isvalid(mat, visited, i+1, j) && issafe(i+1, j))
    {
        shortestpathinmaze(mat, visited, i+1, j, x, y, min_dis, distance+1);
    }

    if(isvalid(mat, visited, i, j+1) && issafe(i, j+1))
    {
        shortestpathinmaze(mat, visited, i, j+1, x, y, min_dis, distance+1);
    }

    if(isvalid(mat, visited, i-1, j) && issafe(i-1, j))
    {
        shortestpathinmaze(mat, visited, i-1, j, x, y, min_dis, distance+1);
    }

    if(isvalid(mat, visited, i, j-1) && issafe(i, j-1))
    {
        shortestpathinmaze(mat, visited, i, j-1, x, y, min_dis, distance+1);
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
    int min_dis = INT_MAX;
    shortestpathinmaze(mat, visited, 0, 0, 7, 5, min_dis, 0);

    if(min_dis != INT_MAX)
    {
        cout<<"the shortes path is : "<<min_dis<<endl;
    }
    else
    {
        cout<<"there doesn't exist any such route. "<<endl;
    }

    return 0;
}