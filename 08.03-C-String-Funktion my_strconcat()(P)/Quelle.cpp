#include <iostream>
#include <string>

using namespace std;

int main() {

	string text1, text2;

	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text1);
	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text2);



	cout << "Ergebnis my_strconcat(): " << text1 << text2 << endl;

	system("PAUSE");
	return 0;

}