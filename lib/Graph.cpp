#include <bits/stdc++.h>
using namespace std;

class Graph {
    private:
        int siz = 0;
        vector<vector<int>> g;
        vector<int> bfs (int st , vector<vector<int>> g) {
            vector<int> dist(siz , -1);
            queue<int> qe;
            dist[st] = 0;
            qe.push(st);
            while (!qe.empty()) {
                int pos = qe.front();
                qe.pop();
                for (int v : g[pos]) {
                    if(dist[v] != -1) continue;
                    dist[v] = dist[pos] + 1;
                    qe.push(v);
                }
            }
            return dist;
        }
    public:
        Graph (int n = 0) {
            siz = n;
            g = vector<vector<int>>(siz , vector<int>());
        }
        void unite (int u , int v) {
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> dis (int u) {
            return bfs(u , g);
        }
        bool same (int u , int v) {
            vector<int> dist = bfs(u , g);
            if(dist[v] != -1) return true;
            else return false;
        }
};