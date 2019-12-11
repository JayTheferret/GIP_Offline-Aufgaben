#include <iostream>
#include <string>

using namespace std;

string trimme(string s) {
    string output;
    int anfang = 0;
    int ende = 0;

    //anfang definieren

    for (int i = 0; i < s.length(); i++) { //string durchlaufen

        if (s[i] != '+') {
            break;
        }
        anfang++;
    }

    //ende definieren

    for (int i = s.length()-1; i >= 0; i--) { //string durchlaufen rückwärts

        if (s[i] != '+') {
            break;
        }
        ende++;
    }

    //output schreiben (zwischen anfang und ende)

    for (int i = anfang; i < s.length() - ende; i++) {
            output += s[i];
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