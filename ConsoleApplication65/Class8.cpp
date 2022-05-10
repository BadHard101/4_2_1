#include "Class8.h"

Class8::Class8(string id) : Class6(id), Class7(id), Class5::Class1(id) {
	name = id + "_8";
}

void Class8::getTree(int steps) {
	if (steps == 0) {
		if (!isPrinted) isPrinted = true;
		else return;
		if (isFirstPrint) isFirstPrint = false;
		else cout << "\n";
		cout << name;
		return;
	}
	this->Class6::getTree(steps - 1);
	this->Class7::getTree(steps - 1);
}