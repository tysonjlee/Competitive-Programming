//! Don't define LOCAL for submission
#define LOCAL

#include <bits/stdc++.h>
using namespace std; 

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// #define int long long
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

struct Node {
    ll satisfaction_val; 
    vector<ll> adj_list; 
}; 
void dfs(int u) {
    
}
void solve() {
    // Process input 
    ll D, P, H; cin >> D; cin >> P; cin >> H; 

    vector<Node> G(D + 1); 
    for (int i = 1; i <= D; ++i) cin >> G[i].satisfaction_val; 

    for (int i = 0; i < P; ++i) {
        ll first_num; cin >> first_num; 
        ll second_num; cin >> second_num; 

        G[first_num].adj_list.push_back(second_num); 
    }

    // Find connected components 
    vector<vector<ll>> connected_components; 
    int curr_connected_component = 0; 
    vector<bool> visited(D + 1, false); 
    for (int i = 1; i < D; ++i) {
        if (visited[i] == false) {
            visited[i] = true; 
            connected_components[curr_connected_component].push_back(i); 
            dfs(i); 
        }
    }

    // Solving 
    for (int i = 0; i < H; ++i) {
        ll curr_hunger; cin >> curr_hunger; 

    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--) solve(); 
    
    return 0; 
}
