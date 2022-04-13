#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Exercises Section 3.5.5
Exercise 3.41: Write a program to initialize a vector from an array of
ints.
Exercise 3.42: Write a program to copy a vector of ints into an array of
ints.
*/

int main14() {

	// 3.41
	int x[] = { 1,2,3,4 };
	vector<int> y(cbegin(x), cend(x));

	for (auto& i : y) {
		cout << i << endl;
	}


	// 3.42
	int z[4];
	int* k = z;
	for (auto &i : y) {
		*k = i;
		cout << *k;
		k++;
	}
		

	return 0;
}