#include <iostream>
#include <iomanip>
#include <string>
#include "Bird.h"

using namespace std;

int main() {

	chicken _ch1, _ch2(10.0, 5.0, 100.0, 10000.0, "Gallus Supremus", "Frederick", 10);
	_ch1.setPassengers(1);
	_ch2.setPassengers(2);
	cout << left << setw(8) << setfill('*');
	cout << _ch1 + _ch2 + 5 << endl;
	return 0;
}