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

// Cut From Here

int gcd(int a, int b) {
  while(a > 0 && b > 0) {
    if(b > a) swap(a, b);
    a %= b;
  }
  return a + b;
}

void TestCaseGenerator() {
  srand(time(NULL));
  for(int i = 1; i <= 5; i++) {
    int x = rand() % 5 + 1;
    cout << i << " " << x << " " << gcd(x , i) << endl;
  }
}

void Correctness(vector< int > a, int k) {
  int x = 0;
  for(int i = 1; i < (int) a.size(); i++) {
    int w = gcd(i, a[i]);
    cout << i << " " << a[i] << " " << w << endl;
    if(w > 1) x++;
  }
  cout << "Expected K: " << k << " Got X: " << x << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  // TestCaseGenerator();
  
  int n, k;
  cin >> n >> k;
  vector< int > a;
  if(k == n) {
    cout << -1 << endl;
    return 0;
  }
  
  a.resize(n + 1);

  for(int i = n; i >= 1; i--) a[i] = i;
  
  for(int i = 2; i <= n - k; i++) {
    a[i - 1] = a[i];
  }

  a[n - k] = 1;

  for(int i = 1; i <= n; i++) cout << a[i] << " ";
  cout <<endl;
  //Correctness(a, k);
}