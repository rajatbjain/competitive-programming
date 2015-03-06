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

bool grid[400][600];

int get(int i, int j) {
  stack < pair< int, int > > S;
  S.push(make_pair(i, j));
  int area = 0;
  while(!S.empty()) {
    int x = S.top().first, y = S.top().second;
    S.pop();
    if(grid[x][y]) continue;
    grid[x][y] = true;
    area++;
    if(x - 1 >= 0) S.push(make_pair(x - 1, y));
    if(x + 1 < 400) S.push(make_pair(x + 1, y));
    if(y - 1 >= 0) S.push(make_pair(x, y - 1));
    if(y + 1 < 600) S.push(make_pair(x, y + 1));
  }
  return area;
}

class grafixMask {
public:
  vector<int> sortedAreas(vector<string> rectangles) {
    for(int i = 0; i < 400; i++) {
      for(int j = 0; j < 600; j++) {
        grid[i][j] = false;
      }
    }
    int n = rectangles.size();
    for(int i = 0; i < n; i++) {
      istringstream in(rectangles[i]);
      int x, y, xx, yy;
      in >> x >> y >> xx >> yy;
      for(int i = x; i <= xx; i++) {
        for(int j = y; j <= yy; j++) {
          grid[i][j] = true;
        }
      }
    }
    vector< int > ans;
    for(int i = 0; i < 400; i++) {
      for(int j = 0; j < 600; j++) {
        if(!grid[i][j]) ans.push_back(get(i, j));
      }
    }
    sort(ans.begin(), ans.end());
    return ans;
  }
};

// CUT begin
ifstream data("grafixMask.sample");

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

template <typename T> string to_string(vector<T> ts) {
stringstream s;
s << "[ ";
  for (int i = 0; i < (int) ts.size(); ++i) {
    if (i > 0) s << ", ";
    s << to_string(ts[i]);
  }
  s << " ]";
return s.str();
}

bool do_test(vector<string> rectangles, vector<int> __expected) {
  time_t startClock = clock();
  grafixMask *instance = new grafixMask();
  vector<int> __result = instance->sortedAreas(rectangles);
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
    vector<string> rectangles;
    from_stream(rectangles);
    next_line();
    vector<int> __answer;
    from_stream(__answer);

    cases++;
    if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
      continue;

    cout << "  Testcase #" << cases - 1 << " ... ";
    if ( do_test(rectangles, __answer)) {
      passed++;
    }
  }
  if (mainProcess) {
    cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
    int T = time(NULL) - 1425306662;
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
    cout << "grafixMask (500 Points)" << endl << endl;
  }
  return run_test(mainProcess, cases, argv[0]);
}
// CUT end
