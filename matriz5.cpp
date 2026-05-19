#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    int n, num;
    cout<<"Ingrese un valor para el tamaño de la matriz: ";
    cin>>n;
    int Mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Valor ["<<i << j <<"]: ";
            cin>>num;
            Mat[i][j] = num;
        }      
    } 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;     
    }            
}