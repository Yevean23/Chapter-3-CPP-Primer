#include <iostream>
using namespace std;

/*
Exercises Section 3.6
Exercise 3.43: Write three different versions of a program to print the
elements of ia. One version should use a range for to manage the
iteration, the other two should use an ordinary for loop in one case using
subscripts and in the other using pointers. In all three programs write all the
types directly. That is, do not use a type alias, auto, or decltype to
simplify the code.
Exercise 3.44: Rewrite the programs from the previous exercises using a
type alias for the type of the loop control variables.
Exercise 3.45: Rewrite the programs again, this time using auto.
*/


int main15() {

	// 3.43
	int ia[3][4] = {0};

	// for range
	for (auto& row : ia) {
		for (auto col : row) {
			cout << col << " ";
		}
		cout << endl;
	}
	cout << endl;

	// using subscripting
	for (size_t i = 0; i < 3; ++i) {
		for (size_t j = 0; j < 4; ++j) {
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	// using pointers
	for (int (* pi)[4] = ia; pi != ia + 3; ++pi) {
		for (int *pj = *pi; pj != *pi+4; ++pj) {
			cout << *pj << " ";
		}
		cout << endl;
	}
	cout << endl;

	// 3.44
	typedef int int_array[4];

	for (int_array *pi = ia; pi != ia + 3; ++pi) {
		for (int *pj = *pi; pj != *pi + 4; ++pj) {
			cout << *pj << " ";
		}
		cout << endl;
	}
	cout << endl;

	// 3.45
	for (auto pi = ia; pi != ia + 3; ++pi) {
		for (auto pj = *pi; pj != *pi + 4; ++pj) {
			cout << *pj << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}