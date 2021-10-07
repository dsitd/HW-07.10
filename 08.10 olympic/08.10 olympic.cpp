#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	int m = 0;
	int f = 0;
	int t = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> m >> f;
		for (int j = 0; j < 2 * m ; ++j) {
			if (j * j % m == f) {
				cout << "Yes" << endl;
				t = 1; 
				break;
			}
		}
		if (t == 0) {
			cout << "No" << endl;
		}
	}
}
