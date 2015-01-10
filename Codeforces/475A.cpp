#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

string s[] = {
  "+------------------------+",
  "|#.#.#.#.#.#.#.#.#.#.#.|D|)",
  "|#.#.#.#.#.#.#.#.#.#.#.|.|",
  "|#.......................|",
  "|#.#.#.#.#.#.#.#.#.#.#.|.|)",
  "+------------------------+"
};

int main() {
  const int N = 6; // 1 - 4;
  int t;
  cin >> t;
  for(int i = 1; i < 22 && t > 0; i++) {
    for(int j = 1; j < 5 && t > 0; j++) {
      if(s[j][i] == '#') {
        s[j][i] = 'O';
        t--;
      }
    }
  }
  
  for(int i = 0; i < N; i++) {
    cout << s[i] << endl;
  }
}