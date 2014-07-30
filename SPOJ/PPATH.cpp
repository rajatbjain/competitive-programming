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

// Define(s)
#define FILEREAD(name) freopen(name, "r", stdin)
#define FILEWRITE(name) freopen(name, "w", stdout)
#define PB(value) push_back(value)
#define SIZE(container) container.size()
#define ZEROSET(array) memset(array, 0, sizeof(array))
#define DB(name) cout << #name << ": " << name << endl
#define EPS 0.0000001

// Typedef(s)
typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

bool prime[10000];
void gen_prime() {
	ZEROSET(prime);
	prime[0] = prime[1] = 1;
	for(int i=1000; i<10000; i+=2) prime[i] = 1;
	for(int i=3; i<10000; i+=2)
		if(!prime[i])
			for(int j=i*i, k=i*2; j<10000; j+=k)
				prime[j] = 1;
}


int bfs(int a, int b){ 


}


int main() {
	gen_prime();
	int t;
	cin >> t;
	while(t--) {
		bool visited[10000];
		vector< int > G[10001];
		ZEROSET(visited);

		for(int i= 1000; i<=9999; i++) {

			if(prime[i] == true) {
				int num = i;
				for(int j=0; j<4; j++) {
					for(int k=0; k<=9 && num<=9999; k++) {
						if(j==0) k=1;

						num = num + pow(10, 3-j);
						if(prime[num] && num!=i) {
							G[i].push_back(num);
						}
						else {
							num = i;
							break;
						}
					}
				}
			}
		}

		for(int i=0; i<G[1033].size(); i++) {
			cout << G[1033][i] << " " << endl;
		}
	}
}