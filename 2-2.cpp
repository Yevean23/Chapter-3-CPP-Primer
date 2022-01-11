/*
Exercise 3.2: Write a program to read the standard input a line at a time.
Modify your program to read a word at a time.

Exercise 3.3: Explain how whitespace characters are handled in the string
input operator and in the getline function.

Exercise 3.4: Write a program to read two strings and report whether the
strings are equal. If not, report which of the two is larger. Now, change
the program to report whether the strings have the same length, and if
not, report which is longer.

Exercise 3.5: Write a program to read strings from the standard input,
concatenating what is read into one large string. Print the concatenated
string. Next, change the program to separate adjacent input strings by a
space.
*/

#include <iostream>
#include <string>
using namespace std;

int main3()
{
	
	// 3.2
	string myString;
	while (getline(cin, myString)) {
		// 3.3: in the string input operator, white spaces are removed, in getline() they are not.
		cout << myString << endl;
	}

	// 3.3: the string input operator uses spaces as a seperator for input values. 
	string myString2;
	while (cin >> myString2) {
		cout << myString2 << endl;
	}
	// In getline(), the spaces are preserved in the string.
	// Both share the newline character as a seperator.
	
	// 3.4
	string string1, string2;
	cout << "Input 2 strings (spaces included)" << endl;
	getline(cin, string1);
	getline(cin, string2);
	if (string1 != string2) {
		cout << string1 + ((string1 > string2) ? " > " : " < ") + string2 << endl;
	}
	else {
		cout << string1 + " is the same as " + string2 << endl;
	}

	if (string1.size() != string2.size()) {
		cout << string1 + ((string1.size() > string2.size()) ? " is longer than " : " is shorter than ") + string2 << endl;
	}
	else {
		cout << string1 +  " is the same length as " + string2 << endl;
	}

	// 3.5
	string string3,string32;
	cout << "input 2 strings (spaces will be used as seperators)" << endl;
	cin >> string3 >> string32;
	cout << string3+string32 << endl;
	
	string string4, string42;
	cout << "keep inputing strings separated by spaces and newlines" << endl;
	while (cin >> string42) {
		if (string4.empty()) {
			string4 = string42;
		}
		else {
			string4 += " " + string42;
		}
		
	}
	cout << string4 << endl;
	
	return 0;
}