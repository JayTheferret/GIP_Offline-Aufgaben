#include <iostream>

using namespace std;

int main() {

	int t = 0; //Uhrzeit

	cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
	cin >> t;

	if (t == 23 || t >= 0 && t <= 5) {
		cout << "Gute Nacht." << endl;
	}

	else if (t >= 6 && t <= 10) {
		cout << "Guten Morgen." << endl;
	}

	else if (t >= 11 && t <= 13) {
		cout << "Mahlzeit." << endl;
	}

	else if (t >= 14 && t <= 17) {
		cout << "Guten Tag." << endl;
	}

	else if (t >= 18 && t <= 22) {
		cout << "Guten Abend." << endl;
	}

	else {
		cout << "Keine erlaubte Stundenangabe." << endl;
	}

	system("PAUSE");
	return 0;
}