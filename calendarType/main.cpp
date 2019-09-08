#include <iostream>
#include "calendarType.h"
#include "extDateType.h"
#include "dayType.h"

using namespace std;

int main()
{
	int month, year;

	cout << "Enter the month: "; 
	cin >> month;
	cout << endl;

	cout << "Enter the year: ";
	cin >> year;
	cout << endl;

	calendarType cal(month, year);

	cal.printCalendar();
}