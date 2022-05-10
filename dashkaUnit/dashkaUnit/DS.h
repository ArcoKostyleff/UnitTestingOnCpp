#pragma once
#include <iostream>
#include <string>
using namespace std;

class Lab3 {

public:
	Lab3() {
		m1 = 0;
		m2 = 0;
		m3 = 0;
	};
	Lab3(int a, int  b, int c) : m1(a), m2(b), m3(c) {};

	bool isInRange(int m) {
		if (m > 93 && m < 728) return 1;
		else return 0;
	}

	string Solve() {

		if (isInRange(m1) && isInRange(m2) && isInRange(m3)) {
			return to_string(__max(__max(m1, m2), m3));
		}	
		else return "Calc_Error";
	}

private:
	int m1, m2, m3;

};