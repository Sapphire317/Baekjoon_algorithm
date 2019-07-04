#include <bits/stdc++.h>

using namespace std;

int dx[6]={1, 0, -1, 0, 0, 0};
int dy[6]={0, 1, 0, -1, 0 , 0};
int dz[6]={0, 0, 0, 0, 1, -1};

int M,N,H;
int board[102][102][102]={};
int visit[102][102][102]={};
queue<pair<int, pair<int, int> > > Q;

int main(){

    int count = 0;
    int raw = 0;

   cin >> N >> M >>H;

    for(int i=0; i<H; i++){
        for(int j=0; j<M; j++){
            for(int k=0; k<N; k++){
                int num;
                cin>>num;
                board[i][j][k]=num;
                if(num==1){
                    visit[i][j][k]=num;
                    Q.push(make_pair(i, make_pair(j, k)));
                    count++;
                }else if(num==0){
                    raw++;
                }
            }
        }
    }

    int day=0;
    int newCt = 0;
    int temp=4;

    //If there is no raw tomato
    if(raw==0){
        cout<<0; return 0;
    }else{
        while(!Q.empty()){
        
            day++;
        while(count--){
           
            auto cur = Q.front(); Q.pop();
                    
                    for(int dir=0; dir<6; dir++){
                        int nx = cur.second.first + dx[dir];
                        int ny = cur.second.second+ dy[dir];
                        int nz = cur.first+ dz[dir];


                        if(nx <0 || nx > M-1 || ny <0 || ny > N-1 || nz <0 || nz > H-1 ) continue;
                        if(board[nz][nx][ny]==1 || board[nz][nx][ny]==-1 || visit[nz][nx][ny]==1) continue;
                        

                        Q.push(make_pair(nz, make_pair(nx, ny)));
                        newCt++;
                        raw--;
                        visit[nz][nx][ny]=1;

                    }
        }

        if(raw<=0)break;
        count = newCt;
        newCt=0;
    }
    }

    if(raw>0)cout<<-1;
    else cout<<day;
        
    
    





}