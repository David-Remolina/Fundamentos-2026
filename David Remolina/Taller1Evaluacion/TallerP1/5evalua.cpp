#include <iostream>
using namespace std;
int main()
{
    long long num, max = 0, pasos = 0;
    bool Valorinicial = true;
    cout << " Ingrese un valor mayor o igual a 1: " << endl;
    cin >> num;
    while(num != 1)
    {
        if (Valorinicial)
        {
            max = num;
            Valorinicial = false;
        }
        else
        {
            if (num > max)
            {
                max = num;
            }            
        }
        if(num%2 == 0)
        {
            num = num / 2;
            cout << " -> " << num ;
        }
        else
        {
            num = (num * 3) + 1;
            cout << " -> " << num ;
        }
        pasos = pasos + 1;
    }
    cout << " " << endl;
    cout << "Pasos: " << pasos << endl;
    cout << "Valor Maximo: " << max ;
}