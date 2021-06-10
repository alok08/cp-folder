#include<bits/stdc++.h>
using namespace std;
#define n 4

bool issafe(int x, int y)
{
    if(x>=0&&x<n&&y>=0&&y<n)
    {
        return true;
    }
    return false;

    /*if (x < 0 || y < 0 || x >= n || y >= n) {
        return false;
    }
 
    return true;*/
}

void numberofuniquepaths(int maze[n][n], int visited[n][n], int x, int y, int &count)
{
    if(x == n-1 && y == n-1)
    {
        count++;
        return;
    }
    visited[x][y] = 1;

    if(issafe(x, y) && maze[x][y])
    {
        if(x+1<n && !visited[x+1][y])
        {
            numberofuniquepaths(maze, visited, x+1, y, count);
        }

        if(x-1>=0 && !visited[x-1][y])
        {
            numberofuniquepaths(maze, visited, x-1, y, count);
        }

        if(y+1<n && !visited[x][y+1])
        {
            numberofuniquepaths(maze, visited, x, y+1, count);
        }

        if(y-1>=0 && !visited[x][y-1])
        {
            numberofuniquepaths(maze, visited, x, y-1, count);
        }
    }

    visited[x][y]=0;
}

int main()
{
    int maze[n][n] =
    {
        { 1, 1, 1, 1 },
        { 1, 1, 0, 1 },
        { 0, 1, 0, 1 },
        { 1, 1, 1, 1 }
    };
    int visited[n][n];
    memset(visited, 0, sizeof(visited));
    int count = 0;
    numberofuniquepaths(maze, visited, 0, 0, count);
    cout<<"the total number of unique path are "<<count<<endl;

    return 0;
}