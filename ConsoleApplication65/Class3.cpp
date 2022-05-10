#include "Class3.h"

Class3::Class3(string id) : Class1(id) {
	name = id + "_3";
}

void Class3::getTree(int steps) {
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