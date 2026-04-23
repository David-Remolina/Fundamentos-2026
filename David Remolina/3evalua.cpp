#include <iostream>
using namespace std;
int main()
{
    float nota, suma = 0.0, maximo = 0.0, minimo = 0.0, promedio = 0.0;
    int cantidad = 0, aprobados = 0, reprobados = 0;
    bool PrimeraN = true;
    while(cin >> nota)
    {
        if(nota == -1)
        {
            break;
        }
        if(nota < 0.0 || nota > 5.0)
        {
            cout << " El valor no se puede registrar como nota (Ingrese de 0.0 a 5.0): ";
            continue;
        }
        cantidad = cantidad + 1;
        suma = suma + nota;
        if(PrimeraN)
        {
            maximo = nota;
            minimo = nota;
            PrimeraN = false; 
        }
        else
        {
            if (nota > maximo)
            {
                maximo = nota;
            }
            if (nota < minimo)
            {
                minimo = nota;
            }    
        }
        if (nota < 3.0)
        {
            reprobados = reprobados + 1;
        }
        if (nota >= 3.0)
        {
            aprobados = aprobados + 1;
        }                               
    }
    promedio = suma / cantidad;
    cout << "Total de notas: "<< cantidad << endl;
    cout << "Promedio: "<< promedio << endl; 
    cout << "Nota minima: " << minimo << endl;
    cout << "Nota maxima: " << maximo << endl;
    cout << "Total de Aprobados: " << aprobados << endl;
    cout << "Total de Reprobados: " << reprobados << endl;
}



