#include <bits/stdc++.h>

int run(bool);
using namespace std;

int solve() {
    string s;
    cin >> s;
    int hs[10];
    for(int &i : hs) {
        i = 0;
    }
    for(char ch : s) {
        hs[ch - '0']++;
    }
    for(int num = 0; num <= 1111; num += 8) {
        int req[10];
        for(int& i : req) {
            i = 0;
        }
        int tmp = num;
        string t;
        do {
            req[tmp % 10]++;
            t.push_back(tmp % 10 + '0');
            tmp /= 10;
        } while(tmp > 0);
        bool ok = true;
        for(int i = 0; i < 10; i++) {
            if(req[i] != 0 && hs[i] < req[i]) {
                ok = false;
            } 
        }
        reverse(t.begin(), t.end());
        if(ok) {
            int j = 0;
            for(int i = 0; i < s.size() && j < t.size(); i++) {
                if(t[j] == s[i]) j++;
            }
            if(j != t.size()) {
                continue;
            }
            cout << "YES\n";
            cout << num << "\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
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
