// Classwork10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int sales = 9500;
	double comission;

	if (sales < 10000) {
		comission = sales * .1;
	}
	else if ((sales >= 10000) && (sales <= 15000)) {
		comission = sales * .15;
	}
	else {
		comission = sales * .20;
	}

	cout << "The comission is: $" << comission;
}
