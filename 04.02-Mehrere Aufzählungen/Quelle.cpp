#include <iostream>

using namespace std;

int main()
{
    for (int z = 0, wert2 = 10, wert3 = 10; z < 10; z++, (wert2 *=2) , (wert3 *= 3))
    {
        cout
            << "Zeile: " << z + 1
            << " Verdoppler: " << wert2
            << " Verdreifacher: " << wert3
            << endl;

    }
    system("PAUSE");
    return 0;
}