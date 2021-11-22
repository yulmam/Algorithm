


# DFS�� BFS


## ���� �켱 Ž��(DFS)
���� �켱 Ž���̶� ��Ʈ ��忡�� �����ؼ� ���� �б�� �Ѿ�� ���� �ش� �б⸦ �Ϻ��ϰ� Ž���ϴ� ����Դϴ�.






### DFS�� BFS ����(backjoon 1260��)
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