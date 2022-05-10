#ifndef CLASS4_H
#define CLASS4_H
#include <string>
#include "Class1.h"


using namespace std;

class Class4 : virtual public Class1
{
public:
	Class4(string id);
	void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};

#endif // !CLASS4_H