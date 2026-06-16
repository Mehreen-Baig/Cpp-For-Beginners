#include<iostream>
using namespace std;
int main()
{
	double circumferance, radius;
	cout << "Enter radius";
	cin >> radius;
	circumferance = 2 * radius * 3.14159;
	cout << "Circumferance of Circle is=" << circumferance;
	return 0;
}