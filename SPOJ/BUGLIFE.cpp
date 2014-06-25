#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#define MAX 2002
using namespace std;

vector<int> graph[MAX];
int color[MAX];

bool bfs(int u) {
    int v;
    queue<int> q;
    q.push(u);
    color[u] = 1;
    while(!q.empty()) {
        u = q.front();
        q.pop();
        for(int i=0, size=graph[u].size(); i<size ; i++) {
            v = graph[u][i];
            if(color[v] == 0)
            {
                color[v] = 3 - color[u];
                q.push(v);
            }

            if(color[v] == color[u])
                return false;
        }
    }

    return true;

}

int main() {
    //freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    for(int C=1; C<=T; C++) {
        int n, e;
        scanf("%d%d",&n,&e);

        for(int i = 1; i <= n; i++) {
			graph[i].clear();
			color[i] = 0;
		}

        for(int i=0; i<e; i++) {
            int u, v;
            scanf("%d%d",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        bool flag = true;
        for(int i=1; i<=n; i++) {
            if(!color[i]) {

                if(bfs(i))
                    continue;

                else {
                    flag = false;
                    break;
                }
            }
        }

        printf("Scenario #%d:\n",C);
        if (flag) {
             printf("No suspicious bugs found!\n");
        }

        else {
            printf ("Suspicious bugs found!\n");
        }
    }
    return 0;
}
