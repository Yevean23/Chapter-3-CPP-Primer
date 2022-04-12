#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Exercises Section 3.5.4
Exercise 3.37: What does the following program do?
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
cout << *cp << endl; ++cp;
}
Exercise 3.38: In this section, we noted that it was not only illegal but
meaningless to try to add two pointers. Why would adding two pointers be
meaningless?
Exercise 3.39: Write a program to compare two strings. Now write a
program to compare the values of two C-style character strings.
Exercise 3.40: Write a program to define two character arrays initialized
from string literals. Now define a third character array to hold the
concatenation of the two arrays. Use strcpy and strcat to copy the two
arrays into the third.
*/

int main12() {
	// 3.37 will run until it hits a '\0'
	const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
	const char* cp = ca;
	while (*cp) {
		cout << *cp << endl; ++cp;
	}


	// 3.38
	// that would simply point to a random place in memory
	
	
	// 3.39
	string string1 = "hi";
	string string2 = "hello";
	cout << "The strings are " << (string1 == string2 ? "equal" : "not equal") << endl;
	
	const char ca1[] = { 'h','i','\0' };
	const char ca2[] = { 'h','e','l','l','o','\0' };
	cout << "The C strings are " << (strcmp(ca1,ca2) == 0 ? "equal" : "not equal") << endl;

	// 3.40
	constexpr size_t arr_size = (cend(ca1) - cbegin(ca1)) + (cend(ca2) - cbegin(ca2));

	char ca3[arr_size] = {};

	strcat_s(ca3, ca1);
	strcat_s(ca3, ca2);
	cout << ca3 << endl;

	return 0;
}