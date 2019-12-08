#include <iostream>
using namespace std;

int main()
{
	char Zeichen = 0;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> Zeichen;

	if (Zeichen == 'j' || Zeichen == 'J')
		cout << "Es handelt sich um eine Ja Eingabe." << endl;

	else if (Zeichen == 'n' || Zeichen == 'N')
		cout << "Es handelt sich um eine Nein Eingabe." << endl;

	else
		cout << "Es handelt sich um eine sonstige Eingabe." << endl;

	system("PAUSE");
	return 0;
}