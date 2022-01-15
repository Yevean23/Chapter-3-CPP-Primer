#include <vector>
#include <iostream>
#include <string>
using namespace std;

/*
Exercises Section 3.4.1
Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.
Exercise 3.22: Revise the loop that printed the first paragraph in text to
instead change the elements in text that correspond to the first paragraph
to all uppercase. After you’ve updated text, print its contents.
Exercise 3.23: Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.
*/

template <typename T>
void print_len_and_cont2(vector<T> in_vec) {
	for (auto i = in_vec.cbegin(); i != in_vec.cend(); i++) { cout << *i << endl; }
}

int main7() {
	// 3.21
	vector<int> v1; // empty int vector
	vector<int> v2(10); // an int vector with 10 uninitialized ints
	vector<int> v3(10, 42); // an int vector with 10 ints with the literal value of 42
	vector<int> v4{ 10 }; // an int vector with 10 uninitialized ints
	vector<int> v5{ 10, 42 }; // an int vector with 10 ints with the literal value of 42
	vector<string> v6{ 10 }; // a vector of 10 empty strings
	vector<string> v7{ 10, "hi" }; // a vector of 10 strings, each with the literal value: "hi"


	print_len_and_cont2(v1);
	print_len_and_cont2(v2);
	print_len_and_cont2(v3);
	print_len_and_cont2(v4);
	print_len_and_cont2(v5);
	print_len_and_cont2(v6);
	print_len_and_cont2(v7);

	// 3.22
	vector<string> text = { "hello my name is gustavo, but you can call me sus.","","I'm starting to think that we have an imposter amungus." };
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
		for (auto& i : (* it)) {
			i = toupper(i);
		}
	}
	print_len_and_cont2(text);

	// 3.23
	vector<int> v0(10, 1);
	for (auto it = v0.begin(); it != v0.end(); ++it) {
		*it = 2 * (*it);
	}
	print_len_and_cont2(v0);

	return 0;
}