#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

bool isPalindrome(const string& s);

int main() {
	string s1;
	cout << "Enter a string: ";
	getline(cin, s1);
	cout << s1 << endl;

	for (int i = 0; i <=s1.length(); i++) {
		s1[i] = tolower(s1[i]);
	}

	isPalindrome(s1);

	system("pause");
	return 0;

}

bool isPalindrome(const string& input) {

	if (input == string(input.rbegin(), input.rend())) {
		cout << "the string is a palindrome" << endl;
		return 1;
	}
	else {
		cout << "the string is not a palindrome " << endl;
		return 0;
	}
}