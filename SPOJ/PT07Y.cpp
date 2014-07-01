#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <stack>
using namespace std;

vector< int > foo[10001];

bool visited[10001] = {0};

bool dfs (int strt, int n) {
    stack< int > S;
    S.push(strt);
    while(!S.empty()) {
        int v = S.top();
        S.pop();

        for(int i=0; i<foo[v].size(); i++) {
            int u = foo[v][i];
            if(visited[u] == false) {
                S.push(u);
            }
        }
        visited[v] = true;
    }

    for(int i=1; i<=n; i++) {
            if(!visited[i]) {
                return false;
            }
        }
    return true;
}

int main() {
    int nodes, edges, strt;

    scanf("%d %d",&nodes,&edges);

    for(int i=0; i<edges; ++i) {
        int u , v;
        scanf("%d %d",&u,&v);
        if(i==0) strt = u;
        foo[u].push_back(v);
        foo[v].push_back(u);
    }

    if(nodes != edges+1) {
        cout << "NO\n";
    }

    else {

        if(dfs(strt, nodes)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }

    return 0;
}