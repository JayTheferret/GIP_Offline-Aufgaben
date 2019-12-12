#include <iostream>

using namespace std;

int main() {

	char input;

	cout << "Bitte geben Sie den Kleinbuchstaben ein: ? ";
	cin >> input;
	
	char output = input - 32;

	cout << "Der entsprechende Grossbuchstabe lautet: " << output << endl;

	system("PAUSE");
	return 0;
}