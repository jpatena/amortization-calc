#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int counter = 1;
	double monthlyInterest = 0.0;
	double principalPayment = 0.0;
	double newPrincipal = 0.0;
	
	double principal = 5000;
    double interestRate = 0.04;
	int Loanterm = 120;
	double yourMonthlyPayment = 80.0;
	double monthlyRate = interestRate / 12;

	double scheduledMonthlyPayment = 0.0;

	cout << "Payment" << "\t\t" << "beginning balance" << "\t" << "interest" << "\t" << payment << "ending balance" << endl;

	while(counter < Loanterm)
	{
		monthlyInterest = principal * monthlyRate;
		principalPayment = yourMonthlyPayment - monthlyInterest;
		newPrincipal = principal - principalPayment;

		// if newPrincipal is negative, set to 0.0
		if (newPrincipal < 0)
			newPrincipal = 0.0;

		cout << setprecision(2) << fixed;
		cout << setw(3) << counter << "\t\t\t" << principal << "\t\t" << monthlyInterest << "\t\t" << scheduledMonthlyPayment << "\t\t" << newPrincipal << endl;

		// exit loop
		if (newPrincipal == 0.0)
			break;

		principal = newPrincipal;
		counter++;
	}

}
