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
	bird(float w, float m, float fs, float c, string sp, string n, int p) {
		wingspan = w;
		mass = m;
		flightSpeed = fs;
		ceiling = c;
		species = sp;
		name = n;
		passengers = p;
	}
	void setPassengers (int p) {
		passengers = p;
	}
};

class chicken : public bird {
private:
	string range;
public:
	chicken() : bird(2.0, 1.0, 0.0, 1.0, "Gallus", "Fred", 1) {
		cout << "Invoking first\n";
		range = "";
	}
	chicken(float w, float m, float fs, float c, string sp, string n, int p) : 
		bird(w, m, fs, c, sp, n, p) {
			cout << "Invoking second\n";
			range = "r";
	}
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