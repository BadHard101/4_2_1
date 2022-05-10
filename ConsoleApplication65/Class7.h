#ifndef CLASS7_H
#define CLASS7_H
#include <string>
#include "Class4.h"
#include "Class5.h"

using namespace std;

class Class7 : public Class4, public Class5
{
public:
	Class7(string id);
	void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};

#endif // !CLASS7_H