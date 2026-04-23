#include <iostream>
#include <string>
using namespace std;
int main()
{
    string frase, palabra, cambio, palabraX = "", resultante = "";
    int i;
    cout << " Escribe un frase: ";
    getline(cin, frase);
    cout << " Escribe una palabra por cambiar: ";
    getline(cin, palabra);
    cout << " Por cual palabra la cambias: ";
    getline(cin, cambio);
    for (i = 0; i < frase.size() + 1; i++)
    {
        if ( frase[i] == ' ' || frase[i] == '\0' )
        {
            if (palabraX == palabra)
            {
                palabraX = cambio;
                resultante = resultante + palabraX + " ";
                palabraX = "";
            }
            else
            {
            resultante = resultante + palabraX + " ";
            palabraX = "";
            }
        }  
        else
        {
            palabraX= palabraX + frase[i];
        }
    }        
    cout << resultante;
}
