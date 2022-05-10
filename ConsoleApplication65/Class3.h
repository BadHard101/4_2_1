#ifndef Class3_H
#define Class3_H
#include <string>
#include "Class1.h"
#include "Class2.h"

using namespace std;

class Class3 : public Class1 
{
public:
	Class3(string id);
	virtual void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};
#endif // !Class3_H
