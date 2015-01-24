#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

class TravellingSalesmanEasy {
    public:
    int getMaxProfit(int M, vector<int> profit, vector<int> city, vector<int> visit) {

        vector< int > cityIndex[123];

        for(int i = 0; i < 123; i++) {
            cityIndex[i].clear();
        }

        for(int i = 0; i < (int) city.size(); i++) {
            cityIndex[city[i]].push_back(profit[i]);
        }

        for(int i = 1; i <= 100; i++) {
            sort(cityIndex[i].begin(), cityIndex[i].end());
        }

        long long ans = 0;

        for(int i = 0; i < (int) visit.size(); i++) {
            int x = visit[i];

            if(cityIndex[x].empty()) continue;
            ans += cityIndex[ x ][ cityIndex[ x ].size() - 1 ];
            cityIndex[x].erase(cityIndex[x].begin() + cityIndex[x].size() - 1);
        }

        return ans;
    }
};

// CUT begin
ifstream data("TravellingSalesmanEasy.sample");

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

bool do_test(int M, vector<int> profit, vector<int> city, vector<int> visit, int __expected) {
    time_t startClock = clock();
    TravellingSalesmanEasy *instance = new TravellingSalesmanEasy();
    int __result = instance->getMaxProfit(M, profit, city, visit);
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
        int M;
        from_stream(M);
        vector<int> profit;
        from_stream(profit);
        vector<int> city;
        from_stream(city);
        vector<int> visit;
        from_stream(visit);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(M, profit, city, visit, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1422119170;
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
        cout << "TravellingSalesmanEasy (500 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
