#include <iostream>
#include <math.h>
#include <string>
using namespace std;

//first task -------------------------------------------------
int sum_cifr(long int n) { 
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
void find_sum_cifr(long int a, long int b) {
	for (long int i = a; i < b + 1; ++i) {
		int sum = sum_cifr(i);
		bool flag = true;
		for (int j = 2; j < 10; ++j) {
			if (sum != sum_cifr(i * j)) {
				flag = false;
				break;
			}
		}
		if (flag == true) cout << i << ' ';
	}
}
//first task -------------------------------------------------
//second task -------------------------------------------------
long long int search_m(long long int n) {
	int i = 0;
	while (n % 3 == 0) {
		i++;
		n /= 3;
	}
	return i;
}
//second task -------------------------------------------------
//third task -------------------------------------------------
void beautidful_name() {
	string name, surname, midname;
	cin >> name >> midname >> surname;
	cout << surname << " " << name[0] << "." << midname[0] << "." << endl;
  }
//third task -------------------------------------------------
//five's task -------------------------------------------------
bool simple_or_no(int n) {
	if (n < 2) return 0;
	bool flag = 1;
	for (int i = 2; i < int(sqrt(n)) + 1; i++) {
		if ((i != n) & (n % i == 0)) {
			flag = 0;
			break;
		}
	}
	return flag;
}
bool supersimple(int n) {
	bool flag = 1;
	while (n > 0) {
		if (simple_or_no(n) == 0) {
			flag = 0;
			break;
		}
		n /= 10;
	}
	return flag;
}
void show_me_all_supersimple(int a, int b) {
	for (long int i = a; i < b + 1; ++i) {
		if (supersimple(i) == 1) cout << i << ' ';
	}
	
}
//five's task -------------------------------------------------
int main()
{
	find_sum_cifr(0, 1000);
	cout << search_m(27) << endl;
	cout << simple_or_no(4) << endl;
	show_me_all_supersimple(2, 10000000);
}
