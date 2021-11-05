#include <stack>
#include <iostream>
#include <string>
#include <memory.h>
using namespace std;


string arr;

int main()
{
    int n;
    cin>> n;
    stack <int> s;
    for(int i=0; i<n; i++)
    {
        cin>>arr;
        for(int j=0; arr[j]!=0;j++)
        {
            if(s.empty())
            {
                if(arr[j]==')')
                {
                    cout<<"NO"<<'\n';
                    goto trynext;
                }
                else
                    s.push(arr[j]);
            }
            else if(s.top()!=arr[j])
                s.pop();
            else
                s.push(arr[j]);
        }

        if(s.empty())
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
        trynext:
        while( !s.empty() ) s.pop();
    }
}
