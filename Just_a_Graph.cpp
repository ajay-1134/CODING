#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<vector<int>>graph(1005);
int vis[1005];

void bfs(int u){
    queue<int>q;
    q.push(u);
    while(q.size() > 0){
        int node = q.front();
        q.pop();
        vis[node] = true;

        for(int j = 0;  j < graph[node].size(); j++){
            if(vis[graph[node][j]] == false){
                q.push(graph[node][j]);
            }
        }
    }

    return ;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int w[n];
        for(int i = 0; i < n; i++){
            cin >> w[i];
            graph[i+1].clear();
            vis[i+1] = 0;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if((j-i) != (w[j-1] - w[i-1])){
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }

        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(vis[i] == 0){
                cnt++;
                bfs(i);
            }
        }

        cout << cnt << endl;
    }
    return 0;
}