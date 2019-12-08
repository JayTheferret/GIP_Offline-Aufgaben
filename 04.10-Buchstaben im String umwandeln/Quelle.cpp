#include <iostream>
#include <string>

using namespace std;

int main() {

	string input = " ";

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, input);

	string output;

	for (int i = 0; i < input.length(); i++) {

		if (input.at(i) >= 'a' && input.at(i) <= 'z') {
			output = output + input.at(i) + input.at(i);
		}

		else if (input.at(i) >= 'A' && input.at(i) <= 'Z') {
			output = output + input.at(i) + input.at(i) + input.at(i);
		}

		else if (input.at(i) == '?' || input.at(i) == '!') {
			output = output;
		}

		else if (input.at(i) >= '0' && input.at(i) <= '9') {
			output += '.';
		}

		else if (input.at(i) == ' ') {
			output += '_';
		}

		else {
			output += input.at(i);
		}
	}

		cout << "Der Text nach der Umwandlung: " << output << endl;

		system("PAUSE");
		return 0;
}
