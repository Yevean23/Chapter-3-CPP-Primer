#include <iostream>
#include <string>

using namespace std;

int main1() {
	// 3.1
	/*
	Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76)
	with appropriate using declarations.
	*/
	int first_num, second_num;
	for (cin >> first_num >> second_num; first_num <= second_num; std::cout << first_num++ << endl) {}	

	return 0;
}