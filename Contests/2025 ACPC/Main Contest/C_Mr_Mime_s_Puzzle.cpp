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
    int n, m; cin >> n; cin >> m; // n = without suit, m = without number
    if (n == m) {
        string trash; 
        getline(cin, trash); 
        getline(cin, trash); 
        cout << "NO" << '\n'; 
        return; 
    }
    unordered_map<int, int> without_suit; 
    unordered_map<char, int> without_num; 

    for (int i = 0; i < n; ++i) { // Reading in without_suit
        int curr; cin >> curr; 
        if (without_suit.count(curr)) without_suit[curr] += 1; 
        else without_suit[curr] = 1; 

        if (without_suit[curr] > 4) { 
            cout << "NO" << '\n'; 
            string trash; 
            getline(cin, trash); 
            getline(cin, trash); 
            return; 
        }
    }

    for (int i = 0; i < m; ++i) { // Reading in without_num
        char curr; cin >> curr;   
        if (without_num.count(curr)) without_num[curr] += 1; 
        else without_num[curr] = 1; 

        if (without_num[curr] > 13) {
            cout << "NO" << '\n'; 
            string trash; 
            getline(cin, trash); 
            return; 
        }
    }
 
    cout << "YES" << '\n'; 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc; 
    cin >> tc;
    while (tc--) solve(); 
    
    return 0; 
}
