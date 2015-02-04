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

void print(const string& before, const vector< string >& toprint) {
  cout << before ;
  for(int i = 0; i < (int) toprint.size() - 1; i++) {
    cout << toprint[i] << ", ";
  }
  cout << toprint[toprint.size() - 1] << "." << endl;
}

int main(int argc, char* argv[]) {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  pair< int, vector< string > > girl, taxi, pizza;
  while(n--) {
    int turns; string name;
    cin >> turns >> name;
    int a = 0, b = 0, c = 0;
    while(turns--) {
      string number;
      cin >> number;
      set< int > isTaxi;
      for(int i = 0; i < (int)number.size(); i++) 
        if(number[i] >= '0' && number[i] <= '9') 
          isTaxi.insert(number[i] - '0');
      if(isTaxi.size() == 1) {
        a++; continue;
      }
      int curr = number[0] - '0';
      bool notPizza = false;
      for(int i = 1; i < (int) number.size(); i++) {
        if(number[i] >= '0' && number[i] <= '9') {
          int next = number[i] - '0';
          if(curr > next) {
            curr = next;
          } else {
            notPizza = true;
          }
        }  
      }
      if(notPizza == false) {
        b++; continue;
      }
      c++;
    }
    if(taxi.first < a) {
      taxi.second.clear();
      taxi.second.push_back(name);
      taxi.first = a;
    } else if(taxi.first == a) {
      taxi.second.push_back(name);
    }

    if(pizza.first < b) {
      pizza.second.clear();
      pizza.second.push_back(name);
      pizza.first = b;
    } else if(pizza.first == b) {
      pizza.second.push_back(name);
    }

    if(girl.first < c) {
      girl.second.clear();
      girl.second.push_back(name);
      girl.first = c;
    }
    else if(girl.first == c) {
      girl.second.push_back(name);
    }
  }

  print("If you want to call a taxi, you should call: ", taxi.second);
  print("If you want to order a pizza, you should call: ", pizza.second);
  print("If you want to go to a cafe with a wonderful girl, you should call: ", girl.second);

}