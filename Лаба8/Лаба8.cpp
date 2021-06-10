﻿#include <iostream>
#include "diophantine.h"

using namespace std;

void main() {

	CDiophantine dp(1, 2, 3, 4, 30);

	int answer;
	answer = dp.Solve();
	if (answer == -1) {
		cout << "No solution found." << endl;
	}
	else {
		gene gn = dp.GetGene(answer);

		cout << "The solution set to a+2b+3c+4d=30 is:\n";
		cout << "a = " << gn.alleles[0] << "." << endl;
		cout << "b = " << gn.alleles[1] << "." << endl;
		cout << "c = " << gn.alleles[2] << "." << endl;
		cout << "d = " << gn.alleles[3] << "." << endl;
	}
}