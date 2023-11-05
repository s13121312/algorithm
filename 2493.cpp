#include <bits/stdc++.h>
using namespace std;
#define X first //탑의 높이
#define Y second //탑의 위치
//비교를 어떻게 할지 구현을 못하겠음

int N;
stack<pair<int,int>> tower;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    tower.push({100000001,0});

    for(int i=1;i<=N;i++)
    {
        int height;
        cin >> height;

        while (tower.top().X < height)
        {
            tower.pop();
        }
        cout << tower.top().Y <<" ";
        tower.push({height,i});
    }
        
    
    

    return 0;
}