// saipp

#include <iostream>
#include <string>
using namespace std; 

// #define int long long
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) ((a).begin(), (a).end())

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    string text; cin >> text; 
    string pattern; cin >> pattern; 
    int n = text.size(); 
    int m = pattern.size(); 

    int num_occurrences = 0; 

    for (int i = 0; i < n; ++i) { // Going through text 
        if (text[i] == pattern[0]) {
            for (int j = 1; j < m; ++j) { // Going through pattern 
                if (text[i + j] != pattern[j]) break; 
                if (j == m - 1) ++num_occurrences; 
            }
            
        }
    }

    cout << num_occurrences; 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--) solve(); 
    
    return 0; 
}