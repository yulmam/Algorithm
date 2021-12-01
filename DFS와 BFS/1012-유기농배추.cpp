#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int, int);
int T, N, M, K;
int visited[50][50] = { 0 };
int arr[50][50] = { 0 };
int x_m[] = { 1, 0, -1, 0 };
int y_m[] = { 0, 1, 0, -1 };
vector<int> v;
int result = 0;

int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M >> K;
        for (int j = 0; j < K; j++)
        {
            int x, y;
            cin >> x >> y;
            arr[x][y] = 1;
        }
        for (int t = 0; t < N; t++)
        {
            for (int k = 0; k < M; k++)
            {
                if (visited[t][k] == 0 && arr[t][k] == 1)
                {
                    dfs(t, k);
                    result++;
                }
            }

        }
        cout << result << '\n';
        result = 0;
        for (int t = 0; t < N; t++)
        {
            for (int k = 0; k < M; k++)
            {
                arr[t][k] = 0;
                visited[t][k] = 0;
            }

        }
    }


}
void dfs(int x, int y)
{
    if (x < 0 || y < 0)
        return;
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int newX = x + x_m[i];
        int newY = y + y_m[i];
        if (0 <= newX && newX < N && 0 <= newY && newY < M)
            if (arr[newX][newY] == 1 && visited[newX][newY] == 0)
                dfs(newX, newY);

    }
    return;
}
