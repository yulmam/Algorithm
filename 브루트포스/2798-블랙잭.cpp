#include <iostream>
#include <vector>
using namespace std;
void brutal(int, int, int);
int arr[100]={0};
int N, M;
int result=0;
int main()
{
    int x;
    cin>> N>> M;
    int v;
    int result=0;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<N-2; i++)
    {
        for (int j=i+1; j<N-1; j++)
        {
            for(int k=j+1; k<N; k++)
            {
                v=arr[i]+arr[j]+arr[k];
                if(v<=M)
                {
                    if(result<v)
                        result=v;
                }
            }
        }
    }
    cout<<result;
}
