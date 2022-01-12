#include <iostream>
#include <vector>
#include <string>

using namespace std;


/*
Exercises Section 3.3.2
Exercise 3.14: Write a program to read a sequence of ints from cin and
store those values in a vector.
Exercise 3.15: Repeat the previous program but read strings this time.
*/


int main5(){
	
	// 3.14
	vector<int> v1;
	int v2;
	while (cin >> v2)
		v1.push_back(v2);

	// 3.15
	vector<string> v3;
	string s;
	while (cin >> s)
		v3.push_back(s);

	return 0;
}