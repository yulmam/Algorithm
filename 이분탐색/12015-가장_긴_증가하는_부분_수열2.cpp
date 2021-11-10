#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=1;
    vector <int> v;
    int temp;
    cin>>temp;
    v.push_back(temp);
    for(int i=1; i<n; i++)
    {
        cin>>temp;
        if(v.back()<temp)
        {
            cnt++;
            v.push_back(temp);
        }
        else
        {
            vector<int>::iterator low = lower_bound(v.begin(), v.end(), temp);
            *low=temp;
        }
    }

    cout<<cnt;

}
