#pragma once
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class clsString
{
private:
	string _Value;
public:
	clsString()
	{
		_Value = "";
	}
	clsString(string Value)
	{
		_Value = Value;
	}
	void SetValue(string Value) {
		_Value = Value;
	}
	string GetValue() {
		return _Value;
	}
	__declspec(property(get = GetValue, put = SetValue)) string
		Value;

	static short CountWords(string S1)
	{
		string delim = " "; // delimiter
		short Counter = 0;
		short pos = 0;
		string sWord; // define a string variable
		// use find() function to get the position of the delimiters
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "")
			{
				Counter++;
			}
			//erase() until positon and move to next word.
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
		{
			Counter++; // it counts the last word of the string.
		}
		return Counter;
	}
	short CountWords()
	{
		return CountWords(_Value);
	};



	static short countLetter(string phrase, char target, bool caseSensitive = 1) {
		short count = 0;
		for (char i = 0; i < phrase.length(); i++) {
			if (caseSensitive) {
				if (target == phrase[i]) {
					count++;
				}
			}
			else
				if (tolower(target) == tolower(phrase[i])) {
					count++;
				}
		}
		return count;
	}
	short countLetter(char target, bool caseSensitive = 1) {
		return countLetter(_Value, target, caseSensitive);
	}



	static string trimLeft(string str) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != ' ') {
				str.erase(0, i);
				return str;
			}
		}
	}
	string trimLeft() {
		return trimLeft(_Value);
	}

	static string trimRight(string str) {
		for (int i = str.length() - 1; i >= 0; i--) {
			if (str[i] != ' ') {
				str.erase(i + 1, str.length() - 1);
				return str;
			}
		}
	}
	string trimRight() {
		return trimRight(_Value);
	}

	static string trim(string str) {
		str = trimLeft(str);
		str = trimRight(str);
		return str;
	}
	string trim() {
		return trim(_Value);
	}




	static string removePunc(string str) {
		string str2 = "";
		for (char& c : str) {
			if (!ispunct(c)) {
				str2 += c;
			}
		}
		return str2;
	}
	string removePunc()	 {
		return removePunc(_Value);
	}

};