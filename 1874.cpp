#include <bits/stdc++.h>
using namespace std;
//같은수가 나오지않는다는게 포인트 그리고 수열에 넣어야하니까 popㅇ을 해줌 입력한대로 수열이 나와야함.

int main(void)
{
    int n;
    cin >> n;
    stack<int> stk;
    int cnt = 1;
    string ans;
    while (n--)
    {
        int t;
        cin >> t;
        
        while(cnt<=t)
        {
            stk.push(cnt++);
            ans += "+\n";          
        }
        if(stk.top()!=t)
            {
                cout <<"NO\n";
                return 0;
            }
        stk.pop();
        ans += "-\n";
    }
    cout << ans;

    return 0;
}