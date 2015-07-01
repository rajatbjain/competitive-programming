#include <bits/stdc++.h>

int run(bool);
using namespace std;

int has[12345];

bool way(const pair< int, int >& a, const pair< int, int >& b) {
    return a.first > b.first;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector< int > a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector< int > b(n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        b[i] = a[ (i + n / 2) % n];
        if(a[i] != b[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " " << b[i] << endl;
    }
}

int main(int argc, char** argv) {
    return run(argc >= 2);
}

int run(bool debugging) {
    if(debugging) {
        string in = "test.in";
        if(fopen(in.c_str(), "r") != NULL) {
            freopen(in.c_str(), "r", stdin);
        }
    }
    int tests = 1;
    for(int cur = 0; cur < tests; cur++) {
        solve();
    }
    return 0;
}
