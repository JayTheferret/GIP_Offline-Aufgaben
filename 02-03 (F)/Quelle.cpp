#include <iostream>
using namespace std;

int main()
{
	//Kandidaten 1 und 2

	int k1 = 0;
	int k2 = 0; 

	//Gesamt

	int g = 0;

	cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
	cin >> g;
	cout << "Bitte geben sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
	cin >> k1;
	cout << "Bitte geben sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
	cin >> k2;
	cout << "Auf den dritten Kandidaten sind somit " << g - (k1 + k2) << " Stimmen entfallen." << endl;

	//Prozentzahlen

	double K1 = k1;
	double K2 = k2;
	double K3 = g - (k1 + k2);

	double G = g;

	cout << "Kandidat 1 erhielt " << (K1/G)*100 << "% der Stimmen." << endl;
	cout << "Kandidat 2 erhielt " << (K2/G)*100 << "% der Stimmen." << endl;
	cout << "Kandidat 3 erhielt " << (K3/G)*100 << "% der Stimmen." << endl;

	system("PAUSE");
	return 0;
}