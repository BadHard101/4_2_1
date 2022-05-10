#include "Class5.h"

Class5::Class5(string id) : Class1(id) {
	name = id + "_5";
}

void Class5::getTree(int steps) {
	if (steps == 0) {
		if (!isPrinted) isPrinted = true;
		else return;
		if (isFirstPrint) isFirstPrint = false;
		else cout << "\n";
		cout << name;
		return;
	}
	this->Class1::getTree(steps - 1);
}