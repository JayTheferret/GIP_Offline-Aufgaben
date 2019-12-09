#include <iostream>
#include <string>

using namespace std;

int main() {

	string text[4];

	for (int i = 0; i < 4; i++) { //max 4 Eingaben zulassen
		cout << "Textzeile = ? ";
		getline(cin, text[i]);

		if (text[i].length() < 1) { //wenn eingabe leer -> keine weitere Zeile
			break;
		}
	}

	int a[4];

	for (int i = 0; i < 4; i++) {
		text[i].length() = a[i];


		cout << text[0] << "länge" << a[0];
	}
}