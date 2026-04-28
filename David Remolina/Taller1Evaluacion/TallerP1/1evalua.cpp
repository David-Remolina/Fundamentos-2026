#include <iostream>
using namespace std;
int main()
{
    int n, fila = 1, impar = 1, Ximpares = 1;
    cout << "Ingrese un digito de 1 a 9: " <<endl;
    cin >> n;
    if(n < 1 || n > 9)
    {
        cout << "Este valor no es valido (debe estar entre 1 y 9)" << endl;
    }
    else
    {
        cout << "Lista: " << endl;
        for (fila = 1; fila <= n; fila++) 
        {
            for ( Ximpares = 1; Ximpares <= fila; Ximpares++) 
            {
                cout << impar << " ";
                impar += 2;
            }            
            cout << endl;
        }        
    }
}