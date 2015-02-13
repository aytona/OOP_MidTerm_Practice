#include <iostream>
#include <iomanip>
#include <string>
#include "Bird.h"

using namespace std;

int main() {

	chicken _ch1, _ch2;
	_ch1.setPassengers(1);
	_ch2.setPassengers(2);
	cout << left << setw(8) << setfill('*');
	cout << _ch1 + _ch2 + 5 << endl;
	return 0;
}