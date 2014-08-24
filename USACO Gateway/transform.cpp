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

using namespace std;

#define INPUT(file) freopen(file, "r", stdin)
#define OUTPUT(file) freopen(file, "w", stdout)

int n;
bool match(const vector< vector <char> > &a, const vector< vector <char> > &b) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i][j] != b[i][j]) return false;
    }
  }
  return true;
}

bool ninety(const vector< vector <char> > &a, const vector< vector <char> > &b) {
  for(int i = 0, s = n - 1; i < n && s >= 0; i++, s--) {
    for(int j = 0, r = 0; j < n && r < n; j++, r++) {
      if(a[i][j] != b[r][s]) return false;
    }
  }
  return true;
}

bool oneeighty(const vector< vector <char> > &a, const vector< vector <char> > &b) {
  for(int i = 0 , s = n - 1; i < n && s >= 0; s--, i++) {
    for(int j = 0, r = n - 1; j < n && r >= 0; r--, j++) {
      if(a[i][j] != b[s][r]) return false;
    }
  }
  return true;
}

bool twoseventy(const vector< vector <char> > &a, const vector< vector <char> > &b) {
  for(int i = 0, s = 0; i < n && s < n; s++, i++) {
    for(int j = 0, r = n - 1; j < n && r >= 0; r--, j++) {
      if(a[i][j] != b[r][s]) return false;
    }
  }
  return true;
}

bool reflection(const vector< vector <char> > &a, const vector< vector <char> > &b) {
  vector< vector <char> > ref(n, vector<char>(n));
  for(int i = 0, s = 0; i < n && s < n; i++, s++) {
    for(int j = 0, r = n - 1; j < n && r >= 0; j++, r--) {
      ref[i][j] = a[s][r];
    }
  }
  if(match(ref, b)) {
    cout << "4\n";
    return true;
  }
  if(ninety(ref, b) || oneeighty(ref, b) || twoseventy(ref, b)) {
    cout << "5\n";
    return true;
  }

  return false;
}

int main() {
  INPUT("transform.in");
  OUTPUT("transform.out");
  cin >> n;
  vector< vector <char> > a(n, vector<char>(n)); vector< vector <char> > b(n, vector<char>(n));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char s;
      cin >> s;
      a[i][j] = s;
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char s;
      cin >> s;
      b[i][j] = s;
    }
  }
  bool ok = false;
  ok = ninety(a, b);
  if(ok) {
    cout << "1\n";
    return 0;
  }
  ok = oneeighty(a, b);
  if(ok) {
    cout << "2\n";
    return 0;
  }
  ok = twoseventy(a, b);
  if(ok) {
    cout << "3\n";
    return 0;
  }
  ok = reflection(a, b);
  if(ok) return 0;

  ok = match(a, b);
  if(ok) {
    cout << "6\n";
    return 0;
  }
  else cout << "7\n";
  
}