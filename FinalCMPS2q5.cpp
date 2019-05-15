#include <iostream>
#include <string>
#include <vector>
using namespace std;


template <typename T>
void removeDuplicate(vector <T> & v) {
	vector<T> smaller;

	for (int i = 0; i < v.size(); i++) {
		int counter = 0;
		for (int j = 1; j < v.size(); j++) {
			if (v[i] == v[j]) {
				counter++;
			}
		}
		if (counter == 0) {
			smaller.push_back(v[i]);
		}
	}
	cout << "The distinct integers are: ";
	for (int i = 0; i < smaller.size(); i++) {
		cout << smaller[i] << " ";
	}


}

int main() {
	vector<double> numbers;
	double input;
	int counter = 0;
	while (counter < 5) {
		cout << "Enter 10 integers" << endl;
		cin >> input;
		numbers.push_back(input);
		counter++;
	}

	removeDuplicate(numbers);

	system("pause");
	return 0;
}