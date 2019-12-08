#include <iostream>

using namespace std;

int main() {

	int Zahlen[9];
	int uz [6];
	int UZ = 0;

	for (int i = 0; i < 9; i++) {

		//Nur Zahlen im Bereich 1-6, sonst neu abfragen

		do {
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> Zahlen[i];
		} while (Zahlen[i] < 1 || Zahlen[i] > 6);

		for (int j = 0; j < 6; j++) {
			if (Zahlen[i] == j + 1) {
				uz[j] += 1;
			}
		}
	}

	for (int j = 0; j < 6; j++) {
		if (uz[j] > 0) {
			UZ += 1;
		}
	}

	cout << "In der Eingabe kamen " << UZ << " unterschiedliche Zahlen vor." << endl;

	system("PAUSE");
	return 0;
}