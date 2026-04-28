#include <iostream>
#include <string>
using namespace std;
string censura(string frase)
{
    int i = 0;
    string convertido = "";
    while(i <= frase.length())
    {
        char L = frase[i];
        if(L == 'a' || L == 'e' || L == 'i' || L == 'o' || L == 'u' || L == 'A' || L == 'E' || L == 'I' || L == 'O' || L == 'U')
        L = '*';
        i = i + 1;
        convertido = convertido + L;
    }
    return convertido;
}
int main()
{
    string frase = "", a = "";
    cout << "Escribe una frase para censurar sus vocales: ";
    getline(cin, frase);
    a = censura(frase);
    cout << a;
}