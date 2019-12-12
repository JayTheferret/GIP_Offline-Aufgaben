#include <iostream>

using namespace std;

int main() {

	int input[4] ;

	for (int i = 0; i < 4; i++) {
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> input[i];
	}

	int vzyes = 0; //Vergleichszahl Zähler
	int vzno = 0; //andere Zahlen

	for (int i = 0; i < 4; i++) {

		if (input[i] == 99) {
			vzyes++;
		}
		else {
			vzno++;
		}
	}

	cout << vzyes << " Eingabezahlen waren gleich der Vergleichszahl 99." << endl;
	cout << vzno << " Eingabezahlen waren ungleich der Vergleichszahl 99." << endl;

	system("PAUSE");
	return 0;
}