#include "Class6.h"

Class6::Class6(string id) : Class2(id), Class3(id) {
	name = id + "_6";
}

void Class6::getTree(int steps) {
	if (steps == 0) {
		if (!isPrinted) isPrinted = true;
		else return;
		if (isFirstPrint) isFirstPrint = false;
		else cout << "\n";
		cout << name;
		return;
	}
	this->Class2::getTree(steps - 1);
	this->Class3::getTree(steps - 1);
}