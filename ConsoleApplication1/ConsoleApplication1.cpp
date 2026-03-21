#include <iostream>
#include <iomanip> 

using namespace std;

void DisplayHeading();
void GetData(double& hoursWorked, double& payRate);
double CalcPay(double hours, double rate);
void DisplayPay(double pay);

int main() {
    double hours = 0.0;
    double rate = 0.0;
    double totalPay = 0.0;

    DisplayHeading();

    GetData(hours, rate);

    totalPay = CalcPay(hours, rate);

    DisplayPay(totalPay);

    return 0;
}


void DisplayHeading() {
    cout << "-----EMPLOYEE PAY CALCULATOR-----" << endl;
}


void GetData(double& hoursWorked, double& payRate) {
    cout << "Enter the total hours worked: ";
    cin >> hoursWorked;
    cout << "Enter the hourly pay rate: $";
    cin >> payRate;
}


double CalcPay(double hours, double rate) {
    return hours * rate;
}


void DisplayPay(double pay) {
    cout << "\n"<< endl;
    cout << fixed << setprecision(2);
    cout << "The total pay for this period is: $" << pay << endl;
}