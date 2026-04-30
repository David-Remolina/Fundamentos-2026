#include <iostream>
#include <cmath>

using namespace std;

int fact(int n)
{
    int prod = 1, i;
    for(i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    return prod;
}

int main()
{
    int m, n, i, angulo;
    float x, suma = 0.0, division = 0.0, suma1 = 0.0;
    cout << "Elige el modo (1 = Sen)(2 = Cos)(3 = Tam)";
    cin >> m;

    switch(m)
    {
        case(1):

        cout << " Valor de n (terminos): ";
        cin >> n;
        cout << " Angulo (grados): ";
        cin >> angulo;
        x = (3.14159/180) * angulo;
        for(i=0;i <=n;i++)
        {
            suma = suma + ((pow(-1, i))*(pow(x, 2*i+1))) / (fact(2*i + 1));
        }
        cout << "Seno de " << angulo << " Es igual a: " << suma << endl;

        break;

        case(2):

        cout << " Valor de n (terminos): ";
        cin >> n;
        cout << " Angulo (grados): ";
        cin >> angulo;
        x = (3.14159/180) * angulo;
        for(i=0;i <=n;i++)
        {
            suma = suma + ((pow(-1, i))*(pow(x, 2*i))) / (fact(2*i));
        }
        cout << "Coseno de " << angulo << " Es igual a: " << suma << endl;
        break;

        case(3):

        cout << " Valor de n (terminos): ";
        cin >> n;
        cout << " Angulo (grados): ";
        cin >> angulo;
        x = (3.14159/180) * angulo;
        for(i=0;i <=n;i++)
        {
            suma = suma + ((pow(-1, i))*(pow(x, 2*i+1))) / (fact(2*i+1));
        }
        for(i=0;i <=n;i++)
        {
            suma1 = suma1 + ((pow(-1, i))*(pow(x, 2*i))) / (fact(2*i));
        }
        division = suma/suma1;
        cout << "Tangente de " << angulo << " Es igual a: " << division << endl;
        break;
        
        default:
        cout << " Se acaba";
    }
}
