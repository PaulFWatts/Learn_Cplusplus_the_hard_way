#include <iostream>

using namespace std;

int main() {
	int age = 50;
	float height = 6.25f;
	string name = "Paul";
	char initial = 'F';
	auto last = "Watts";
	long int big_negative = -123'456'789;
	unsigned long long lots_of_pi = 3'141'592'653'589'793'238;

	cout << "I am " << age << " years old.\n";
	cout << "I am also " << height << " length units tall.\n";
	cout << "My name is " << name << " " << initial << " " << last << endl;
	cout << "Big negative number " << big_negative << endl;
	cout << "Digits of Pi " << lots_of_pi << endl;

	cout << "Size of age: " << sizeof(age) << " bytes" << endl;
	cout << "Size of height: " << sizeof(height) << " bytes" << endl;
	cout << "Size of name: " << sizeof(name) << " bytes" << endl;
	cout << "Size of initial: " << sizeof(initial) << " bytes" << endl;
	cout << "Size of last: " << sizeof(last) << " bytes" << endl;
	cout << "Size of big_negative: " << sizeof(big_negative) << " bytes" << endl;
	cout << "Size of lots_of_pi: " << sizeof(lots_of_pi) << " bytes" << endl;

	return 0;
}
