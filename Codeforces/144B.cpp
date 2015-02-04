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

struct Tuple {
  int x, y, r;
  void make_tuple(int a, int b, int c) {
    this->x = a;
    this->y = b;
    this->r = c;
  }
}points[1010];

int main() {
  ios_base::sync_with_stdio(0);
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int qq;
  cin >> qq;
  for( int i = 0; i < qq; i++) {
    int a, b, c; 
    cin >> a >> b >> c;
    points[i].make_tuple(a, b, c);
  }
  int total = 0;
  if(x1 > x2) swap(x1, x2);
  if(y1 > y2) swap(y1, y2);

  vector< pair< int, int > > perimeterPoints;

  for(int x = x1 + 1; x < x2; x++) perimeterPoints.push_back(make_pair(x, y1));
  for(int x = x1 + 1; x < x2; x++) perimeterPoints.push_back(make_pair(x, y2));
  for(int y = y1; y <= y2; y++) perimeterPoints.push_back(make_pair(x1, y));
  for(int y = y1; y <= y2; y++) perimeterPoints.push_back(make_pair(x2, y));

  for(int id = 0; id < (int) perimeterPoints.size(); id++) {
    int x = perimeterPoints[id].first;
    int y = perimeterPoints[id].second;
    bool found = false;
    for(int i = 0; i < qq; i++) {
      if((x - points[i].x) * (x - points[i].x) + 
        (y - points[i].y) * (y - points[i].y) <= points[i].r * points[i].r) {
          found = true;
          break;
      } 
    }
    if(!found) {
      total++;
    }
   }
  cout << total << '\n';
}