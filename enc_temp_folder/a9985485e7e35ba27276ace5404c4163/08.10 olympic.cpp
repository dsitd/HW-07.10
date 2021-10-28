#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <sstream>
using namespace std;



int fib_rec(int n) {
	if (n <= 1)  {
		return 1;
	}
	else {
		return fib_rec(n - 1) + fib_rec(n - 2);
	}
}

int fib_for(int n) {
	int a = 0, b = 1, c;
	for (int i = 1; i <= n; ++i) {
		c = b;
		b += a;
		a = c;
	}
	return b;
}

int Kill_bill(int n = 0) { 
	return Kill_bill(n) * 1;
}


void focus_with_string() {
	string s;
	cin >> s;

	int a1 = -1, p = -1, a2 = -1, n = s.size();
	for (int a1 = 0; a1 < s.size(); a1++) {
		if (isdigit(s[a1])) {
			for (p = a1 + 1; p < s.size() && isdigit(s[p]); p++);
			if (s[p] == '+' && isdigit(s[p + 1])) {
				for (a2 = p + 1; a2 < n && isdigit(s[a2]); a2++);
				string sb = s.substr(0, a1);
				string se = s.substr(a2, s.size() - a2);
				string i1 = s.substr(a1, p - a1);
				string i2 = s.substr(p + 1, a2 - p - 1);
				string sm = to_string(stoi(i1) + stoi(i2));
				int diff = s.size() - se.size() - sb.size() - sm.size();
				s = sb + sm + se;
				a1 = a2 - diff;
			}
			else
				a1 = p;
		}
	}
	cout << s;
}


// вычисление выражения, записанного в обратной польской записи
void t4() {
	stack<double> a;
	string input; getline(cin, input);
	stringstream ss(input);
	string s;
	int n = 0;
	while (ss >> s) {
		if (isdigit(s[0]) || s[0] == '-' && s.size() > 1 && isdigit(s[1]))
			a.push(stod(s));
		else {
			double i2 = a.top(); a.pop();
			double i1 = a.top(); a.pop();
			switch (s[0]) {
			case '+': a.push(i1 + i2); break;
			case '*': a.push(i1 * i2); break;
			case '-': a.push(i1 - i2); break;
			case '/': a.push(i1 / i2); break;
			}
		}
	}
	cout << a.top();
}

// после каждого "password:"  заменить 8 символов на '*'
void t5() {
	string s; cin >> s;
	string p = "password:";
	int n = s.size(), m = p.size();
	for (int i = 0; i < n; i++) {
		bool ok = true;
		for (int j = 0; j < m; j++) {
			ok = s[i + j] == p[j];
			if (!ok) {
				i += j;
				break;
			}
		}
		if (ok) {
			for (int j = i + m; j < min(i + m + 8, n); j++)
				s[j] = '*';
		}
	}
	cout << s;
}


int main() {
	Kill_bill();
	return 0;
}