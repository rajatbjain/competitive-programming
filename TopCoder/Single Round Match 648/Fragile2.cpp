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

class Fragile2 {
    public:
     int find_connected(bool tmp[23][23], int n, int a, int b) {
       int seen[23];
       memset(seen, 0, sizeof seen);

       int ret = 0;

       for(int i = 0; i < n; i++) {
        
         if(i == a || i == b) continue;

         if(seen[i]) continue;

         ret++;
         seen[i] = 1;
         queue< int > q;
         q.push(i);
         while(!q.empty()) {
          int u = q.front();
          q.pop();

          for(int id = 0; id < n; id++) {
            if(tmp[u][id]) {
              int v = id;
              if(seen[v]) continue;
              seen[v] = true;
              q.push(v);
            }
          }

         }

       }

       return ret;

     }
     
     int countPairs(vector<string> graph) {
      int n = graph.size();
      bool g[23][23];
  

      for(int i = 0; i < 23; i++) 
        for(int j = 0; j < 23; j++)
          g[i][j] = 0;

      for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          if(graph[i][j] == 'Y') g[i][j] = 1;
        }
      }

      int tot = find_connected(g, n, -1, -1);
 
      int return_val = 0;

      for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++ ) {


           bool tmp[23][23];

           for(int x = 0; x < n; x++)
             for(int y = 0; y < n; y++) 
               tmp[x][y] = g[x][y];

           for(int x = 0; x < n; x++) {
            tmp[x][j] = 0;
            tmp[j][x] = 0;
           }
           
           for(int x = 0; x < n; x++) {
            tmp[x][i] = 0;
            tmp[i][x] = 0;
           }

           for(int x = 0; x < n; x++) {
             for(int y = 0; y < n; y++) {
              cerr << tmp[x][y] << " ";
             }
             cerr << endl;
           }

           int ans = find_connected(tmp, n, i, j);
           cerr << ans << endl;
           if(ans > tot) {
            cerr << "i : " << i << " j " << j << endl;
            return_val++;
           }
        }

      }

      cerr  << "#######\n\n";

      return return_val;
    }
};

// CUT begin
ifstream data("Fragile2.sample");

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

bool do_test(vector<string> graph, int __expected) {
    time_t startClock = clock();
    Fragile2 *instance = new Fragile2();
    int __result = instance->countPairs(graph);
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
        vector<string> graph;
        from_stream(graph);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(graph, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1422878703;
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
        cout << "Fragile2 (500 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
