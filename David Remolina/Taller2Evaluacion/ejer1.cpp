#include <iostream>
using namespace std;
bool (Palindromo(int num))
{
    int original, invertido = 0;
    original = num;
    while(num>0)
    {
        invertido =  invertido * 10 + (num%10);
        num = num/10;
    }
    return invertido == original;
}
int main()
{
    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    if (Palindromo(n))
    {
        cout << n << " es palindromo.";
    }
    else
    {
        cout << n << " no es palindromo.";
    }    
}