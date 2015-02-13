#ifndef _VEHICLES_H_
#define _VEHICLES_H_

#include <string>
using namespace std;

class bird{
protected:
	float wingspan;
	float mass;
	float flightSpeed;
	float ceiling;
	string species;
	string name;
	int passengers;
public:
	void setPassengers (int p) {
		passengers = p;
	}
};

class chicken : public bird {
public:
	int operator+(const chicken c) const {
		return passengers + c.passengers;
	}

	chicken operator+(int i) const {
		chicken temp;
		temp.setPassengers(this->passengers + i);
		return temp;
	}
};

class eagle : public bird {

};

#endif