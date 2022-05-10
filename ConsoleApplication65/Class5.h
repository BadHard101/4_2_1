#ifndef CLASS5_H
#define CLASS5_H
#include <string>
#include "Class1.h"
#include "Class4.h"

using namespace std;

class Class5 : virtual public Class1
{
public:
	Class5(string id);
	virtual void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};

#endif // !CLASS5_H