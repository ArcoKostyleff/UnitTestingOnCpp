#include <iostream>
#include "DS.h"
using namespace std;


int main() {
	
	int m1, m2, m3;

	cin >> m1 >> m2 >> m3;
	Lab3 task(m1,m2,m3);
	cout << task.Solve();
	
}
