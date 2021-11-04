#include <iostream>
#include <vector>
using namespace std;
void brutal(int, int, int);
int arr[100]={0};
int N, M;
int result=0;
int main()
{
    int x, i;
    int t=0;
    cin>> N;
    x=N;
    
    for(i=1; i<=N; i++)
    {   
        int v=0;
        x=i;
        while(x)
        {
            v+=x%10;

            x/=10;
        }
        if(N==i+v)
        {
            cout<<i;
            exit(0);
        }
    }
    cout<<0;
}
