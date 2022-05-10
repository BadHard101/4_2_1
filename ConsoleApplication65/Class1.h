#ifndef CLASS1_H
#define CLASS1_H
#include <string>
#include <iostream>
using namespace std;

class Class1
{
public:
	Class1(string id);
	Class1() { cout << "Class1 EMPTY constructor\n"; }
	virtual void getTree(int steps = 0);
private:
	string name = "untitled";
	bool isPrinted = false;
protected:
	static bool isFirstPrint;
};

#endif // !CLASS1_H