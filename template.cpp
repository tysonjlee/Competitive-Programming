//! hi

// Libraries
#include <bits/stdc++.h> // TODO: Make decision to switch to GCC for this to work or to simply incldue all header files
using namespace std;

// Overhead
// TODO: Delete unnecessary 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() {cerr << endl;}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// Definitions 
// #define int long long
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) ((a).begin(), (a).end())

// Constants 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// Problem 
void solve() {
    
}

int main() {
    // Improve I/O performance 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // Solve problem 
    int tc = 1;
    // cin >> tc;
    while (tc--) solve(); 
    
    return 0; 
}