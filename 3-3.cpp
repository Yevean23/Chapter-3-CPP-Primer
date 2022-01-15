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
	for (T& i : input_vec)
		cout << "|" << i << "|" << endl;
	cout << "---END OF VECTOR---\n\n" << endl;
}


void print_strings(vector<string> mystrings) {
	decltype(mystrings.size()) i = 0;
	int j = 0;
	string out_string;
	while (i != mystrings.size()) {
		out_string += mystrings[i] + " ";
		j++;
		if (j == 8) {
			out_string += "\n";
			j = 0;
		}
		i++;
	}
	cout << out_string << endl;
}

void print_adj_sums(vector<int> myints) {
	decltype(myints.size()) i = 0;
	while (i != myints.size()) {
		if ((i + 1) != myints.size()) {
			cout << myints[i] << " + " << myints[i + 1] << " = " << myints[i] + myints[i + 1] << endl;
		}			
		else {
			cout << myints[i];
			break;
		}
		i+=2;
	}
}

void print_opposite_sums(vector<int> myints) {
	decltype(myints.size()) i = 0;
	decltype(myints.size()) j = myints.size()-1;

	while (i != myints.size()) {
		if (i!=j && i < j) {
			cout << myints[i] << " + " << myints[j] << " = " << myints[i] + myints[j] << endl;
		}
		else {
			cout << myints[i];
			break;
		}
		j--;
		i++;
	}
}

int main6() {

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
	vector<string> myStrings;
	string myString;
	while (cin >> myString) {
		myStrings.push_back(myString);
	}
	for (auto& mystring : myStrings) {
		for (auto& i : mystring) {
			i = toupper(i);
		}
	}
	print_strings(myStrings);

	// 3.18
	// vector<int> ivec;
	// ivec[0] = 42;
	// ivec.size() = 0. When indexing, the index must be strictly less than the size. 0 !< 0, thus illegal. 
	

	// 3.19
	int n = 10;
	vector<int> vec1(n, 42); // this is the most readable method, and works becuase the value is the same
	vector<int> vec2 = { 42,42,42,42,42,42,42,42,42,42 }; // this does not scale and loses readability quickly
	vector<int> vec3;
	for (; vec3.size() != n; vec3.push_back(42)) {} // using push_back to create dynamically sized arrays is recommended, however in this case, maybe not
	print_len_and_cont(vec1);
	print_len_and_cont(vec2);
	print_len_and_cont(vec3);
	
	// 3.20
	vector<int> int_vec;
	int input_int;
	while (cin >> input_int) {
		int_vec.push_back(input_int);
	}

	print_adj_sums(int_vec);
	print_opposite_sums(int_vec);

	return 0;
}