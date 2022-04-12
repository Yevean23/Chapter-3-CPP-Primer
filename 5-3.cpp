#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
Exercises Section 3.5.3
Exercise 3.34: Given that p1 and p2 point to elements in the same array,
what does the following code do? Are there values of p1 or p2 that make
this code illegal?
p1 += p2 - p1;
Exercise 3.35: Using pointers, write a program to set the elements in an
array to zero.
Exercise 3.36: Write a program to compare two arrays for equality. Write a
similar program to compare two vectors.
*/


int main11() {

	// 3.34
	// p2 must be >= p1
	// adding the difference to p1 must not make p1 go to more than one past the last index of the array

	// 3.35
	constexpr size_t size = 5;
	int arr1[size];
	int* abegin = begin(arr1), * aend = end(arr1);

	while (abegin != aend) {
		*abegin = 0;
		++abegin;
	}

	// 3.36
	int arr2[size];
	for (int i = 0; i < 5; i++) {
		*(arr2 + i) = 0;
	}


	bool arraysEqual = true;
	int* abegin2 = arr2;
	abegin = begin(arr1);
	if ((end(arr1) - begin(arr1)) != (end(arr2) - begin(arr2))) {
		arraysEqual = false;
	}
	else {
		while (abegin != aend) {
			if (*abegin != *abegin2) {
				arraysEqual = false;
				break;
			}
			++abegin2;
			++abegin;
		}

	}

	cout << "The arrays are : " << ((arr1 == arr2) ? "equal" : "not equal") << endl;
	cout << "The arrays are : " << (arraysEqual ? "equal" : "not equal") << endl;

	bool vectorsEqual = true;
	vector<int> vec1;
	vector<int> vec2;

	for (int k = 0; k < 4; k++) {
		vec1.push_back(k); vec2.push_back(k);
	}


	if (vec1.size() != vec2.size()) {
		vectorsEqual = false;
	}
	else {
		auto j = vec2.begin();
		for (auto i = vec1.begin(); i != vec1.end();i++) {
			if (*i != *j) {
				vectorsEqual = false;
				break;
			}
			j++;
		}

	}
	cout << "The vectors are : " << ((vec1 == vec2) ? "equal" : "not equal") << endl;
	cout << "The vectors are : " << (vectorsEqual ? "equal" : "not equal") << endl;


	return 0;
}