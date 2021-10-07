
#include <iostream>
#include <ctime>
#define DAY 86400
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	int begDay, begMonth, begYear;
	int endDay, endMonth, endYear;
	struct tm dateBeg, dateEnd;
	time_t time1, time2, daysDifference;

	cout << "Которое сегодня число? в формате dd mm yyyy" << endl; cin >> begDay >> begMonth >> begYear;
	cout << "Введите ваш день рождения в том же формате" << endl; cin >> endDay >> endMonth >> endYear;

	dateBeg.tm_sec = 0;
	dateBeg.tm_min = 0;
	dateBeg.tm_hour = 0;
	dateBeg.tm_mday = begDay;
	dateBeg.tm_mon = begMonth - 1;
	dateBeg.tm_year = begYear - 1900;
	dateBeg.tm_wday = 0;
	dateBeg.tm_yday = 0;
	dateBeg.tm_isdst = 0;

	dateEnd.tm_sec = 0;
	dateEnd.tm_min = 0;
	dateEnd.tm_hour = 0;
	dateEnd.tm_mday = endDay;
	dateEnd.tm_mon = endMonth - 1;
	dateEnd.tm_year = endYear - 1900;
	dateEnd.tm_wday = 0;
	dateEnd.tm_yday = 0;
	dateEnd.tm_isdst = 0;

	time1 = mktime(&dateBeg);
	time2 = mktime(&dateEnd);
	daysDifference = ((time1 > time2) ? time1 - time2 : time2 - time1) / DAY;

	cout << "Разница в днях равна: " << daysDifference;
	cin.get(); cin.get();
	return 0;
}