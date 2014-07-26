/*
    Template: Rajat Jain
    Username: thisisrajat (Github, SPOJ), rj10 (TC, Codeforces, Codechef..)

*/

// Include(s)
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <set>
#include <iterator>
#include <utility>
#include <functional>

// Define(s)
#define FILEREAD(name) freopen(name, "r", stdin)
#define FILEWRITE(name) freopen(name, "w", stdout)
#define PB(value) push_back(value)
#define SIZE(container) container.size()
#define ZEROSET(array) memset(array, 0, sizeof(array))
#define DB(name) cout << #name << ": " << name << endl

// Typedef(s)
typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main() {
//while(1){
    int N;
    scanf("%d",&N);

    int A=0, B=0, C=0, count=1;

    for(int i=0; i<N; i++) {

        int a, b;
        // Formatted Input
        scanf("%d/%d",&a, &b);

        if (a == 3 && b == 4) C++;

        else if (a == 1 && b == 4) A++;

        else if(a == 1 && b == 2 ) B++;
    }

    // 3/4's

    count += C;
    A = max (A - C, 0);

    // 1/2's

    count += B/2;

    if(!(B%2 == 0)) B=1;
    else B = 0;

    if(B>0) {
        count++;
        A -= 2;
        A = max(A, 0);
    }

    // Finally 1/4's

     count += A/4;
     A = A%4;
     if(A>0) count++;

     // Display result

     cout << count << endl;

//}
}

