#include <iostream>
using namespace std;
int main()
{
    int N, i, h;
    cin >> N;
    int lista[N];

    for (i=0; i< N; i++)
    {
        cin >> lista[i];
    }

    for (i = 0; i <= N; i++)
    {
        for (h = 0; h <= N-1; h++)
        {
            if(lista[h] > lista[h+1])
            {
                swap(lista[h], lista[h+1]);
            }                        
        }        
    }   
    for (i = 0; i < N; i++) 
    {
        cout << lista[i] << " ";
    }
}


