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

using namespace std;

bool range(int x, int y, int A, int B) {
  return (0 <= x && x < A && 0 <= y && y < B);
}

class RobotOnMoonEasy {
public:
  string isSafeCommand(vector<string> board, string S) {
    int n = board.size();
    for(int i = 0; i < n; i++) {
      int sz = board[i].size();
      for(int j = 0; j < sz; j++) {
        if(board[i][j] == 'S') {
          int len = S.size();
          for(int id = 0; id < len; id++) {
            if(S[id] == 'U') {
              if(!range(i - 1, j, n, sz)) return "Dead";
              if(board[i - 1][j] == '#') continue;
              else i--;
            }
            if(S[id] == 'D') {
              if(!range(i + 1, j , n, sz)) return "Dead";
              if(board[i + 1][j] == '#') continue;
              else i++;
            }
            if(S[id] == 'L') {
              if(!range(i, j - 1, n, sz)) return "Dead";
              if(board[i][j - 1] == '#') continue;
              else j--;
            }
            if(S[id] == 'R') {
              if(!range(i, j + 1, n, sz)) return "Dead";
              if(board[i][j + 1] == '#') continue;
              else j++;
            }
          }
          return "Alive";
        } 
      }
    }
    return "Dead";
  }
};

// CUT begin
ifstream data("RobotOnMoonEasy.sample");

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

bool do_test(vector<string> board, string S, string __expected) {
  time_t startClock = clock();
  RobotOnMoonEasy *instance = new RobotOnMoonEasy();
  string __result = instance->isSafeCommand(board, S);
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
    vector<string> board;
    from_stream(board);
    string S;
    from_stream(S);
    next_line();
    string __answer;
    from_stream(__answer);

    cases++;
    if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
      continue;

    cout << "  Testcase #" << cases - 1 << " ... ";
    if ( do_test(board, S, __answer)) {
      passed++;
    }
  }
  if (mainProcess) {
    cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
    int T = time(NULL) - 1425142874;
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
    cout << "RobotOnMoonEasy (250 Points)" << endl << endl;
  }
  return run_test(mainProcess, cases, argv[0]);
}
// CUT end
