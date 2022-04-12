#include <vector>
#include <string>
#include <iostream>
using namespace std;

/*
Exercises Section 3.5.1
Exercise 3.27: Assuming txt_size is a function that takes no arguments
and returns an int value, which of the following definitions are illegal?
Explain why.
unsigned buf_size = 1024;
(a) int ia[buf_size];
(b) int ia[4 * 7 - 14];
(c) int ia[txt_size()];
(d) char st[11] = "fundamental";
Exercise 3.28: What are the values in the following arrays?
string sa[10];
int ia[10];
int main() {
string sa2[10]; int ia2[10];
}
Exercise 3.29: List some of the drawbacks of using an array instead of a vector.
*/

template <typename T>
void print_arr(T& arr) {
	for (int i = 0; i < 10; i++) {
		cout << i << " : |" << arr[i] << "|" << endl;
	}
}

string sa[10];
int ia[10];
int main9() {
	/*/ 3.27
	unsigned buf_size = 1024;
	int ia[buf_size]; // buf_size must be const
	int ia[4 * 7 - 14]; // this is fine
	int ia[txt_size()]; // txt_size() must be a constexpr
	char st[11] = "fundamental"; // there is not enough room for this string (null char)
	*/

	// 3.28
	string sa2[10]; int ia2[10];

	print_arr(sa);
	print_arr(sa2);
	print_arr(ia);
	print_arr(ia2);

	// the string arrays are initialized with 10 empty strings
	// the outer int array is initialized with 10 0s
	// the inner int array is initialized with 10 counts of something crazy
	
	// 3.29
	// you don't always know the how many elements you will need, so a vector is more flexible
	// arrays cannot be declared as a copy of another.

	return 0;
}