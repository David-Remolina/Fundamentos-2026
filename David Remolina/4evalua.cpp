#include <iostream>
using namespace std;
int main()
{
    int n, res, cos, a, b, base2 = 0, pot = 1, Vhex[2], i = 0, j = 1;    
    cout << "Ingrese un numero en base 10 [1-255]: ";
    cin >> n;
    if (n < 1 || n > 255)
    {
        cout << "Numero no valido." << endl;
    }
    else
    {
        a = n;
        while (a > 0)
        {
            res = a % 2;
            base2 = base2 + res * pot;
            pot = pot * 10;
            a = a / 2;
        }
        cout << n << " en base 2: " << base2 << endl;        
        b = n;
        cout << n << " en base 16: ";
        while (b > 0)
        {
            res = b % 16;
            temp[i] = res;
            b = b / 16;
            i=i+1;
        }
        for (j = i - 1; j >= 0; j--)
        {
            cos = temp[j];
            if (cos < 10)
                cout << cos;
            else
                cout << char(cos - 10 + 'A') << endl;
        }
    }
}