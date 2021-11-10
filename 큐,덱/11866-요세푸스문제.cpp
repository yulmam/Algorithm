#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> q;
    int n, k;
    int x=1;
    cin>> n>>k;
    for(int i=1; i<=n; i++)
    {
        q.push(i);
    }
    cout<<'<';
    while(!(q.size()==1))
    {
        for(int i=1; i<k; i++)
        {
            x=q.front();
            q.pop();
            q.push(x);
        }
        x=q.front();
        q.pop();
        cout<<x<<','<<' ';
    }
    cout<<q.front();
    cout<<'>';
}
