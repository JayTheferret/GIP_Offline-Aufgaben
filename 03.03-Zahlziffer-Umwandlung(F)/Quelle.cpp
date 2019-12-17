#include <iostream>

using namespace std;

int main() {

	char input = 'a';

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> input;

	if (input == 'e') {
		cout << "Das Programm beendet sich jetzt." << endl;
	}

	else if (input >= '0' && input <= '9') {
		int inputz = input - 48;
		cout << inputz << " + 5 = " << inputz + 5 <<endl;
	}

	else {
		cout << "Weder 'e' noch Ziffer" << endl;
	}

	system("PAUSE");
	return 0;
}