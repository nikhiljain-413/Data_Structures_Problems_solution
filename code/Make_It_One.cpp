#include <bits/stdc++.h>
using namespace std;
#define Maxn 1000005
#define int long long

const int mod = 998244353;
map <int,  vector<int>> G;
map <int, int> anss;
bool vis[Maxn];
int n, m;

int query(int x) {
    if(vis[x]) puts("-1"), exit(0);
    if(x == 1) return 0;
    if(anss[x]) return anss[x]; 
    vis[x] = 1;
    int res = 0; 
    int xx = x;
    for(int i = 2; i * i <= x && xx > 1; ++ i) {
        if(xx % i) continue; 
        int cnt = 0;
        while(! (xx % i)) xx /= i, cnt ++;
        (res += (cnt * query(i)) % mod) %= mod;
    } 
    if(xx == x) {
        if(G[x].empty()) { 
            vis[x] = 0; 
            return anss[x] = 1;
        }
        else 
            for(int y : G[x]) (res += query(y)) %= mod;
        vis[x] = 0; return anss[x] = res + 1;
    } 
    if(xx > 1) (res += query(xx)) %= mod;
    vis[x] = 0; 
    return anss[x] = res; 
}

signed main() {
    scanf("%lld%lld", &n, &m);
    int x,y;
    for(int i = 1; i <= m; ++ i){
        scanf("%lld%lld", &x, &y);
        G[x].push_back(y);
    }
    printf("%lld", query(n));
}
