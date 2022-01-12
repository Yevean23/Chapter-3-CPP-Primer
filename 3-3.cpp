#include <vector>
#include <string>
#include <iostream>

using namespace std;

/*
Exercises Section 3.3.3
Exercise 3.16: Write a program to print the size and contents of the
vectors from exercise 3.13. Check whether your answers to that exercise
were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you
were wrong.
Exercise 3.17: Read a sequence of words from cin and store the values a
vector. After you’ve read all the words, process the vector and change
each word to uppercase. Print the transformed elements, eight words to a
line.
Exercise 3.18: Is the following program legal? If not, how might you fix it?
vector<int> ivec;
ivec[0] = 42;
Exercise 3.19: List three ways to define a vector and give it ten elements,
each with the value 42. Indicate whether there is a preferred way to do so
and why.
Exercise 3.20: Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of

the first and last elements, followed by the sum of the second and second-to-
last, and so on.
https://www.youtube.com/watch?v=6WkySwfWh6Y
*/

template <typename T>
void print_len_and_cont(vector<T> input_vec) {
	cout << "size of vector: " << input_vec.size() << endl;
	cout << "Printing Contents:" << endl;
	for (T &i : input_vec)
		cout << i << endl;
	cout << "---END OF VECTOR---\n\n" << endl;
}


int main() {

	// 3.16
	vector<int> v1; // empty int vector
	vector<int> v2(10); // an int vector with 10 uninitialized ints
	vector<int> v3(10, 42); // an int vector with 10 ints with the literal value of 42
	vector<int> v4{ 10 }; // an int vector with 10 uninitialized ints
	vector<int> v5{ 10, 42 }; // an int vector with 10 ints with the literal value of 42
	vector<string> v6{ 10 }; // a vector of 10 empty strings
	vector<string> v7{ 10, "hi" }; // a vector of 10 strings, each with the literal value: "hi"

	
	print_len_and_cont(v1);
	print_len_and_cont(v2);
	print_len_and_cont(v3);
	print_len_and_cont(v4);
	print_len_and_cont(v5);
	print_len_and_cont(v6);
	print_len_and_cont(v7);


	/*
	for (int i = 0; i < 10; i++) {
		string var = "print_len_and_cont(v" + i +");";
		exec(var);
	}
	Would be nice, but since C++ does not allow for dank stuff like this
	*/

	// 3.17


	return 0;
}