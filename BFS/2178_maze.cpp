#include <bits/stdc++.h>

using namespace std;

int main(){

    int R, C;

    cin >>R>>C;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int board[102][102] ={};
    int visit[102][102] ={};

    queue<pair<int, int> > Q;

    for(int i=0; i<R; i++){
        string s;
        cin >>s;
        for(int j=0; j<C; j++){
            board[i][j]=s.at(j)-'0';
        }
    }

    Q.push(make_pair(0, 0));
    visit[0][0]=1;

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
       

        for(int dir = 0; dir<4; dir++){
             int dist = visit[cur.first][cur.second];
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx > R-1 || ny <0 || ny > C-1) continue;
            if(visit[nx][ny]!=0 || board[nx][ny]==0) continue;

            visit[nx][ny] = ++dist;
            Q.push(make_pair(nx, ny));
        }
    }


   cout<<visit[R-1][C-1]<<endl;
    
}