#include <iostream>
#include <cstdio>

using namespace std;

struct input { 
  inline input& operator>> (int& x){scanf("%d", &x); return *this;}
  inline input& operator>> (long long& x){scanf("%I64d", &x); return *this;}
  inline input& operator>> (char& x){scanf(" %c", &x); return *this;}
}in;


int main() {
  int a, b, c;
  long long x, y, z;

  in >> a >> b >> c;
  cout << a << " " << b << " " << c << endl;

  in >> x >> y >> z;
  cout << x << " " << y << " " << z << endl;
}