#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef map<string, int> MSI;
map<string, string> cheftocountry;
map<string, int> cheftoval;
map<string, int> countrytoval;


string best_string(const MSI &votes)
{
	int max_votes = 0;
	string res = "";
	for (MSI::const_iterator it = votes.begin(); it != votes.end(); ++it) {
		if(max_votes < it->second) {
			max_votes = it->second;
			res = it->first;
		}
	}
	return res;
}

int main() {
    int N, M;
    scanf("%d%d",&N, &M);
    for(int i=0; i<N; i++) {
        string chef, country;
        cin >> chef >> country;
        cheftocountry[chef] = country;
    }

    for (int i=0; i<M; i++) {
        string str;
        cin >> str;
        cheftoval[str] += 1;
        str = cheftocountry[str];
        countrytoval[str] += 1;
    }


    cout << best_string(countrytoval) << endl;
    cout << best_string(cheftoval) << endl;

    return 0;
}