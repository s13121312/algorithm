#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    stack<int> S;
    cin >> k;
    int sum=0;
    while(k--)
    {
        int wjd;
        cin >> wjd;
        if(wjd==0)
        {
            S.pop();
        }
        else
        {
            S.push(wjd);
        }
    }
    while (!S.empty()) //위의 단계에서 합을처리하지않고 밑에서 함.
    {
        sum+= S.top();
        S.pop();
    }
    cout << sum;

    
    return 0;
}
