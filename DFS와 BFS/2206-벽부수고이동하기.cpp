#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int bfs();
int N, M;
string arr[1002];
int visited[1002][1002][2] = {0 };
int x_m[] = { 1, 0, -1, 0 };
int y_m[] = { 0, 1, 0, -1 };
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << bfs();
    
}


int bfs()
{
    int x, y, d;
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(make_pair(0, 0), 0));
    while (!q.empty())
    {
        x = q.front().first.first;
        y = q.front().first.second;
        d = q.front().second;
        q.pop();
        if (y == M - 1 && x == N - 1)
        {
            return visited[N - 1][M - 1][d]+1;
            
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = x + x_m[i];
            int ny = y + y_m[i];

            if ((nx > -1 && ny > -1) && (nx < N && ny < M))
            {


                if (arr[nx][ny] == '0' && !visited[nx][ny][d])
                {
                    q.push(make_pair(make_pair(nx, ny), d));
                    visited[nx][ny][d] = visited[x][y][d] + 1;
                }
                else if (arr[nx][ny] == '1' && !d)
                {
                    q.push(make_pair(make_pair(nx, ny), d+1));
                    visited[nx][ny][d+1] = visited[x][y][d] + 1;
                }//부시거나 그냥 진행

            }
        }

    }
    
    return -1;
}
