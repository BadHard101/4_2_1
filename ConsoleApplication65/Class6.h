#ifndef CLASS6_H
#define CLASS6_H
#include <string>
#include "Class2.h"
#include "Class3.h"
#include "Class5.h"

using namespace std;

class Class6 : public Class2, public Class3
{
public:
	Class6(string id);
	virtual void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};

#endif // !CLASS6_H