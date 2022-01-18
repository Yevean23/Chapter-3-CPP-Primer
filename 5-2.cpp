#include <vector>
#include <string>
#include <iostream>
using namespace std;

/*
Exercises Section 3.5.2
Exercise 3.30: Identify the indexing errors in the following code:
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
ia[ix] = ix;

Exercise 3.31: Write a program to define an array of ten ints. Give each
element the same value as its position in the array.

Exercise 3.32: Copy the array you defined in the previous exercise into
another array. Rewrite your program to use vectors.

Exercise 3.33: What would happen if we did not initialize the scores array
in the program on page 116?
*/

int main10() {
	// 3.30  ix must be strictly less than array_size

	// 3.31
	int arr[10];
	for (int i = 0; i < 10;i++) {
		arr[i] = i;
	}


	// 3.32
	int arr2[10];
	for (int i = 0; i < 10; i++) {
		arr2[i] = arr[i];
	}
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}


	// 3.33
	
	unsigned scores[11]; // 11 buckets, all value initialized to 0
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10]; // increment the counter for the current cluster
	}
	for (auto& i : scores) {
		cout << i << endl;
	}
	
	// now we get 11 buckets, but they are undefined. now adding to them yeilds negative numbers? seems like im reading random memory

	return 0;
}