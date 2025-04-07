//! Don't define LOCAL for submission
// #define LOCAL

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

void solve() {
    ld a, b; cin >> a; cin >> b; 
    
    // If equal, return height of both added 
    if (a == b) cout << setprecision(10) << ((sqrt(3) * a) / 2) << '\n'; 

    // Otherwise if not equal, larger circle on bottom & smaller on top 
    else {
        // If test case 2 arrangement 
        if (b / 4 > a) cout << setprecision(13) << b / sqrt(3) << '\n'; 
        else if (a / 4 > b) cout << setprecision(13) << a / sqrt(3) << '\n';

        // Otherwise if test case 3 arrangement 
        else cout << setprecision(15) << (((sqrt(3) * a) / 2) + ((sqrt(3) * b) / 2)) / 2 << '\n'; 
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--) solve(); 
    
    return 0; 
}
