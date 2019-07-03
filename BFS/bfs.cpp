#include <bits/stdc++.h>

using namespace std;

#define X first;
#define Y second;

int board[502][502] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} };


bool visit[502][502];
int n = 7, m = 10;

//down, right, up, left
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int> > Q;

    //Put the first note into Q and check visit.
    visit[0][0]=1;
    Q.push(make_pair(0,0));

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        cout << '('<<cur.first << ", "<<cur.second <<')';
        for(int dir = 0; dir<4; dir++){
            int dirx = cur.first + dx[dir];
            int diry = cur.second + dy[dir];

            //cout << '('<<dirx << ", "<<diry <<')';
            //out of range
            if(dirx < 0 || dirx >=n || diry <0 || diry >= m) continue;
            //if already visited or it is wall.
            if(visit[dirx][diry] == 1 || board[dirx][diry]!=1) continue;
            visit[dirx][diry]=1;
            Q.push(make_pair(dirx,diry));
        }
    }



}