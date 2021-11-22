


# DFS와 BFS


## 깊이 우선 탐색(DFS)
깊이 우선 탐색이란 루트 노드에서 시작해서 다음 분기로 넘어가기 전에 해당 분기를 완벽하게 탐색하는 방법입니다.






### DFS와 BFS 구현(backjoon 1260번)
```
#include <iostream>
#include <queue>
using namespace std;
void dfs(int);
void bfs(int);
int N;
int M;
int V;
int visited[1001] = { 0 };
int arr[1001][1001] = { 0 };
int main()
{
    int i;
    int x, y;
    cin >> N >> M >> V;
    for (i = 0; i < M; i++)
    {
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    dfs(V);
    cout << '\n';
    bfs(V);
}
void dfs(int v)
{
    visited[v] = 1;
    cout << v << ' ';
    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == 0 && arr[v][i] == 1)
            dfs(i);
    }
}
void bfs(int v)
{
    queue<int> q;
    q.push(v);
    visited[v] = 0;
    while (!q.empty())
    {
        v = q.front();
        cout << q.front() << ' ';
        q.pop();
        for (int i = 1; i <= N; i++)
        {
            if (visited[i] == 0 || arr[v][i] == 0)
                continue;
            q.push(i);
            visited[i] = 0;
        }
    }
}
```