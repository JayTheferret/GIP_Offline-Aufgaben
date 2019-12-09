#include <iostream>
#include <string>

using namespace std;

void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil) {

	bool done = false;

	for (int i = 0; i < eingabe.size(); i++) { //durchlaufen

		if (done == false) {
			if (eingabe[i] != zeichen) { //solange Zeichen nicht erreicht
				erster_teil += eingabe[i];
			}
			else {
				done = true; //done -> if verlassen, in else springen
			}
		}

		else { //rest in zweiter_teil packen
			zweiter_teil += eingabe[i];
		}



		/*for (int j = 0; j < i; j++) {
			erster_teil += eingabe[j];
		}
		for (int j = i + 1; j < eingabe.size(); j++) {
			zweiter_teil += eingabe[j];
		}
	}*/
	}
}

int main() {

	string Zeichenkette;
	char Zeichen;

	string erster_teil , zweiter_teil;


	cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(cin, Zeichenkette);

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> Zeichen;


	spalte_ab_erstem(Zeichen, Zeichenkette, erster_teil, zweiter_teil);

	cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << endl;
	cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << endl;

	system("PAUSE");
	return 0;
}