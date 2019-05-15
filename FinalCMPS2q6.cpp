#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 
#include <vector>
#include <algorithm>
using namespace std;

class Car {
public:
	int Price;
	Car(int uprice) : Price(uprice) {};
	void print() { cout << Price << endl; }

};

bool SortByPrice(Car &A, Car &B) {
	return (A.Price < B.Price);
}

int main() {
	int random_price;
	
	vector <Car> series;
	srand((int)time(0));

	for (int i = 0; i < 200; i++) {
		random_price = rand()%1000+50000;
		series.push_back(Car(random_price));
	}

	sort(series.begin(), series.end(), SortByPrice);

	for (vector<Car>::iterator it = series.begin(); it != series.end(); ++it) {
		it->print();
	}

	system("pause");
	return 0;
}