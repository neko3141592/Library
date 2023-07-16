#include <bits/stdc++.h>
using namespace std;

class UnionFind {
    private:
        vector<int> par , siz;
    public: 
        UnionFind (int n = 0) {
            par = vector<int>(n,-1);
            siz = vector<int>(n,1);
        }
        int root (int x) {
            while(true) {
                if(par[x] == -1) break;
                else x = par[x];
            }
            return x;
        }
        void unite (int u , int v) {
            int root_u = root(u);
            int root_v = root(v);
            if(root_u == root_v) return;
            if(siz[root_u] < siz[root_v]) {
                par[root_u] = root_v;
                siz[root_v] += siz[root_u];
            } else {
                par[root_v] = root_u;
                siz[root_u] += siz[root_v];
            }
        } 
        bool same (int u , int v) {
            if(root(u) == root(v)) return true;
            else return false;
        }
};

int main (void) {
    int n , q;
    cin >> n >> q;
    UnionFind g(n);
    for(int i = 0; i < q; i++) {
        int t , u , v;
        cin >> t >> u >> v;
        u--; v--;
        if(t == 1) g.unite(u , v);
        else cout << (g.same(u , v) ? "Yes" : "No") << endl;
    }
    return 0;
}