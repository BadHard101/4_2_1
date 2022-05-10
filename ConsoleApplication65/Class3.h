#ifndef CLASS3_H
#define CLASS3_H
#include <string>
#include "Class1.h"


using namespace std;

class Class3 : public Class1 
{
public:
	Class3(string id);
	void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};

#endif // !CLASS3_H
