#include <iostream>
#include <string>

using namespace std;

string trimme(string s) {
    string output;
    char anfang;
    char ende;

    //vorne entfernen

    for (int i = 0; i < s.length(); i++) { //string durchlaufen

        if (s[i] != '+') {
            anfang = s[i];
            break;
        }
        return anfang;
    }

    for (int i = s.length(); i > 0; i--) { //string durchlaufen rückwärts

        if (s[i] != '+') {
            ende = s[i];
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {

        if (s[i] >= anfang && s[i] <= ende) {
            output += s[i];
        }
    }
   
    s = output;
    return s;
}

int main()
{
    string s = "";

    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s);

    cout << "Vorher: " << s << endl;
    cout << "Nachher: " << trimme(s) << endl;
    system("PAUSE");
    return 0;
}