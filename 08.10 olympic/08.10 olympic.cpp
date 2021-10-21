#include <iostream>
using namespace std;

void put_int(int** arr, int c_row, int c_col) {
	for (int i = 0; i < c_row; ++i) {
		for (int j = 0; j < c_col; ++j) {
			arr[i][j] = (rand() % 41) + 10;
		}
	}
}


int main()
{
	int count_row = 0;
	int count_col = 0;
	cin >> count_row >> count_col;
	int** array = new int* [count_row];
	for (int i = 0; i < count_row; ++i) {
		array[i] = new int[count_col];
	}
	put_int(array, count_row, count_col);
	for (int i = 0; i < count_row; ++i) {
		for (int j = 0; j < count_col; ++j) {
		cout << array[i][j] << " ";
		}
		cout << endl;
	}
}