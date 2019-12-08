#include <iostream>
#include <string>

using namespace std;

int main() {

	string input = " ";

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? " << endl;
	cin >> input;

	string output;

	for (int i = 0; i < input.length(); i++) {

		if (input.at(i) >= 'a' && input.at(i) <= 'z') {
			output = output + input.at(i) + input.at(i);
		}

		else
			output = "baum";
	}

	cout << output <<endl;

	system("PAUSE");
	return 0;
}