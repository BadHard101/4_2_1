#include "Class1.h"

bool Class1::isFirstPrint = true;

Class1::Class1(string id = "") {
	name = id + "_1";
}

void Class1::getTree(int steps) {
	if (steps == 0) {
		if (!isPrinted) isPrinted = true;
		else return;
		if (isFirstPrint) isFirstPrint = false;
		else cout << "\n";
		cout << name;
		return;
	}
}