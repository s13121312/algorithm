#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

const int MX = 1000005;

pair<int,int> dat[MX];

int head =0, tail =0;
void push(pair<int,int> x){
    dat[tail++]= x;
}

void pop(){
    head++;
}

pair<int,int> front(){
    return dat[head];
}
pair<int,int> back(){
    return dat[tail-1];
}

int board[502][502]={};
bool visit[502][502];
int dx[4]={1,0,-1,0}; //행
int dy[4]={0,1,0,-1};//열

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++)
        {
            cin >> board[i][k];
        }
    }

    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++)
        {
            pair<int,int> cur = front(); pop();
            

        }
    }




    return 0;
}