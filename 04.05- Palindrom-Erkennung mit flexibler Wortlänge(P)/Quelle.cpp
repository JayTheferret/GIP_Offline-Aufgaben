#include <iostream>
#include <string>

using namespace std;

int main() {

	string input;
	bool b = true;
	int i = 0;

	do {
		cout << "Text: ? ";
		getline(cin, input);

		while (i < input.length()) {
			i++;
		}

	} while (input[i] < 'a' || input[i] > 'z');

	/*while(true) { //endlosschleife


		cout << "Text: ? ";
		cin >> input;

		

		for (int i = 0; i < input.length(); i++) {

			if (input[i] >= 'a' || input[i] <= 'z') {
				b = true;
				break;
			}

			if (b == true)
				break;
		}
	}*/

	//test auf palindrom

	//if(palindrom test positiv)
		cout << "schleife verlassen";
	cout << "Das eingegebene Wort ist ein Palindrom. " << endl;
	
	//if palindrom test negativ
	cout << "Das eingegebene Wort ist KEIN Palindrom. ";

		return 0;
		system("PAUSE");

}
