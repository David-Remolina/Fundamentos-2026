#include <iostream>
using namespace std;
int main()
{
    int n, original, d = 2, contador = 0;
    cout <<" Ingrese un numero (>1): ";
    cin >> n;
    if(n<=1)
    {
        cout << " Error: El numero debe ser mayor que 1.";
    }
    original = n;
    cout << original << " = ";
    while (n>1)
    {
        if(n%d == 0)
        {
            cout << d ;
            n = n/d;
            contador = contador + 1;
            if(n>1)
            {
                cout << " x ";
            }
        }
        else
        {
            d = d + 1;
        }
    }
    cout << endl;
    cout << "Total de factores = " << contador << endl;    
    if(contador == 1)
    {
        cout << "El numero es primo.";
    }
    else
    {
        cout << "El numero No es primo.";
    }    
}