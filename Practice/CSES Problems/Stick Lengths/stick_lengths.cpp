#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std; 

// #define int long long
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
int testl = INT_MAX; 
const ld EPS = 1e-9;

void solve() {
    int n; cin >> n;
    vector<int> sticks(n); 
    for (int i = 0; i < n; ++i) {
        int n; cin >> n; 
        sticks[i] = n; 
    }

    sort(all(sticks));
    
    int median = ceil(sticks[n / 2]); 

    int min_cost = 0; 
    for (int i = 0; i < n; ++i) {
        min_cost += abs(sticks[i] - median); 
    }

    cout << min_cost; 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--) solve(); 
    
    return 0; 
}