#ifndef CLASS2_H
#define CLASS2_H
#include <string>
#include "Class1.h"


using namespace std;

class Class2 : public Class1
{
public:
	Class2(string id);
	void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};

#endif // !CLASS2_H