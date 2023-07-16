//07/07/23 14:28:30
#include <bits/stdc++.h>
#include <atcoder/all>
#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i,n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i,l,r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define input(a) for(int i = 0; i < a.size(); i++) cin >> a[i];
#define endl '\n'
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;
using LP = pair<long long,long long>;
using SP = pair<string,string>;
using vin = vector<int>;
using vll = vector<long long>;
using vst = vector<string>;
using vch = vector<char>;
using mint1 = modint1000000007;
using mint9 = modint998244353;
const int INF = 1e9;
const long long LINF = 1e18;
const int dx[] = {0,1,0,-1,-1,1,-1,1};
const int dy[] = {1,0,-1,0,1,1,-1,-1};
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b;return true;}return false;}
//-----def end-----//

vector<pair<char,int>> rle(const string& s){
    vector<pair<char,int>> res;
    for(char c : s){
        if(res.size() && res.back().first == c){
            res.back().second++;
        } else {
            res.emplace_back(c , 1);
        }
    }
    return res;
}

int main () {

	return 0;
}