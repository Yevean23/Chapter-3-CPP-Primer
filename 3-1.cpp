#include <vector>
#include <string>
#include <iostream>
using std::vector;
using namespace std;

/*
Exercises Section 3.3.1
Exercise 3.12: Which, if any, of the following vector definitions are in
error? For those that are legal, explain what the definition does. For those
that are not legal, explain why they are illegal.
(a) vector<vector<int>> ivec;
(b) vector<string> svec = ivec;
(c) vector<string> svec(10, "null");
Exercise 3.13: How many elements are there in each of the following
vectors? What are the values of the elements?
(a) vector<int> v1;
(b) vector<int> v2(10);
(c) vector<int> v3(10, 42);
(d) vector<int> v4{10};
(e) vector<int> v5{10, 42};
(f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};
*/


int main4() {
	// testing something from the chapter
	vector<string> vt{ 10 };
	for (auto &i : vt)
		cout << i << endl;


	// 3.12
	vector<vector<int>> ivec; // initialize a vector of int vectors
	//vector<string> svec = ivec; // error, string vector svec is be copy initialized from an int vector
	vector<string> svec(10, "null"); // initialize a vector of 10 strings, each with the literal string value: "null";

	// 3.13
	vector<int> v1; // empty int vector
	vector<int> v2(10); // an int vector with 10 ints with values 0
	vector<int> v3(10, 42); // an int vector with 10 ints with the literal value of 42
	vector<int> v4{ 10 }; // one element with value of 10
	vector<int> v5{ 10, 42 }; // an int vector with 10 ints with the literal value of 42
	vector<string> v6{ 10 }; // a vector of 10 empty strings
	vector<string> v7{ 10, "hi" }; // a vector of 10 strings, each with the literal value: "hi"


	return 0;
}