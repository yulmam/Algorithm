#include <iostream>
#include <queue>
#include <utility>
#include <limits.h>
using namespace std;

void bfs();
int M, N;
int arr[1001][1001] = { 0 };
int visited[1001][1001] = { 0 };
int x_m[] = { 1, 0, -1, 0 };
int y_m[] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;
int main()
{
    cin >> M >> N;
    int x, result;
    result = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> x;
            arr[i][j] = x;
            if (x == 1)
            {
                q.push(make_pair(i, j));
            }
        }
    }

    bfs();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] > result)
                result = arr[i][j];
            if (arr[i][j] == 0)
            {
                cout << -1;
                exit(0);
            }
        }
    }
    cout << result-1;
}
void bfs()
{
    int x, y;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        visited[x][y] = 1;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + x_m[i];
            int ny = y + y_m[i];
            if ((nx < N && ny < M) && (nx >= 0 && ny >= 0))
            {
                if (arr[nx][ny] == 0 && visited[nx][ny] == 0)
                {
                    arr[nx][ny] = arr[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }

    }

}
