// Miles Per Gallon 2
// A program that calculates a car's gas mileage. The program should ask the 
// user to enter the number of gallons of gas the car can hold and the nubmer 
// of miles it can be driven on a full tank. It should then calculate and 
// display the number of miles per gallon the car gets. 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double gallons, miles, MPG;
	

	cout << "How many gallons does your car hold?" << endl;
	cin >> gallons;
	cout << "How many miles does your car go on a full tank of gas before refilling?" << endl;
	cin >> miles;

	MPG = miles / gallons;

	cout << fixed << setprecision(2) << endl;
	cout << "Your car's miles per gallon is about: " << MPG << endl;

	return 0;
}
