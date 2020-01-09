#include <iostream>
#include <string>

using namespace std;

struct T_Morse_Data
{
    char letter;
    string morse_code;
};

const T_Morse_Data morse_data[] = {

 { 'a', ".-" },
 { 'b', "-..." },
 { 'c', "-.-." },
 { 'd', "-.." },
 { 'e', "." },
 { 'f', "..-." },
 { 'g', "--." },
 { 'h', "...." },
 { 'i', ".." },
 { 'j', ".---" },
 { 'k', "-.-" },
 { 'l', ".-.." },
 { 'm', "--" },
 { 'n', "-." },
 { 'o', "---" },
 { 'p', ".--." },
 { 'q', "--.-" },
 { 'r', ".-." },
 { 's', "..." },
 { 't', "-" },
 { 'u', "..-" },
 { 'v', "...-" },
 { 'w', ".--" },
 { 'x', "-..-" },
 { 'y', "-.--" },
 { 'z', "--.." },
 { '0', "-----" },
 { '1', ".----" },
 { '2', "..---" },
 { '3', "...--" },
 { '4', "....-" },
 { '5', "....." },
 { '6', "-...." },
 { '7', "--..." },
 { '8', "---.." },
 { '9', "----." },
 // Leerzeichen zur Worttrennung werden im Morsecode
 // durch einen Slash '/' umgeben von Leerzeichen
 // dargestellt ...
 // (Alternative: Trennung durch 3 Leerzeichen)
 // Hier bei uns, um die Testl‰ufe eindeutiger zu
 // machen: Trennung mittels drei Slashes
 { ' ', "///" },
 { '.', ".-.-.-" },
 { ',', "--..--" },
 { ':', "---..." },
 { '?', "..--.." },
 { '-', "-....-" },
 { '/', "-..-." },
 { '@', ".--.-." },
 { '=', "-...-" }
};
const int morse_data_len = 45;

int main() {

    string text;
  
    std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, text);
    

    for (int j = 0; j < text.length(); j++) { //text durchlaufen

        if (text[j] <= 'Z' && text[j] >= 'A') {//Groﬂbuchstaben durch Kleinbuchstaben ersetzen

            text[j] += 32;
        }
        
        for (int i = 0; i < morse_data_len; i++) { //morse alphabet durchlaufen

            if (morse_data[i].letter == text[j]) {
                cout << morse_data[i].morse_code << "#";
            }
        }
    }

    std::cout << endl;



    std::system("PAUSE");
    return 0;

}
