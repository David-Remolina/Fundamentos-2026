#include <iostream>
#include <string>
using namespace std;
string mayuscula(string palabra)
{
    if (palabra.length()>0 && palabra[0]>= 'a' && palabra[0] <= 'z')
    {
        palabra[0] = palabra[0] - 32;
    }
    return palabra;    
}
int main()
{
    string palabra;
    cout << "Ingrese una Frase: " << endl;
    while (cin>>palabra)
    {
        cout<<mayuscula(palabra)<< " ";
    }
}