#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
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
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
   int pointsA = max( (3 * a) / 10 , a -  ((a / 250) * c));
   int pointsB = max((3 * b) / 10, b - ((b / 250) * d));

   if(pointsA > pointsB) {
    puts("Misha");
   }
   else if(pointsA < pointsB) {
    puts("Vasya");
   }
   else {
    puts("Tie");
   }

}