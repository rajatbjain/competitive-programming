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

    int N;
    cin >> N;
    int home[N], guest[N];

    //Standard Input
    for(int i=0; i<N; i++) cin >> home[i] >> guest[i];

    long cnt=0;

    // Iterate and check if home jersey is equal to the guest jersey

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {

            if(home[i] == guest[j] && i!=j) {
                cnt++;
            }
        }
    }


    cout << cnt << endl;

}
