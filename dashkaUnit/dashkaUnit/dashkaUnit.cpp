#include <iostream>
#include "DS.h"
using namespace std;


int main() {
	
	int m1, m2, m3;

	cin >> m1 >> m2 >> m3;
	Lab3 dashka(m1,m2,m3);
	cout << dashka.Solve();
	
}
