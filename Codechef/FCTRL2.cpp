#include <iostream>
using namespace std;

long long factorial(int a){
	int w, y=a;
	if  (a == 1)
		return 1;
	else
		return a* factorial (a-1);
}

int main() {
	int t;

	cin >> t;
f
	while (t--) {

		int x;
		cin >> x;
		long long z=factorial(x);
		cout << z << endl;
	}


}
