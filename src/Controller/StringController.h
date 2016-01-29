/*
 * StringController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: dvil4688
 */

#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_

#include <string>
using namespace std;

class StringController
{
private:
	string  word;
	int length;
	string blank;
	string substrToEnd;
	string substrStartToEnd;
	string ctec;

public:
	StringController();
	void setWord(string);
	void getWord();
	void start();
};

#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
