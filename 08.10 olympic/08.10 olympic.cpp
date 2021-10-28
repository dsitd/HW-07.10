﻿#include <iostream>
using namespace std;



int fib_rec(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return fib_rec(n - 1) + fib_rec(n - 2);
	}
}

int fib_for(int n) {
	int a = 0;
	int b = 1;
	int c;
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



int main() {
	Kill_bill();
	return 0;
}