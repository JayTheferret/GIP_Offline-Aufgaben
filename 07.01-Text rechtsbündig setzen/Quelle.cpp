#include <iostream>
#include <string>

using namespace std;

int main() {

	string text[4];
	int a[4];

	for (int i = 0; i < 4; i++) { //max 4 Eingaben zulassen
		cout << "Textzeile = ? ";
		getline(cin, text[i]);

		if (text[i].length() < 1) { //wenn eingabe leer -> keine weitere Zeile
			break;
		}
	}

	//Länge in a einspeichern

	int i = 0;

	for (int j = 0; j < 4; j++) {
		a[j] = text[i].length();
		i++;
	}

	//längste Zeile ermitteln

	string lang;

	if (a[0] > a[1] && a[0] > a[2] && a[0] > a[3]) {
		lang = text[0];
	}
	else if (a[1] > a[0] && a[1] > a[2] && a[1] > a[3]) {
		lang = text[1];
	}
	else if (a[2] > a[0] && a[2] > a[1] && a[2] > a[3]) {
		lang = text[2];
	}
	else {
		lang = text[3];
	}

	//Ausgabe

	for (int i = 0; i < 4; i++) {

		if (text[i].length() >= 1) {

			//solange text noch kürzer als längster, mit # auffüllen

			while (text[i].length() < lang.length()) {
				text[i] = "#" + text[i];
			}
			cout << text[i] << endl;
		}
	}

	system("PAUSE");
	return 0;
}

	