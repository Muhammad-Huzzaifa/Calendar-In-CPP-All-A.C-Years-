#include <iostream>

using namespace std;

// Function that returns the first day of any month in any year using Zeller's Congruence.
int day(int year, int month = 1, int date = 1)
{
	// Declaring Zeller's Congruence formula variables.
	int h, q{ date }, m{ month }, k, j;
	// If month = Janyary or month = Fabruary then it counts with previous year.
	if (m == 1 || m == 2)
	{
		m += 12;
		year--;
	}
	k = year % 100;
	j = year / 100;

	// Applying Zeller's Congruence formula.
	h = (q + ((13 * (m + 1)) / 5) + k + (k / 4) + (j / 4) - 2 * j);
	h %= 7;

	// If value is negative then add 7 to it.
	if (h < 0)
		h += 7;

	// Returns the calculated value (0 = Saturday, 1 = Sunday, ... , 6 = Friday).
	return h;
}

int main()
{
	// User input for entering year.
	cout << "Enter the year(WXYZ): ";
	int year{ 0 };
	cin >> year;

	// String array storing the month names.
	string months[]{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "Octuber", "November", "December" };

	// String array storing the days names.
	string days[]{ "Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri" };

	// Integer array that tells us about the number of days of months.
	int daysInMonth[]{ 31, ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// Outer array that runs for all 12 months.
	for (size_t i{ 0 }; i < 12; ++i)
	{
		// Displaying the name of month.
		cout << "\n" << i + 1 << ") " << months[i] << ":\n";

		// Inner loop to run for displaying the names of days of week.
		for (size_t j{ 0 }; j < 7; ++j)
			cout << days[j] << "\t";
		cout << endl;

		int firstDay{ day(year, i + 1) }; // Defining the first day of month.
		// Loop to display the dates according to the days in proper formate.
		for (size_t j{ 0 }; j <= daysInMonth[i] + firstDay; ++j)
		{
			// Diplaying the dates.
			if (j > firstDay)
				cout << j - firstDay << "\t";
			else
				cout << "\t";

			// New line when it reaches the Friday.
			if (j % 7 == 0)
				cout << endl;
		}
		cout << "\n---------------------------------------------------\n";
		cout << endl;
	}
	system("pause");
	return 0;
}