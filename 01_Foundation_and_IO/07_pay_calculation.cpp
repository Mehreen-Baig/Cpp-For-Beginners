#include <iostream>
using namespace std;

int main() {
    double  hoursWorked, ratePerHour, pay;
    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter rate per hour: ";
    cin >> ratePerHour;

    pay = hoursWorked * ratePerHour;
    cout << "Total pay: " << pay;
    return 0;
}
