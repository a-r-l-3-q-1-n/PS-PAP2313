#include "iostream"


using namespace std;

int main() {

    int d1, d2, d3, d4, d5, d6, d7;
    int total;

    cout << "[+] Introduce ora: "; cin >> d1;
    cout << "[+] Introduce ora: "; cin >> d2;
    cout << "[+] Introduce ora: "; cin >> d3;
    cout << "[+] Introduce ora: "; cin >> d4;
    cout << "[+] Introduce ora: "; cin >> d5;
    cout << "[+] Introduce ora: "; cin >> d6;
    cout << "[+] Introduce ora: "; cin >> d7;

    total = d1 + d2 + d3 + d4 + d5 + d6 + d7;

    if (total < 20) {
        cout << "[~] Nu va fi pedepsit";
    } else {
        cout << "[~] Va fi pedepsit";
    }

    return 0;

}
