#include <iostream>
#include <queue>

using namespace std;


int main()
{
    queue <int> q;
    int n;
    int x=1;
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        q.push(i);
    }
    while(!(q.size()==1))
    {
        q.pop(); 
        x=q.front();
        q.pop();
        q.push(x);        
    }
    cout<<x;
}
