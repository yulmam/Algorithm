#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	int left = 1;
	int right = k;
	int result = 0;
	while(left<=right)
	{
		int cnt = 0;
		int mid = (left + right) / 2;
		for (int i = 1; i <= n; i++)
		{
			cnt += min(mid / i, n);
		}
		if (cnt < k)
			left = mid + 1;
		else
		{
			result = mid;
			right = mid - 1;
		}

	}
	cout << result;
}
