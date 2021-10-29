#include <iostream>
using namespace std;

bool check_ticket(int num) { // first task
	int s = 0;
	int n;
	if ((num < 100000) || (num > 999999)) return false;
	for (int i = 0; i < 6; ++i) {
		n = num % 10;
		if (i < 3) s += n;
		else s -= n;
		num = num / 10;
	}
	if (s == 0) return true;
	else return false;
}
int find_max_more_one(int* arr, int n) { // second task
	int max = arr[0];
	bool tiker = false; // добавлен чтобы исключить ошибку когда первый элемент в ответе только потому что он взят за основу
	for (int i = 0; i < n; ++i) { // проходим по массиву ищем элеммент больше чем есть
		if ((arr[i] > max) || (tiker == false)) { 
			for (int j = 0; j < n; ++j) { // если нашли проверяем на наличие двойника
				if ((arr[i] == arr[j]) & (i != j)) {
					max = arr[i];
					tiker = true;
					break;
				}
			}
		}
	}
	if (tiker == false) return -1; // ловим ошибки пользуясь тем что в int нельзя получить -1 умножив на 10
	else return max * 10;
}
int main()
{	
	// first task
	int number_of_ticket = 123123; // enter number of ticket
	int result_ticket_task = check_ticket(123123);
	if (result_ticket_task == false) cout << "unlucky" << endl;
	else cout << "lucky" << endl;
	// --------------------
	// second task
	int const n = 12; // enter length arr
	int arr[n] = { 15,2,3,4,13 , 1, 2,91, 15, 5, 9, 13}; // create arr with elements
	int result_find_task = find_max_more_one(arr, n);
	if (result_find_task == -1) cout << "there are no duplicate elements" << endl;
	else cout << result_find_task / 10 << endl;
}
