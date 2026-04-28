#include <iostream>
using namespace std;
int mcd(int a, int b)
{
    while(b!=0)
    {
        int res;
        res = a%b;
        a = b;
        b = res;
    }
    return a;
}
int mcm(int a, int b)
{
    return (a*b)/mcd(a,b);
}
int main()
{
    int a , b;
    cout << "ingrese 2 numeros(para hallar el mcm): " << endl;
    cin >> a >> b;
    cout << "El mcm es " << mcm(a,b);
}