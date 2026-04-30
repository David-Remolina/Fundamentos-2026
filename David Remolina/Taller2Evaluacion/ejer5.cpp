#include <iostream>
#include <string>
using namespace std;
bool Mayuscula(char caracter)
{
    return caracter >= 'A' && caracter <= 'Z';
}
bool Minuscula(char caracter)
{
    return caracter >= 'a' && caracter <= 'z';
}
bool Digitos(char caracter)
{
    return caracter >= '0' && caracter <= '9';
}
int Nivel(string clave)
{
    int i, longitud = 0, mayuscula = 0, minuscula = 0, digito = 0, condiciones = 0;
    for (i = 0; i < clave.length(); i++)
    {
        if (Mayuscula(clave[i]))        
        mayuscula = 1;
        
        if (Minuscula(clave[i]))        
        minuscula = 1;
        
        if (Digitos(clave[i]))
        digito = 1;        
    }
    if (clave.length()>=8)
    longitud = 1;
    
    condiciones = mayuscula + minuscula + digito + longitud;

    if (condiciones==4)
    return 1;
    
    if (condiciones==2)
    return 2;
    
    else
    return 3;        
}
int main()
{
    string clave;
    int nivel;
    cout << "Ingrese contraseña(evaluare su nivel de seguridad):" << endl;
    cin >> clave;
    nivel = Nivel(clave);
    if (nivel==1)
    cout << clave << " es una contrasesa es fuerte."<< endl;

    if (nivel==2)
    cout << clave << " es una contrasesa es media."<< endl;

    if (nivel==3)
    cout << clave << " es una contrasesa es debil."<< endl;    
}