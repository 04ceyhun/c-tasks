#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Iki eded daxil edin: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Deyisdikden sonra: a = " << a << ", b = " << b << endl;

    return 0;
}
