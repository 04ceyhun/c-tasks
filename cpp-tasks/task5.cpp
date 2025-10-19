#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Selsi temperaturunu daxil edin: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
