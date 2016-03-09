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
	string word = NULL;
}

void StringController :: setWord(string word)
{
	this-> word = word;
}

string getWord(string word)
{
	return word;
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


	//2 .at(int)
	cout << "Type in the location of the letter y in the string: " << word << endl;
 	if (word.at[4].compare("y") == 0)
 	{
 		cout << "The letter y is at position 4" << endl;
 	}


	//3 .empty()
	if (!word.empty())
	{
		cout << "String  word is empty" <<endl;
	}
	else
	{
		cout << "String word is not empty" << endl;
	}


	//4 .substr(start)
	string substrToEnd = word.substr(18);
	cout << "From position 18 to the end of String word is: " + substrToEnd << endl;


	//5 .substr(start, end)
	string substrStartToEnd = word.substr(21, 26);
	cout << "From position 21 to 26 of String word is: " << substrStartToEnd << endl;


	//6 .compare()
	string ctec = "Canyons Technical Education Center";
	if (word.compare(ctec) != 0)
	{
		cout << word << " is not " << ctec << endl;
	}
	else
	{
		cout << word << " = " << ctec << endl;
	}
}


