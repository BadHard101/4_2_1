#include "Class4.h"

Class4::Class4(string id) : Class1(id) {
	name = id + "_4";
}

void Class4::getTree(int steps) {
	if (steps == 0){
		if (!isPrinted) isPrinted = true;
		else return;
		if (isFirstPrint) isFirstPrint = false;
		else cout << "\n";
		cout << name;
		return;
	}
	this->Class1::getTree(steps - 1);
}