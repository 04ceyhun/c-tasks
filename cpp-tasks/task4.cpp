#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Radiusu daxil edin: ";
    cin >> r;

    double pi = 3.14159;
    cout << "Sahesi: " << pi * r * r << endl;
    cout << "Cevresi: " << 2 * pi * r << endl;

    return 0;
}
