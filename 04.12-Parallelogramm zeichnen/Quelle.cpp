#include <iostream>
#include <string>

using namespace std;

int main() {

	int b = 0;
	int h = 0;

	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
	cin >> b;
	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> h;


	for (int i = 0; i < h; i++) {

		//erste Zeile

		if (i == 0) {

			for (int i = 0; i < b; i++) {
				cout << '*';
			}
		}

		//letzte Zeile

		else if (i == h-1) {
			for (int i = 0; i < h-1; i++) {
				cout << '.';
			}

			for (int i = 0; i < b; i++) {
				cout << '*';
			}
		}

		//Zwischenzeilen

		else {

			//Punkte

			int c = 0;
			
			do {
				cout << ".";
				c++;

			} while (c < i);
			
			cout << "*";

			//plus Zeichen

			for (int i = 0; i < b - 2; i++) {
				cout << "+";
			}

			cout << "*";
		}
	
		cout << endl;
		
	}

	cout << endl;

	system("PAUSE");
	return 0;
}