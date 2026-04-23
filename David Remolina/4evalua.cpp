#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, num2, num16, res;
    string base2 = "", base16 = "";
    cout << "Ingrese un numero en base 10 [1-255]: ";
    cin >> n;
    if (n >= 1 && n <= 255)
    {
        num2 = n;
        num16 = n;
        while (num2 != 0)
        {
            base2 = to_string((num2%2)) + base2;
            num2 = num2/2;
        }
        while (num16 != 0)
        {
            res = num16 % 16;
            if(res<10)
            {
                base16 = to_string((num16%16)) + base16;
            }
            else 
            {
                char letra = 'A' + (res-10);
                base16 = letra + base16;
            }
            num16 = num16/16;        
        }
        cout << n << " en base 2 es: " << base2 << endl;
        cout << n << " en base 16 es: " << base16;
    }        
}