#include "bits/stdc++.h"
using namespace std;
const int N = 1e5 + 5;
const int LN = 17;
int t;
int n , q;
int a , b;
vector < int > v[N];
int dp[LN][N];
int depth[N];
int tin[N];
int tout[N];
int far1[N];
int far2[N];
int timer;
void dfs(int node , int parent , int level){
    dp[0][node] = parent;
    depth[node] = level;
    tin[node] = ++timer;
    far1[node] = 0;
    for(int next : v[node]){
        if(next != parent){
            dfs(next , node , level + 1);
            far1[node] = max(far1[node] , far1[next] + 1);
        }
    }
    far2[node] = 0;
    tout[node] = timer;
}
void dfs2(int node , int parent){
    int mx = 0;
    for(int next : v[node]){
        if(next != parent){
            far2[next] = max(far2[next] , far2[node] + 1);
            far2[next] = max(far2[next] , mx + 1);
            mx = max(mx , far1[next] + 1);
        }
    }
    reverse(v[node].begin() , v[node].end());
    mx = 0;
    for(int next : v[node]){
        if(next != parent){
            far2[next] = max(far2[next] , mx + 1);
            dfs2(next , node);
            mx = max(mx , far1[next] + 1);
        }
    }
}
int lca(int a , int b){
    int dif = depth[a] - depth[b];
    if(dif < 0){
        dif *= -1;
        swap(a , b);
    }
    for(int i = 0 ; i < LN ; ++i){
        if(dif & (1 << i)){
            a = dp[i][a];
        }
    }
    if(a != b){
        for(int i = LN - 1 ; i >= 0 ; --i){
            if(dp[i][a] != dp[i][b]){
                a = dp[i][a];
                b = dp[i][b];
            }
        }
        a = dp[0][a];
    }
    return a;
}
int dist(int a , int b){
    return depth[a] + depth[b] - 2 * depth[lca(a , b)];
}
int moveup(int node , int k){
    for(int i = 0 ; i < LN ; ++i){
        if(k & (1 << i)){
            node = dp[i][node];
        }
    }
    return node;
}
bool isanc(int top , int bot){
    return (tin[top] <= tin[bot]) && (tout[bot] <= tout[top]);
}
int moveatob(int a , int b , int lc , int m){
    if(depth[a] - depth[lc] >= m){
        return moveup(a , m);
    }
    m -= depth[a] - depth[lc];
    a = lc;
    int dif = depth[b] - depth[lc];
    return moveup(b , dif - m);
}
int findmid(int a , int b){
    int lc = lca(a , b);
    if(depth[a] == depth[b]){
        return moveup(a , depth[a] - depth[lc] - 1);
    }
    if(depth[a] > depth[b]){
        a = moveup(a , depth[b] - depth[lc]);
        b = lc;
    }
    else{
        b = moveup(b , depth[a] - depth[lc]);
        a = lc;
    }
    int m = (depth[a] + depth[b] - 2 * depth[lc] - 1) >> 1;
    return moveatob(a , b , lc , m);
}
int val(int root , int node){
    if(isanc(node , root)){
        int ret = far2[node];
        for(int next : v[node]){
            if(depth[next] > depth[node]){
                if(!isanc(next , root)){
                    ret = max(ret , 1 + far1[next]);
                }
            }
        }
        return ret;
    }
    else{
        return far1[node];
    }
}
void solve(int a , int b){
    if(a == b){
        printf("0\n");
        return;
    }
    int m = findmid(b , a);
    printf("%d\n" , val(a , m) + dist(a , m));
}
int main(){
    scanf("%d" , &t);
    while(t--){
        scanf("%d %d" , &n , &q);
        for(int i = 1 ; i <= n ; ++i){
            v[i].clear();
        }
        for(int i = 1 ; i < n ; ++i){
            scanf("%d %d" , &a , &b);
            v[a].emplace_back(b);
            v[b].emplace_back(a);
        }
        timer = 0;
        dfs(1 , 0 , 0);
        dfs2(1 , 0);
        for(int i = 1 ; i < LN ; ++i){
            for(int j = 1 ; j <= n ; ++j){
                dp[i][j] = dp[i - 1][dp[i - 1][j]];
            }
        }
        while(q--){
            scanf("%d %d" , &a , &b);
            solve(a , b);
        }
    }
} 
