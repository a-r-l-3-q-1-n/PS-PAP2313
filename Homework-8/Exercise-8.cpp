#include "iostream"
#include "climits"

using namespace std;

int main() {

    int n;
    int nn = 0;

    int elMAX = INT_MIN, posMAX;
    int elMIN = INT_MAX, posMIN;


    cout << "[+] Introduce numarul de elemente: "; cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "[~] Nu respecta conditia";
        return 0;
    }

    int list_of_numbers[n];
    int modified_list[n];

    for (int iter = 0; iter < n; iter++) {
        cout << "[+] Populeaza lista: "; cin >> list_of_numbers[iter];
    }


    // A
    cout << endl << endl << "a) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }


    cout << endl << "a) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        if (list_of_numbers[iter] < 0) {
            for (int duplication = 0; duplication < 2; duplication++) {
                cout << list_of_numbers[iter] << " ";
            }
        }

        if (list_of_numbers[iter] > 10) {
            cout << list_of_numbers[iter] - 15 << " ";
        }
    }


    // B
    cout << endl << endl << "b) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (list_of_numbers[iter] % 2 != 0) {
            modified_list[nn] = list_of_numbers[iter];
            nn++;
        }
    }

    cout << endl << "b) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << modified_list[iter] << " ";
    }

    // C
    cout << endl << endl << "c) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }


    cout << endl << "c) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] * 5 << " ";
    }

    // D
    cout << endl << endl << "d) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }


    cout << endl << "d) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        if (list_of_numbers[iter] % 2 != 0 && list_of_numbers[iter] > 0) {
            cout << list_of_numbers[iter] + 25 << " ";
        }

        if (list_of_numbers[iter] < 0) {
            cout << list_of_numbers[iter] / 2 << " ";
        }
    }

    // E
    cout << endl << endl << "e) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (list_of_numbers[iter] > elMAX) {
            elMAX = list_of_numbers[iter];
            posMAX = iter;
        }
        if (list_of_numbers[iter] < elMIN) {
            elMIN = list_of_numbers[iter];
            posMIN = iter;
        }
    }

    list_of_numbers[posMAX] = elMIN;
    list_of_numbers[posMIN] = elMAX;

    cout << endl << "e) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }


    return 0;

}
