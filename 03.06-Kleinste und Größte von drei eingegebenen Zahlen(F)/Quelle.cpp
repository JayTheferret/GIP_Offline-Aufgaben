#include <iostream>

using namespace std;

int main() {

	int input[3];

	for (int i = 0; i < 3; i++) {
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> input[i];
	}

	int g = input[0];
	int k = input[0];

	for (int i = 0; i < 3; i++) {

		if (input[i] > g) {
			g = input[i];
		}
		else {
			k = input[i];
		}
	}

	cout << "Die kleinste eingegebene Zahl lautet: " << k << endl;
	cout << "Die groesste eingegebene Zahl lautet: " << g << endl;

	system("PAUSE");
	return 0;
}