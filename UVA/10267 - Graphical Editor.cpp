#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <stack>	
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cstdlib>
#define db(n) cout << #n << " " << n << endl;
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1}; 

vector< vector <char> > G (250, vector<char>(250, 'O'));

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	while(1) {
		char command; 
		cin >> command;
		
		if(command == 'I') {
			int n, m; cin >> m >> n;
			G.resize(n);
			for(int i=0; i<n; i++){
				G[i].resize(m);
			}

			for(int i=0; i<G.size(); i++) 
				for(int j=0; j<G[i].size(); j++)
					G[i][j] = 'O';
		}

		else if(command == 'C') {
			for(int i=0; i<G.size(); i++){
				for(int j=0; j<G[i].size(); j++){
					G[i][j] = 'O';
				}
			}
		}
		
		else if(command == 'L') {
			int x, y; char c;
			cin >> x >> y >> c;
			G[y-1][x-1] = c;
		}

		else if(command == 'V') {
			int x, y1, y2; char c;
			cin >> x >> y1 >> y2 >> c;
			if(y2 < y1) swap(y1, y2);
			for(int i=y1-1, j=x-1; i<y2; i++){
				G[i][j] = c;
			}
		}

		else if(command == 'H') {
			int x1, x2, y; char c;
			cin >> x1 >> x2 >> y >> c;
			if(x2 < x1) swap(x2, x1) ;
			for(int i=y-1, j=x1-1; j<x2; j++){
				G[i][j] = c;
			}
		}

		else if(command == 'K') {
			int x1, y1, x2, y2; char c;
			cin >> x1 >> y1 >> x2 >> y2 >> c;
			if(x1 > x2) swap(x1, x2);
			if(y1 > y2) swap(y1, y2);
			for(int i=y1-1; i<y2; i++) {
				for(int j=x1-1; j<x2; j++){
					G[i][j] = c;
				}
			}
		}

		else if(command == 'F') {
			int x, y; char c;
			cin >> x >> y >> c;
			int ii = y-1, jj = x-1;
			vector< vector<int> >visited(250, vector<int>(250, 0));
			int n = G.size(); int m = G[0].size();
			char color = G[ii][jj];
			G[ii][jj] = c;
			queue< pair<int, int> > Q;
			Q.push(make_pair(ii, jj));
			while(!Q.empty()){ 
				ii = Q.front().first;
				jj = Q.front().second;
				Q.pop();

				for(int xx=0; xx<8; xx++){
					int ix = ii + dx[xx], iy = jj + dy[xx];
					if((ix>=0 && ix<n)&&(iy>=0 && iy<m)) { // Keep in bound.
						if(visited[ix][iy]==0 && G[ix][iy] == color){ // Sanity check
							G[ix][iy] = c;
							Q.push(make_pair(ix,iy));
							visited[ix][iy]=1;
						} 
					}
				}
				visited[ii][jj] = 1;
			}
		}

		else if(command == 'S') {
			string name;
			cin >> name;
			cout << name << endl;

			for(int i=0; i<G.size(); i++) {
				for(int j=0; j<G[i].size(); j++){
					cout << G[i][j];
				}
				cout << endl;
			}
		}

		else if(command == 'X') return 0;

		else 
			continue;
	}

}