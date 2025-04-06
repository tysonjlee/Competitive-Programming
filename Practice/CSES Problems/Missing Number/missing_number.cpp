#include <bits/stdc++.h>
using namespace std; 

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
    int n; cin >> n; 
    int real_sum = 0; 
    int expected_sum = 0; 
    int j = 1; 
    for (int i = 0; i < n - 1; ++i) {
        int n;
        cin >> n; 
        real_sum += n; 

        expected_sum += j; 
        ++j; 
    }

    expected_sum += n; 

    cout << expected_sum - real_sum;  
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--) solve(); 
    
    return 0; 
}