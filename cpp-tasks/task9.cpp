#include <iostream>
using namespace std;

int main() {
    int saniye;
    cout << "Saniyeni daxil edin: ";
    cin >> saniye;

    int saat = saniye / 3600;
    int qalan = saniye % 3600;
    int deqiqe = qalan / 60;
    int qalan_saniye = qalan % 60;

    cout << saat << " saat, " << deqiqe << " deqiqe, " << qalan_saniye << " saniye" << endl;

    return 0;
}
