/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: dvil4688
 */

#include "StringController.h"
#include <iostream>
#include <string>
using namespace std;

StringController :: StringController()
{
	this->word = NULL;
}

void StringController :: setWord(string word)
{
	this-> word = word;
}

string StringController :: getWord();
{
	return this->word;
}

void StringController :: start()
{
	cout << "Type in \"Canyons Technical Education Center\" for the new String value" << endl;
	string tempWord;
	cin >> tempWord;
	setWord(tempWord);

	//1 .length()
	int length = word.length();
	cout << "Length of String word is: " << length <<endl;

	//2

	//3 .empty()
	string blank = "";
	if (!word.empty())
	{
		cout << "String  word is empty" <<endl;
	}
	else
	{
		cout << "String word is not empty" << endl;
	}

	//4 .substr()
	string substrToEnd = word.substr(18);
	cout << "From position 18 to the end of String word is: " + substrToEnd << endl;

	//5 .substr( , )
	string substrStartToEnd = word(21,26);
	cout << "From position 21 to 26 of String word is: " + substrStartToEnd << endl;

	//6 .compare()
	string ctec = "Canyons Technical Education Center";
	if (word.compare(ctec) != 0)
	{
		cout << word << " = " << ctec << endl;
	}
	else
	{
		cout << word << " is not " << ctec << endl;
	}
}


