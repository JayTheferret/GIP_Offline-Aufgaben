#include <iostream>
using namespace std;

int main()
{
	int st1 = 0;
	int m1 = 0;
	int s1 = 0;

	cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? ";
	cin >> st1;
	cout << "Bitte geben Sie die Minutenzahl der ersten uhrzeit ein: ? ";
	cin >> m1;
	cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? ";
	cin >> s1;

	cout << st1 << ":" << m1 << " Uhr  und " << s1 << " Sekunden sind in Sekunden seit Mitternacht: " << ((st1 * 60) + m1) * 60 + s1 << endl;

	cout << endl;

	int st2 = 0;
	int m2 = 0;
	int s2 = 0;

	cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> st2;
	cout << "Bitte geben Sie die Minutenzahl der zweiten uhrzeit ein: ? ";
	cin >> m2;
	cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> s2;

	cout << st2 << ":" << m2 << " Uhr und " << s2 << " Sekunden sind in Sekunden seit Mitternacht: " << ((st2 * 60) + m2) * 60 + s2 << endl;

	cout << endl;

	//Differenz
		//stunden

	int dst = (st2 * 60 + m2 * 60 + s2) - (st1 * 60 + m1 * 60 + s1);
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:" << endl;
	cout << dst << " Stunden, " << (st2/60 + m2)%60 - (st1/60 +m1)%60 << " Minuten und " << (m2/60 + s2)%60 << " Sekunden." << endl;

	system("PAUSE");
	return 0;
}