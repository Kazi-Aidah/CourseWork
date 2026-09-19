// 44. Write a C program to display the day of the week using switch-case.

#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int day; char name[100];
	
    // input day number = get name of day
	cout << "Input day number: ";
	cin >> day;
	switch (day) {
		case 1: cout << "sunday\n"; break;
		case 2: cout << "monday\n"; break;
		case 3: cout << "tuesday\n"; break;
		case 4: cout << "wednesday\n"; break;
		case 5: cout << "thursday\n"; break;
		case 6: cout << "friday\n"; break;
		case 7: cout << "saturday\n"; break;
		default: cout << "invalid weekday\n"; break;
	}
	
    // input day name = get day number
	cout << "Input day name: ";
	cin >> name;
	
	if(strcmp(name, "sunday") == 0 || strcmp(name, "sun") == 0) { cout << "1\n"; }
	else if(strcmp(name, "monday") == 0 || strcmp(name, "mon") == 0) { cout << "2\n"; }
	else if(strcmp(name, "tuesday") == 0 || strcmp(name, "tue") == 0) { cout << "3\n"; }
	else if(strcmp(name, "wednesday") == 0 || strcmp(name, "wed") == 0) { cout << "4\n"; }	
	else if(strcmp(name, "thursday") == 0 || strcmp(name, "thu") == 0) { cout << "5\n"; }
	else if(strcmp(name, "friday") == 0 || strcmp(name, "fri") == 0) { cout << "6\n"; }
	else if(strcmp(name, "saturday") == 0 || strcmp(name, "sat") == 0) { cout << "7\n"; }
	else { cout << "invalid weekday name"; }

    return 0;
}