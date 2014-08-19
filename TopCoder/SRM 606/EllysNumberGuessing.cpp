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

class EllysNumberGuessing {
    public:

    bool range(long long n) {
        if(n < 1 || n > 1000000000) return false;
        else return true;
    }

    int getNumber(vector<int> guesses, vector<int> answers) {
        map<long long, long long> m;
        for(int i = 0; i < guesses.size(); i++) {
            m[guesses[i] - answers[i]]++;
            m[guesses[i] + answers[i]]++;
        }

        map<long long, long long>::iterator it;
        long long num = -999;
        int cnt = 0;
        it = m.begin();
        for(; it != m.end(); it++) {
            if(it->second == guesses.size() && range(it->first)) {
                num = it->first;
                cnt++;
            }
        }
        if(cnt > 1) {
            return -1;
        }

        else if(cnt == 0) {
            return -2;
        }
        else {
            return num;
        }
    }   
};

// CUT begin
ifstream data("EllysNumberGuessing.sample");

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

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
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

bool do_test(vector<int> guesses, vector<int> answers, int __expected) {
    time_t startClock = clock();
    EllysNumberGuessing *instance = new EllysNumberGuessing();
    int __result = instance->getNumber(guesses, answers);
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
        vector<int> guesses;
        from_stream(guesses);
        vector<int> answers;
        from_stream(answers);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(guesses, answers, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1408294862;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 500 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
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
        cout << "EllysNumberGuessing (500 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
