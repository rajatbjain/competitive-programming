#include <iostream>
#include <cstdio>

using namespace std;

class Scanner {
public:
  inline Scanner& operator >> (int &x) {
    scanf("%d", &x);
    return *this;
  }
  inline Scanner& operator >> (long long &x) {
    scanf("%I64d", &x);
    return *this;
  }
  inline Scanner& operator >> (string &s) {
    cin >> s;
    return *this;
  }
  inline Scanner& operator >> (double &x) {
    scanf("%lf", &x);
    return *this;
  }
  inline Scanner& operator >> (vector< int > &x) {
    const int upto = x.size();
    for(int i = 0; i < upto; i++) scanf("%d", &x[i]);
    return *this;
  }
  inline Scanner& operator >> (vector< long long > &x) {
    const int upto = x.size();
    for(int i = 0; i < upto; i++) scanf("%I64d", &x[i]);
    return *this;
  }
};

class Printer {
public:
  Printer() {}
  inline Printer& operator << (const int &x) {
    printf("%d", x);
    return *this;
  }
  inline Printer& operator << (const long long &x) {
    printf("%I64d", x);
    return *this;
  }
  inline Printer& operator << (const char &x) {
    printf("%c", x);
    return *this;
  }
  inline Printer& operator << (const string& x) {
    printf("%s", x.c_str());
    return *this;
  }
  inline Printer& operator << (const pair< int, int > &x) {
    printf("[ %d, %d ]\n", x.first, x.second);
    return *this;
  }
  inline Printer& operator << (const vector< int > &x) {
    const int n = x.size();
    printf("[ ");
    for(int i = 0; i < n; i++) printf("%d ", x[i]);
    printf("]");
    return *this;
  }
  inline Printer& operator << (const vector< long long > &x) {
    const int n = x.size();
    printf("[ ");
    for(int i = 0; i < n; i++) printf("%I64d ", x[i]);
    printf("]");
    return *this;
  }
};

Scanner in = Scanner();
Printer out = Printer();

int main() {
  int a, b, c;
  long long x, y, z;

  in >> a >> b >> c;
  cout << a << " " << b << " " << c << endl;

  in >> x >> y >> z;
  cout << x << " " << y << " " << z << endl;
}