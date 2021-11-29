#include <iostream>
#include <queue>
#include <limits.h>
using namespace std;
void virus(int);
int N, M;
int x, y;
int arr[101][101] = { 0 };
int visited[101] = { 0 };
int time = 0;
int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    virus(1);
    cout << time-1;
}

void virus(int x)
{
    time++;
    visited[x] = 1;
    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == 0 && arr[x][i] == 1)
        {
            virus(i);
        }
    }
    return;
}
