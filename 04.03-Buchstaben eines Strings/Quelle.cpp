#include <iostream>
#include <string>

using namespace std;

int main() {

	string input;

	cout << "Bitte einzeiligen text eingeben (ohne Leerzeichen): ? ";
	cin >> input;

	
	for (int i = 0; i < input.length(); i++) {
		cout << "Position: " << i << " Buchstabe: " << input[i] << endl;
	}

	system("PAUSE");
	return 0;
}