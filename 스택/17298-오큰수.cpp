#include <iostream>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    int n;
    int x;
    stack <pair<int, int>> s;
    cin>>n;
    vector <int> r(n, -1);
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(s.empty())
            s.push(make_pair(x, i));
        else
        {
            tryagain:
            if(!s.empty()&&s.top().first<x)
            {
                r[s.top().second]=x;
                s.pop();
                goto tryagain;
            }
            else
                s.push(make_pair(x,i));
        }       
    
    }
    for(int i=0; i<n; i++)
        cout<<r[i]<<' ';
}
