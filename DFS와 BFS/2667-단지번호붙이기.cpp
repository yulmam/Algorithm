#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int, int);
int N;
int visited[26][26] = { 0 };
string arr[26];
int x_m[] = { 1, 0, -1, 0 };
int y_m[] = { 0, 1, 0, -1 };
vector<int> v;
int result = 0;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (visited[i][j] == 0 && arr[i][j] == '1')
            {
                dfs(i, j);
                v.push_back(result);
                result = 0;
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << '\n';
        }
}
void dfs(int x, int y)
{
    if (x <0 || y < 0)
        return;
    result++;
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int newX = x + x_m[i];
        int newY = y + y_m[i];
        if (0 <= newX && newX < N && 0 <= newY && newY < N)
            if (arr[newX][newY] == '1' && visited[newX][newY] == 0)
                dfs(newX, newY);
           
    }
    return;
}
