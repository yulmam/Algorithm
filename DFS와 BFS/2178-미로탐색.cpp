#include <iostream>
#include <queue>
#include <utility>

using namespace std;
void bfs(int, int);
int N, M;
int x_m[] = { 1, 0, -1, 0 };
int y_m[] = { 0, 1, 0, -1 };
char arr[101][101];
int visited[101][101] = { 0 };
int checked[101][101] = { 0 };
int main()
{
    cin >> N>> M;
    for (int i=0; i < N; i++)
    {
            cin >> arr[i];
        
    }
    checked[0][0] = 1;
    bfs(0, 0);
    cout << checked[N-1][M-1];
}

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    visited[x][y] = 1;
    q.push(make_pair(x, y));;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + x_m[i];
            int ny = y + y_m[i];
            if ((nx > -1 && ny > -1) && (nx < N && ny < M))
            {
                if (arr[nx][ny] == '1' && visited[nx][ny] == 0)
                {
                    checked[nx][ny] = checked[x][y] + 1;
                    visited[nx][ny] = 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}
