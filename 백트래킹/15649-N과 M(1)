#include <iostream>
#define MAX 9
using namespace std;
int n, m;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };
void back(int);
int main()
{
	cin >> n>> m;
	back(0);
}

void back(int cnt)
{
	int i;
	if (cnt == m)
	{
		for (i = 0; i < m; i++)
			cout << arr[i]<<' ';
		cout << '\n';
		return;
	}
	for (i = 1; i <= n; i++)
	{	
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i;
			back(cnt + 1);
			visited[i] = false;
		}
	}
	
}
