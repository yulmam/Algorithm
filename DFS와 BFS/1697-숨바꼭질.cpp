#include <iostream>
#include <queue>
#include <utility>
#include <limits.h>
using namespace std;

void bfs();
bool check(int);
int visit[100001] = { 0 };
int N, K;queue<pair<int, int>> q;
int main()
{
	cin >> N >> K;
	bfs();
}
void bfs()
{
	int x, d;
	q.push(make_pair(N, 1));
	while (!q.empty())
	{
		x=q.front().first;
		d = q.front().second;
		q.pop();
		if (x != K)
		{
			if(check(x-1))
			{ 
				q.push(make_pair(x - 1, d + 1));
				visit[x - 1] = 1;
			}
				
			if(check(x+1))
			{
				q.push(make_pair(x + 1, d + 1));
				visit[x + 1] = 1;
			}
			if(check(x*2))
			{
				q.push(make_pair(x * 2, d + 1));
				visit[x * 2] = 1;
			}
		}
		else
		{
			cout << d-1;
			exit(0);
		}
	}

}
bool check(int x)
{
	if (x > 100000 || x < 0||visit[x])
		return false;
	return true;
}
