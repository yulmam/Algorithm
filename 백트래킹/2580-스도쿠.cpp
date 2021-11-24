#include <iostream>
#include <vector>
#include <utility>

using namespace std;
int board[9][9];
vector <pair<int, int>> v;
void back(int);
bool check(int, int, int);
int main(){

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cin>>board[i][j];
            if(board[i][j]==0)
            v.push_back(make_pair(i, j));
        }
    }
    back(0);
}

void back(int cnt)
{
    if(v.size()==cnt)
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cout<<board[i][j]<<' ';
            }
            cout<<'\n';
        }
    }
    for(int j=cnt; j<v.size(); j++)
    {
        for(int i=1; i<=9; i++)
        {
            if(check(v[j].first, v[j].second, i))
            {
                void back(cnt+1);
            }
        }   
    }
    
}
bool check(int x, int y, int c)
{
    for(int i=0; i<9; i++)
    {
        if(board[i][y]==c)
            return false;
        if(board[x][y]==c)
            return false;
    }
    for(int i=)
}