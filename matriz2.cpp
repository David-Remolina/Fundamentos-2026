#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    int n, t = 0, NUM;
    float media = 0.0, cant = 0, suma = 0.0;
    cout<<"Ingrese un numero de valores: ";
    cin>>n;
    vector<int> numeros;
    vector<int> mayores;
    srand(time(0));
    cout<<"Vector resultante (#n numeros0): ";    
    for (int i = 0; i < n; i++)
    {
        NUM = rand() % 10 + 1;
        numeros.push_back(NUM);
        suma = suma + NUM;
        cant = cant + 1;
        cout<<numeros[i]<<" ";
    }
    cout<<endl;
    media = suma/cant;
    cout<<"Media de los numeros: "<<media<<endl;
    for (int i = 0; i < n; i++)
    { 
        if(numeros[i]>media)
        {
            mayores.push_back(numeros[i]);
            t = t + 1;
        }
    }
    cout<<"# Mayores a la media: ";
    for (int i = 0; i < t; i++)
    {
        cout<<mayores[i]<<" ";
    }        
} 