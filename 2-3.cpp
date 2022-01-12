#include <iostream>
#include <string>

using namespace std;

/*
Exercises Section 3.2.3

Exercise 3.6: Use a range for to change all the characters in a string to X.

Exercise 3.7: What would happen if you define the loop control variable in
the previous exercise as type char? Predict the results and then change your
program to use a char to see if you were right.

Exercise 3.8: Rewrite the program in the first exercise, first using a while
and again using a traditional for loop. Which of the three approaches do
you prefer and why?

Exercise 3.9: What does the following program do? Is it valid? If not, why not?

string s;
cout << s[0] << endl;

Exercise 3.10: Write a program that reads a string of characters including
punctuation and writes what was read but with the punctuation removed.

Exercise 3.11: Is the following range for legal? If so, what is the type of c?

const string s = "Keep out!";
for (auto &c : s) { ... }
*/



int main3() {
	// 3.6
	string myString;
	getline(cin, myString);
	for (auto &thing : myString)
		thing = 'X';
	cout << myString << endl;

	
	// 3.7 I think it would work without any issues. 
	// if c was type char and not char& then myString2 would not be modified. 
	// it would keep initializing chars to the letters of myString2 and then assigning 'X' to them
	string myString2;
	getline(cin, myString2);
	for (char &c : myString2)
		c = 'X';
	cout << myString2 << endl;

	// 3.8
	decltype(myString2.size()) i = 0;
	while (i != myString2.size()) {
		myString2[i] = 'Y';
		i++;
	}
	cout << myString2 << endl;

	for (decltype(myString2.size()) j = 0; j != myString2.size(); j++) {
		myString2[j] = 'Z';
	}
	cout << myString2 << endl;
	// Although the traditional for loop is the superiour loop in general, in this case I do prefer the compact style of the range-based for loop.


	// 3.9
	string s;
	cout << s[0] << endl;
	// this program tries to access the 0th index of the empty string. since the index access must be: 0 >= index < s.size(). Thus the return is undefined

	// 3.10
	string myString3, string4;
	getline(cin,myString3);
	for (auto& k : myString3)
		if (!ispunct(k))
			string4 += k;
	cout << string4 << endl;


	// 3.11
	const string s1 = "Keep out!";
	for (auto& c : s1) { /* ... */ }
	// yes the range-based for loop is legal. c is a reference to a const char


	return 0;
}