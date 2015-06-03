//============================================================================
// Name        : MySqlWrapper.cpp
// Author      : youngwelle@gmail.com
// Version     :
// Copyright   : Copyright GODPAPER
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "MySqlCpp.h"

int main() {
	cout << "!!!Hello,MySqlWrapper!!!" << endl; // prints !!!Hello,MySqlWrapper!!!
	MySqlCpp mySqlCpp;
	mySqlCpp.simpleSqlQuery();
	return 0;
}
