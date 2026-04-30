#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int a, n, b, next;

    cout << "Ingrese un entero" << endl;
    cin >> n;
    a = 0;
    b = 1;
    while (b <= n) {
        next = a + b;
        a = b;
        b = next;
    }
    cout << b << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
