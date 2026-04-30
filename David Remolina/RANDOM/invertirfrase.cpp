#include <iostream>
#include <string>

using namespace std;
int main()
{
    string frase, palabra = "", resultante = "";
    int i;
    cout << " Escribe un frase: ";
    getline(cin, frase);
    for (i = 0; i < frase.size(); i++)
    {
        if ( frase[i] == ' ' )
        {
            resultante = " " + palabra + resultante;
            palabra = "";
        }  
        else
        {
            palabra= palabra + frase[i];
        }
    }
    if ( frase.size() > 0)
    {
        resultante = palabra + resultante;
    }
    cout << resultante;
}