#include <iostream>
#include <string>

using namespace std;

int main() {

	string input = " ";

	cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
	cin >> input;

	if (input[0,1,2] == input[5,4,3]) {
		cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	}

	else {
		cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
	}

	system("PAUSE");
	return 0;
}