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

int main() {
  int n;
  scanf("%d", &n);
  vector< vector <string> > v(4);
  for(int i = 0 ; i < n; i++) {
    string name, gen;
    cin >> name >> gen;
    if(gen == "captain") v[3].push_back(name);
    else if(gen == "man") v[2].push_back(name);
    else if(gen == "woman" || gen == "child") v[1].push_back(name);
    else if(gen == "rat") v[0].push_back(name);
  } 
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << endl;
    }
  }
}