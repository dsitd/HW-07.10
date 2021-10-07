#include <iostream>
using namespace std;


int main()
{	
	int v1; int v2; int v3;
	cin >> v1 >> v2 >> v3;
	int a = max(v1, v2);
	int b = min(v2, v1);
	if ((v3 == a) || (v3 == b) || (a - (b - (a % b)))) {
		cout << "Yes" << endl;
	}
	else {
		while (a > 0) {
			if (a == v3) {
				cout << "Yes" << endl;
				break;
			}
			a -= b;
		}
		cout << "No" << endl;
	}
	return 0;
}
