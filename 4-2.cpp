#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
Exercises Section 3.4.2
Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.
Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104)
using iterators instead of subscripts.
Exercise 3.26: In the binary search program on page 112, why did we write
mid = beg + (end - beg) / 2; instead of mid = (beg + end) /2;?
*/

void print_adj_sums2(vector<int> myints) {
	auto i = myints.cbegin();
	while (i != myints.cend()) {
		if ((i + 1) != myints.cend()) {
			cout << *i << " + " << *(i+1) << " = " << *i + *(i + 1) << endl;
		}			
		else {
			cout << *i;
			break;
		}
		i+=2;
	}
}

void print_opposite_sums2(vector<int> myints) {
	auto i = myints.cbegin();
	auto j = myints.cend()-1;

	while (i != myints.cend()) {
		if (i!=j && i < j) {
			cout << *i << " + " << *j << " = " << *i + *j << endl;
		}
		else {
			cout << *i;
			break;
		}
		j--;
		i++;
	}
}




int main8() {

	// 3.24
	vector<int> int_vec;
	int input_int;
	while (cin >> input_int) {
		int_vec.push_back(input_int);
	}
	
	print_adj_sums2(int_vec);
	print_opposite_sums2(int_vec);
	
	// 3.25
	// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
	vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	
	while (cin >> grade) { // read the grades
		if (grade <= 100) {
			auto ere = scores.begin() + grade / 10;
			*ere += 1; // increment the counter for the current cluster
		} // handle only valid grades			 
	}
	for (auto& x : scores) {
		cout << x << endl;
	}


	// 3.26 The + operator is undefined for iterators. Thus, the expression is illegal
	/*
	vector<int> text = { 0,1,2,3,4,5,6,7,8,9,10 };
	int sought = 3;
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2; // original midpoint
	// while there are still elements to look at and we haven't yet found sought
	while (mid != end && *mid != sought) {
		if (sought < *mid) // is the element we want in the first half?
			end = mid; // if so, adjust the range to ignore the second half
		else // the element we want is in the second half
			beg = mid + 1; // start looking with the element just after mid
		mid = beg + (end - beg) / 2; // new midpoint
		mid = (beg + end) / 2; // ILLEGAL
	}
	*/
	return 0;
}