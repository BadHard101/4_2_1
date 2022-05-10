#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"
#include "Class6.h"
#include "Class7.h"
#include "Class8.h"

static bool isFirstPrint = true;

int main()
{
	string id;
	cin >> id;
	Class8* link = new Class8(id);
	for (int i = 3; i >= 0; i--)
		link->Class8::getTree(i);
	system("pause");
	return 0;
}