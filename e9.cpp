#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tuition, feePercent, downPayment, fee, adjustedTuition, balance, monthlyPayment;
    int months;

    cout << "Enter tuition: ";
    cin >> tuition;
    cout << "Enter fee percentage: ";
    cin >> feePercent;
    cout << "Enter down payment: ";
    cin >> downPayment;
    cout << "Enter number of months: ";
    cin >> months;

    fee = tuition * feePercent / 100.0;
    adjustedTuition = tuition + fee;
    balance = adjustedTuition - downPayment;
    monthlyPayment = balance / months;

    cout << fixed << setprecision(2);
    cout << "Fee: " << fee << endl;
    cout << "Adjusted Tuition: " << adjustedTuition << endl;
    cout << "Balance: " << balance << endl;
    cout << "Monthly Payment: " << monthlyPayment << endl;

    return 0;
}
