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

#define INPUT(file) freopen(file, "r", stdin)
#define OUTPUT(file) freopen(file, "w", stdout)

map<char, int> value;

void init() {
  value['A'] = 2;
  value['B'] = 2;
  value['C'] = 2;
  value['D'] = 3;
  value['E'] = 3;
  value['F'] = 3;
  value['G'] = 4;
  value['H'] = 4;
  value['I'] = 4;
  value['J'] = 5;
  value['K'] = 5;
  value['L'] = 5;
  value['M'] = 6;
  value['N'] = 6;
  value['O'] = 6;
  value['P'] = 7;
  value['R'] = 7;
  value['S'] = 7;
  value['T'] = 8;
  value['U'] = 8;
  value['V'] = 8;
  value['X'] = 9;
  value['Y'] = 9;
  value['Z'] = 9;
}

inline string inNumber(string str) {
  string numbers;
  for(int i = 0; i < str.size(); i++) {
    int x = value[str[i]];
    numbers += x + '0';
  }
  return numbers;
}

int main() {

  init();

  INPUT("namenum.in");
  OUTPUT("namenum.out");
  string word;
  cin >> word;
  map<string, int> has;

  ifstream fin("dict.txt");
  string str;
  while(getline(fin, str)){ 
    if(str.size() == word.size() && inNumber(str) == word) has[str] = 1;
  }
  fin.close();
  
  if(has.empty()) {
    cout << "NONE\n";
    return 0;
  }

  map<string, int>::iterator itr;
  itr = has.begin();
  for( ; itr != has.end(); itr++) cout << itr->first << endl;

}