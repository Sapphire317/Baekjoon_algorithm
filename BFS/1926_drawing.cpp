#include "bits/stdc++.h"

using namespace std;


int main(){
    int R, C;
    cin>>R>>C;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0 , 1, 0, -1};
    int board[501][501];
    int visit[501][501];
    int dotCt=0;
    int paintCt=0, maxWidth=0;

    queue<pair<int, int> > Q;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            int temp; cin>>temp;
            board[i][j]=temp;
            if(temp==1)dotCt++;
        }
    }

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){

            if(board[i][j]){
                Q.push(make_pair(i,j));
                visit[i][j]=1;
                board[i][j]=0;
                int width = 0;
                paintCt++;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    width++;
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if(nx < 0 || nx >R || ny < 0 || ny> C) continue;
                        if(visit[nx][ny] || board[nx][ny]!=1) continue;

                        visit[nx][ny]=1;
                        board[nx][ny]=0;
                        Q.push(make_pair(nx, ny));
                    }
                }

                if(width > maxWidth) maxWidth=width;
            }
        }
    }

    cout<<paintCt<<endl;
    cout<<maxWidth<<endl;



    



}