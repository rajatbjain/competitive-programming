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

map<int, char> mapping;

void init() {
  mapping[10] = 'A';
  mapping[11] = 'B';
  mapping[12] = 'C';
  mapping[13] = 'D';
  mapping[14] = 'E';
  mapping[15] = 'F';
  mapping[16] = 'G';
  mapping[17] = 'H';
  mapping[18] = 'I';
  mapping[19] = 'J';
  mapping[20] = 'K';
}

bool check(string s) {

  for(int i = 0, j = s.size() - 1; i < s.size() && j >= 0; j--, i++) {
    if(s[i] != s[j]) return false;
  }
  return true;
}

string convert(int num, int base) {
  vector<int> v;
  while(num != 0) {
    int redun = num % base;
    v.push_back(redun);
    num /= base;
  }
  string str;
  for(int i = v.size() - 1; i >= 0; i--) {
    char a;
    if(v[i] >= 10) a = mapping[v[i]];
    else a = v[i] + '0';
    str += a;
  }
  return str;
}


int main() {
  init();
  INPUT("palsquare.in");
  OUTPUT("palsquare.out");
  int base;
  cin >> base;
  for(int i = 1; i <= 300; i++) {
    string num = convert(i * i, base);
    if(check(num)) {
      cout << convert(i, base) << " " << num << endl;
    } 
  }
  return 0;
}