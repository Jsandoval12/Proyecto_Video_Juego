#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int respuesta;


cout << "\t ***************** \n";
cout << "\t  MENU DE JUEGOS \n";
cout << "\t ***************** \n\n";

cout << "Seleccione su juego \n \n";

cout << "1........StarShip \n\n";
cout << "2........Snake \n\n";

cout << "Ingrese un numero del menu para seleccionar un juego:";
cin >> respuesta;

 system("cls");
 
    if (respuesta == 1) {

         starShip();

     } else if (respuesta == 2) {

         snake();

    }
    return 0;
}
