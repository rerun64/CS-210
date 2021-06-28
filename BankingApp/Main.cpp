#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	 //variables that store input,totals,interest
	float initInv, monDep, AnuInt, months, years;

	float totalAm, intAmt, yearTotInt;




	//Display
	cout << "********************************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest: \n";
	cout << "Number of years: \n";

	//Pause for input
	system("PAUSE");

	//Gather user info
	cout << "********************************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: $";
	cin >> initInv;
	cout << "Monthly Deposit: $";
	cin >> monDep;
	cout << "Annual Interest: %";
	cin >> AnuInt;
	cout << "Number of years: ";
	cin >> years;
	months = years * 12;

	//Pause for input
	system("PAUSE");

	totalAm = initInv;
	// Display year data with out deposits
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";

	for (int i = 0; i < years; i++) {
		//calculate interest
		intAmt = (totalAm) * ((AnuInt / 100));

		// calculate year end total
		totalAm = totalAm + intAmt;

		//Print results with 2 decimal places.
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";
	}


	//Set total amount to initial investmen
	totalAm = initInv;

	//Display data with montly deposits
	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";

	for (int i = 0; i < years; i++) {

		yearTotInt = 0;

		for (int j = 0; j < 12; j++) {
			//monthly interest
			intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);

			yearTotInt = yearTotInt + intAmt;
			//Month end totals
			totalAm = totalAm + monDep + intAmt;
		}

		//Print totals 
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";
	}

	return 0;


}