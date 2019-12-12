#include <iostream>
#include <string>

using namespace std;

struct T_Morse_Data
{
    char letter;
    std::string morse_code;
};

const T_Morse_Data morse_data[] = 

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
 // Hier bei uns, um die Testl�ufe eindeutiger zu
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