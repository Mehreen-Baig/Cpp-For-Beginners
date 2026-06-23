#include<iostream>
using namespace std;
int main()
{
	float mon, tues, wed, thur, fri, sat,sun,totalExpense;
	cout << "Enter expense for Sunday:";
	cin >> sun;
	cout << "Enter expense for Monday:";
	cin >> mon;
	cout << "Enter expense for Tuesday:";
	cin >> tues;
	cout << "Enter expense for Wednesday:";
	cin >> wed;
	cout << "Enter expense for Thursday:";
	cin >> thur;
	cout << "Enter expense for Friday:";
	cin >> fri;
	cout << "Enter expense for Saturday:";
	cin >> sat;
	totalExpense = sun + mon + tues + wed + thur + fri + sat + sun;
	cout << "Total Weekly Expense Is =" << totalExpense;
	return 0;

}