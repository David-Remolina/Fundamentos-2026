// Ejercicio 1

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int N; 
    cin>> N;
    srand(time(0)); 

    vector<int> matriz(N * N);

    for (int &cell : matriz) 
    {
        cell = rand() % 100;
    }

    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j)
        {
            cout << matriz[i * N + j] << "\t";
        }
        cout << "\n";
    }
}
