#include <iostream>
#include <iomanip>
#include <string>
#include "datetype.h"
#include "extDateType.h"
#include "dayType.h"
#include "calendarType.h"

using namespace std;

void calendarType::setMonth(int m)
{
	firstDate.setMonth(m);
}

void calendarType::setYear(int y)
{
	firstDate.setYear(y);
}

int calendarType::getMonth()
{
	return firstDate.getMonth();
}

int calendarType::getYear()
{
	return firstDate.getYear();
}

calendarType::calendarType()
{
	setMonth(1);
	setYear(1500);
}

calendarType::calendarType(int m, int y)
{
	setMonth(m);
	setYear(y);
}

void calendarType::printCalendar()
{
	printTitle();
	printDates();
}

void calendarType::printTitle()
{
	cout << "                    ";
	firstDate.printLongMonthYear();

	cout << "\n";

	for (int i = 0; i != 8; i++)
	{
		string shortName = firstDay.weekDays[i].substr(0, 3);


		cout << "    " << shortName; //4 spaces
	}
}

void calendarType::printDates()
{
	int i = 0;
	bool chkdate = false;
	dayType day = firstDayOfMonth();

	//Formats output based on day of week the calendar starts on. For instance, if the week starts on a Monday the day specific loop (For loop)
	//Moves one column to the right (Monday's position) before starting the output (While loop). It then outputs the remaining six days. The copy/paste loop
	//finishes the output for the remaining rows of the month for all seven days until it reaches the end of the month (getDaysInMonth) using nested
	//While loops.

	if (day.getDay() == "Sunday")
	{

		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
				else
					cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}
				else
				{
					break;
				}

				i++;
			}
		}
		cout << "\n\n";
	}


	if (day.getDay() == "Monday")

	{
		//Day specific loop

		cout << "\n";

		for (int k = 0; k < 1; k++) //k boolean literal gets +1 per day of the week
		{
			cout << "    " << "   "; //to move one column right. Additional space in second quotes.
		}

		while (i < 6) //the literal is decremented as day of week moves further right in columns
		{
			if (firstDate.getDay() <= 9)
				cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
			else
				cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}
			else
			{
				break;
			}
			i++;
		}

		//copypaste loop
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
				else
					cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}
				else
				{
					chkdate = true;
					break;
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Tuesday")

	{

		//Day specific loop

		cout << "\n";

		for (int k = 0; k < 2; k++) //k boolean literal gets +1 per day of the week
		{
			cout << "    " << "   "; //to move one column right. Additional space in second quotes.
		}

		while (i < 5) //the literal is decremented as day of week moves further right in columns
		{
			if (firstDate.getDay() <= 9)
				cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
			else
				cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}
			else
			{
				break;
			}
			i++;
		}

		//copypaste loop
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
				else
					cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}
				else
				{
					chkdate = true;
					break;
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Wednesday")

	{

		//Day specific loop

		cout << "\n";

		for (int k = 0; k < 3; k++) //k boolean literal gets +1 per day of the week
		{
			cout << "    " << "   "; //to move one column right. Additional space in second quotes.
		}

		while (i < 4) //the literal is decremented as day of week moves further right in columns
		{
			if (firstDate.getDay() <= 9)
				cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
			else
				cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}
			else
			{
				break;
			}
			i++;
		}

		//copypaste loop
		while (chkdate == false)
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
				else
					cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}
				else
				{
					chkdate = true;
					break;
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Thursday")

	{

		//Day specific loop

		cout << "\n";

		for (int k = 0; k < 4; k++) //k boolean literal gets +1 per day of the week
		{
			cout << "    " << "   "; //to move one column right. Additional space in second quotes.
		}

		while (i < 3) //the literal is decremented as day of week moves further right in columns
		{
			if (firstDate.getDay() <= 9)
				cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
			else
				cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}
			else
			{
				break;
			}
			i++;
		}

		//copypaste loop
		while (chkdate == false)
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
				else
					cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}
				else
				{
					chkdate = true;
					break;
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Friday")

	{

		//Day specific loop

		cout << "\n";

		for (int k = 0; k < 5; k++) //k boolean literal gets +1 per day of the week
		{
			cout << "    " << "   "; //to move one column right. Additional space in second quotes.
		}

		while (i < 2) //the literal is decremented as day of week moves further right in columns
		{
			if (firstDate.getDay() <= 9)
				cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
			else
				cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}
			else
			{
				break;
			}
			i++;
		}

		//copypaste loop
		while (chkdate == false)
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
				else
					cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}
				else
				{
					chkdate = true;
					break;
				}
				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Saturday")

	{

		//Day specific loop

		cout << "\n";

		for (int k = 0; k < 6; k++) //k boolean literal gets +1 per day of the week
		{
			cout << "    " << "   "; //to move one column right. Additional space in second quotes.
		}

		while (i < 1) //the literal is decremented as day of week moves further right in columns
		{
			if (firstDate.getDay() <= 9)
				cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
			else
				cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}
			else
			{
				break;
			}
			i++;
		}

		//copypaste loop
		while (chkdate == false)
		{
			i = 0;
			cout << "\n";

			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << "    " << "  " << firstDate.getDay(); //4 spaces + 2 for the day letters
				else
					cout << "    " << " " << firstDate.getDay(); //4 spaces + 1 for two digit day


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}
				else
				{
					chkdate = true;
					break;
				}

				i++;
			}
		}
		cout << "\n\n";
	}
}

dayType calendarType::firstDayOfMonth()
{
	//Tomohiko Sakamoto's algorithm for finding the day of the week
	//https://www.geeksforgeeks.org/tomohiko-sakamotos-algorithm-finding-day-week/

	dayType day;
	int count;
	int y = getYear();
	int m = getMonth();
	int d = 1;

	if (firstDate.getMonth() == 1 && firstDate.getYear() == 1500)
	{
		day.setDay(firstDay.weekDays[1]);
	}
	else
	{
		static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
		y -= m < 3;
		count = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;

		day.setDay(firstDay.weekDays[count]);
	}

	return day;
}