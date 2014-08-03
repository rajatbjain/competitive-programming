#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>  
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

string pwd;

void printdir() {
  string print = (pwd.empty()) ? ("/") : (pwd + "/");
  cout << print << endl;
}

void exec(string &cmd, string &dir) {  
  if (cmd == "cd") {
  
    if(dir == ".."){
      if(pwd.empty()) return;
      int pos = pwd.rfind('/');
      if(pos == string::npos) return;
      pwd = pwd.substr(0, pos);
    }

    else if(dir.find('/') == string::npos) {
      pwd += "/" + dir;
      return;
    }
    
    else {
      string str;
      if(dir[0] == '/') pwd.clear(), dir = dir.substr(1, dir.length()-1);
      dir += "/";
      for(int i = 0; i < dir.length(); i++) {
        if(dir[i] != '/') {
          str += dir[i];
        }
        else {
          exec(cmd, str);
          str.clear();
        }
      }
    }
  }

  else if (cmd == "pwd") {
    printdir();
  }
}


int main() {
  //freopen("input.txt", "r", stdin);
  int n;
  scanf("%d",&n);
  for(int i = 0; i < n; i++) {
    string cmd, dir;
    cin >> cmd;
    if(cmd == "cd") cin >> dir;
    exec(cmd, dir);
  }
}