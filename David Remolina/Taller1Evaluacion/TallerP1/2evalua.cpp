#include <iostream>
using namespace std;
int main()
{
    int n, puntos = 0 ;
    bool ON = true;    
    while (ON)
    {
        cout << "Ingrese valor (0-6): ";
        cin >> n;
        while (n < 0 || n > 6)
        {
            cout << "Numero invalido. Ingrese valor (0-6): ";
            cin >> n;
        }        
        switch(n)
        {    
            case 0:
            cout << "Perdio el Juego, Puntos totales perdidos." << endl;
            break;
            case 1:
            cout << "Terminaste el juego. Puntos totales: " << puntos << endl;
            break;
            default:
            puntos = puntos + n;
            cout << "Puntos Acumulados: " << puntos << endl;
            continue;        
        }    
        break;
    }     
}