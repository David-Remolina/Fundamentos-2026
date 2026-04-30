#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    int n, i=0;
    float suma=0, pi;
    cout << "Numero de terminos: ";
    cin >> n;
    
    for (i = 0; i <= n; i++)
    {
        suma = suma + (pow(-1,i))/(2 * i + 1);
    }
    pi= 4 * suma;
    cout << setprecision(10) << "El valor de pi es: " << pi << endl;
}