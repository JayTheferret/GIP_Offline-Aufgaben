#include <iostream>
#include <string>

using namespace std;

bool only_letters(string input){

	int i = 0;

	while ( i < input.length()) {

		if (input[i] < 'a' || input[i]  > 'z') {
			return false;
			break;
		}

		else {
			i++;
		}
	}

	return true;
}

int main() {

	string input;

	do {
		cout << "Text: ? ";
		getline(cin, input);

	} while (only_letters(input) == false);

	//test auf palindrom

	string input_reverse;

	for (int i = input.length()-1; i >= 0; i--) {
		input_reverse += input[i];
	}


	if (input == input_reverse) {

		cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	}
	
	else {
		cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
	}

		system("PAUSE");
		return 0;

}