#include "Class7.h"

Class7::Class7(string id) : Class4(id), Class5(id) {
	name = id + "_7";
}

void Class7::getTree(int steps) {
	if (steps == 0) {
		if (!isPrinted) isPrinted = true;
		else return;
		if (isFirstPrint) isFirstPrint = false;
		else cout << "\n";
		cout << name;
		return;
	}
	this->Class4::getTree(steps - 1);
	this->Class5::getTree(steps - 1);
}