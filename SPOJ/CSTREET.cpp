#include <bits/stdc++.h>

int run(bool);
using namespace std;

vector< int > parent;
vector< int > rrank;

void init(int n) {
    parent.clear();
    parent.resize(n + 1, 0);
    for(int i = 1; i < parent.size(); i++) {
        parent[i] = i;
    }
    rrank.clear();
    rrank.resize(n + 1, 0);
}

class Edge {
public:
    int to;
    int from;
    int weight;
    Edge(int x, int y, int w) : to(x), from(y), weight(w) {}
};

bool comp(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}

int findParent(int x) {
    if(x != parent[x]) parent[x] = findParent(parent[x]);
    return parent[x];
}

bool merge(int x, int y) {
    int xx = findParent(x);
    int yy = findParent(y);
    if(xx == yy) {
        return false;
    }
    if(rrank[xx] < rrank[y]) {
        parent[yy] = xx;
    }
    else if(rrank[xx] > rrank[yy]) {
        parent[xx] = yy;
    }
    else {
        parent[yy] = xx;
        rrank[xx]++;
    }
    return true;
}
 
void solve() {
    int price;
    cin >> price;
    int n, m;
    cin >> n >> m;
    init(n);
    vector< Edge > edges;
    while(m--) {
        int x, y, w;
        cin >> x >> y >> w;
        edges.push_back(Edge(x, y, w));
    }
    sort(edges.begin(), edges.end(), comp);
    long long sum = 0;
    for(Edge e : edges) {
        bool mergeCond = merge(e.from, e.to);
        if(mergeCond) {
            sum += 1LL * e.weight;
        }
    }
    cout << sum * price << endl;
}   

int main(int argc, char** argv) {
    return run(argc >= 2);
}

int run(bool debugging) {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    if(debugging) {
        string in = "test.in";
        if(fopen(in.c_str(), "r") != NULL) {
            freopen(in.c_str(), "r", stdin);
        }
    }
    int tests;
    if(debugging) {
        tests = 1;
    }
    else {
        tests = 1;
    }
    cin >> tests;   
    for(int cur = 0; cur < tests; cur++) {
        solve();
    }
    return 0;
}
