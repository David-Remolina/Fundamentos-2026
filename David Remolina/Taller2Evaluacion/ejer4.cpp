#include <iostream>
using namespace std;
bool perfecto(int num)
{
    int suma = 0, i;
    for (i= 1; i < num; i++)
    {
        if(num%i == 0)
        suma = suma + i;
    }
    return num == suma;    
}
int main()
{
    int num;
    cin >> num;
    while(num != 0)
    {
        if (perfecto(num))
        cout << "Es Perfecto";
        else
        cout << "No es perfecto";
        cin >> num;
    }    
}