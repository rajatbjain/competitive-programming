#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <ctime>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>    
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

class RaiseThisBarn {
    public:
    int howManyC(const string &str) {
        int cnt = 0;
        for(int i = 0 ; i < str.size(); i++) {
            if(str[i] == 'c') {
                cnt++;
            }
        }

        return cnt;
    }
    int calc(string str) {
        int num = howManyC(str);
        if(num % 2 == 1) return 0;

        int cnt = 0; bool ok = false;

        int dist1 = 0, dist2 = str.size();
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == 'c') {
                if(ok) {
                    dist2 = i;
                    break;
                }
                cnt++;
            }
            
            if(cnt == num / 2 && !ok) {
                ok = true;
                dist1 = i;
            }
        }  
        int res = dist2 - dist1;
        if(dist1 == 0 && dist2 == str.size()) {
            res = str.size() - 1;
        }
        return res;
    }
};

// CUT begin
ifstream data("RaiseThisBarn.sample");

string next_line() {
    string s;
    getline(data, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(string str, int __expected) {
    time_t startClock = clock();
    RaiseThisBarn *instance = new RaiseThisBarn();
    int __result = instance->calc(str);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        string str;
        from_stream(str);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(str, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1408333474;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 250 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "RaiseThisBarn (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
