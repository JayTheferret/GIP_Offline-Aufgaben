#include <iostream>

using namespace std;

const char empty_pixel = '.';
const char filled_pixel = '#';
const int canvas_size = 40;

void init_canvas(char canvas[][canvas_size]) //leer initialisieren
{
    for (int x = 0; x < canvas_size; x++)
        for (int y = 0; y < canvas_size; y++)
            canvas[x][y] = empty_pixel;
}

void print_canvas(char canvas[][canvas_size]) //ausgeben
{
    for (int y = 0; y < canvas_size; y++) {
        for (int x = 0; x < canvas_size; x++) {
            cout << canvas[x][y];
        }
        cout << endl;
    }
    cout << endl;
}

// vv Mein Part vv

void linie(int x1, int y1, int x2, int y2, char canvas[][canvas_size])
{
    //if ((x1, y1) und(x2, y2) sind benachbart)
    //(Die differenz zwischen y1 und y2 muss 1 betragen damit sie direkte nachbarn sind)

    if ((x1, y1) == (x2, y2) - 1 ||
        (x1, y1) == (x2, y2) + 1 ||
        (x2, y2) == (x1, y1) - 1 ||
        (x2, y2) == (x1, y1) + 1
        ) {

        // Zeichne die Punkte(x1, y1) und(x2, y2)

        canvas[x1][y1] = filled_pixel;
        canvas[x2][y2] = filled_pixel;
    }

    else {

        // Berechne die ganzzahligen Koordinaten des
        // Punktes in der Mitte zwischen den beiden
        // Ausgangspunkten:

        int x_mitte = (x1 + x2) / 2;
        int y_mitte = (y1 + y2) / 2;

        // Rekursive Aufrufe:

       // 1. Linie vom ersten Punkt bis zur Mitte
       //also von x1,xy bis x_mitte , y_mitte

     
        //?????????????
        for (int x = x1; x <= x_mitte; x1++) {
            for (int y = y1; y <= y_mitte; y1++) {

                canvas[x][y] = filled_pixel;
            }
        }

       
       // 2. Linie von der Mitte bis zum zweiten Punkt
    }  
}

int main()
{
    char canvas[canvas_size][canvas_size];

    init_canvas(canvas); //wird leer initialisiert

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    do {
        cout << "Bitte geben Sie den ersten Punkt ein: ? ";
        cin >> x1 >> y1;
    } while (x1 < 0 || x1 >= canvas_size || y1 < 0 || y1 >= canvas_size); //nur richtige Punkte aktzeptieren 

    do {
        cout << "Bitte geben Sie den zweiten Punkt ein: ? ";
        cin >> x2 >> y2;
    } while (x2 < 0 || x2 >= canvas_size || y2 < 0 || y2 >= canvas_size);

   linie(x1, y1, x2, y2, canvas); //punkte in canvas einfügen (linie zeichnen)

    print_canvas(canvas);

    system("PAUSE");
    return 0;
}
