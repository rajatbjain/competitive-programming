/*
  I always did something I was little not ready to do.
  I think that's how you grow. When there's that moment 
  of 'Wow, I am not really sure I can do this...' and
  push through those moments, that's when you have a
  BREAKTHROUGH.
*/

#pragma comment(linker, "/STACK:256000000")
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

using namespace std;

void redirect_io() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
}

int main() {
  ios_base::sync_with_stdio(0);  
  redirect_io();
  int n , k;
  cin >> n >> k;
  vector< pair< int, int > > a; 
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    a.push_back(make_pair(foo, i + 1));
  }
  sort(a.rbegin(), a.rend());
  int least = 9999999;
  for(int i = 0; i < k; i++)  least = min(least, a[i].first);
  cout << least << "\n";
  for(int i = 0; i < k ; i++) cout << a[i].second << " "; 
  cout << "\n";
}
  
