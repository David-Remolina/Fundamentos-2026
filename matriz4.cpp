#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
long long factorial(int n) 
{
    if (n <= 1) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n, NUM, Valor;
    cout<<"Ingrese un numero de valores: ";
    cin>>n;
    vector<int> numeros;
    srand(time(0));
    cout<<"Vector resultante: ";    
    for (int i = 0; i < n; i++)
    {
        NUM = rand() % 10 + 1;
        numeros.push_back(NUM);
        cout<<numeros[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector (factorial de cada numero): ";
    for (int i = 0; i < n; i++)
    {
        Valor = factorial(numeros[i]);
        cout<<Valor<<" ";
    }    
}