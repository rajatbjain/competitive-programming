/*
  I always did something I was little not ready to do.
  I think that's how you grow. When there's that moment 
  of 'Wow, I am not really sure I can do this...' and
  push through those moments, that's when you have a
  BREAKTHROUGH.
*/

#include <cstdio>
#include <bitset>
#include <cassert>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>
#include <list>
#pragma comment(linker, "/STACK:256000000")

using namespace std;

int main() {

  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  if(n == 1 || n == 2) { cout << -1 << endl; return 0; }
  if(n == 3) { cout << 210 << endl; return 0; }
  string s = "";
  for(int i = 0; i < n; i++) s += '0';
  s[0] = '1';
  for(int i = 0; i <= 9; i++)
    for(int j = 0; j <= 9; j++) {
      if((i + j + 1) % 3 == 0) {
        string tmp(s);
        tmp[n - 3] = i + '0';
        tmp[n - 2] = j + '0';
        int sum = 0;
        for(int id = 0; id < tmp.size(); id++) sum = (sum * 10) % 7 + (tmp[id] - '0') % 7;
        if(sum == 0) {
          cout << tmp << endl;
          return 0;
        }
      }
    }
}