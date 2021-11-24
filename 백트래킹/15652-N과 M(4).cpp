#include <iostream>

using namespace std;
void back(int);
int n, m;
int arr[9]={0};

int main(){
    cin>>n>>m;
    back(0);
}


void back(int cnt)
{
    int i;
    if(cnt==m)
    {
        for(int i=0; i<m; i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;        
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[cnt]<=i)
        {
            arr[cnt]=i;
            back(cnt+1);

        }
        
    }
}