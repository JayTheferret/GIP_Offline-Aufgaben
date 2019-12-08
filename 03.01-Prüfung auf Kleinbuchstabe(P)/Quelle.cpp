#include <iostream>
using namespace std;

int main()
{
	char Zeichen = 0;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> Zeichen;

	if (Zeichen < 'a' || Zeichen > 'z')
		cout << "KEIN Kleinbuchstabe (a-z)." << endl;

	else 
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;

		system("PAUSE");
		return 0;
}