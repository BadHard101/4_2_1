#include "Class2.h"

Class2::Class2(string id) : Class1(id) {
	name = id + "_2";
}

void Class2::getTree(int steps) {
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