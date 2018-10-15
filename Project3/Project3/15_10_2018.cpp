#include <iostream>
#include <cmath>

using namespace std;

void switchCase(char input_letter)
{
	if (input_letter >= 'a'&&input_letter <= 'z')
	{
		cout << "Letter in the opposite (high) case: " << char(input_letter - 32) << endl;
	}
	else {
		cout << "Letter in the opposite (low) case: " << char(input_letter + 32) << endl;
	}
}
void day_of_week(int day, int month)
{
	int months_length[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int all_days = 0;
	for (int current_month = 1; current_month <= month - 1; current_month++)
	{
		all_days += months_length[current_month - 1];
	}
	all_days += day;
	int day_num = all_days % 7-1;
	cout << "Day of the week: ";
	switch (day_num)
	{
	case 0: cout << "Monday\n"; break;
	case 1: cout << "Tuesday\n"; break;
	case 2: cout << "Wednesday\n"; break;
	case 3: cout << "Thursday\n"; break;
	case 4: cout << "Friday\n"; break;
	case 5: cout << "Saturday\n"; break;
	case 6: cout << "Sunday\n"; break;
	}
}
int how_long_number(int number)
{
	int counter = 0;
	while (number != 0)
	{
		number = number / 10;
		counter++;
	}
	return counter;
}
bool palindrome(int number, int length)
{
	for (int i = 0; i <= (length / 2)+1; i++)
	{
		int res1 = number / (int)pow(10, length - 1 - i) % 10;
		int res2 = number / (int)pow(10, i) % 10;
		if (res1 != res2 )
		{
			return 0;
		}
	}
	return 1;
}

int main() {
									//SwitchCase
	
	/*
	char input_letter;
	do {
		cout << "Input letter to switch case: ";
		cin >> input_letter;
	} while (input_letter<'A'||(input_letter>'Z'&&input_letter<'a')||input_letter>'z');
	switchCase(input_letter);
	*/

									//Weekday
	/*
	int day, month;
	cout << "Input day: ";
	cin >> day;
	cout << "Input month: ";
	cin >> month;
	day_of_week(day, month);
	*/

									//Palindrome
	int number;
	cin >> number;
	cout << palindrome(number, how_long_number(number)) << endl;


	return 0;
}
