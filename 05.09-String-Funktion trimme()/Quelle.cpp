#include <iostream>
#include <string>

using namespace std;

string trimme(string s) {
    string output;

    for(int i = 0; i < s.length(); i++)
        if (s[i] != '+') {
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