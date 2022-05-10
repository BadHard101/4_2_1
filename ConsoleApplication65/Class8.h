#ifndef CLASS8_H
#define CLASS8_H
#include <string>
#include "Class6.h"
#include "Class7.h"

using namespace std;

class Class8 : public Class6, public Class7
{
public:
	Class8(string id);
	virtual void getTree(int steps = 0);
private:
	string name;
	bool isPrinted = false;
};

#endif // !CLASS8_H