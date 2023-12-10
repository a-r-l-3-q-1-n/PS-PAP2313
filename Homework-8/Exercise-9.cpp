#include "iostream"

using namespace std;

int main() {

    int n;
    int nn = 0;
    int divisors = 1;


    cout << "[+] Introduce numarul de elemente: "; cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "[~] Nu respecta conditia";
        return 0;
    }

    int list_of_numbers[n];

    int a_list[n];
    int b_list[n];
    int c_list[n];
    int d_list[n];


    for (int iter = 0; iter < n; iter++) {
        cout << "[+] Populeaza lista: "; cin >> list_of_numbers[iter];
    }


    // A
    cout << endl << endl << "a) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (list_of_numbers[iter] % 2 == 0) {
            a_list[nn] = list_of_numbers[iter];
            nn++;
        }
    }

    cout << endl << "a) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << a_list[iter] << " ";
    }

    nn = 0;


    // B
    cout << endl << endl << "b) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }

    for (int num = 0; num < n; num++) {

        for (int divisor = 1; divisor < (list_of_numbers[num] / 2 + 1); divisor++) {
            if (list_of_numbers[num] % divisor == 0) {
                divisors++;
            }
        }

        if (divisors == 2 || divisors == 4) {
            b_list[nn] = list_of_numbers[num];
            nn++;
        }

        divisors = 1;
    }

    cout << endl << "b) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << b_list[iter] << " ";
    }

    nn = 0;

    // C
    cout << endl << endl << "c) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (list_of_numbers[iter] % 3 == 0) {
            c_list[nn] = list_of_numbers[iter];
            nn++;
        }
    }

    cout << endl << "c) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << c_list[iter] << " ";
    }

    nn = 0;

    // D
    cout << endl << endl << "d) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }

    for (int num = 0; num < n; num++) {

        for (int divisor = 1; divisor < (list_of_numbers[num] / 2 + 1); divisor++) {
            if (list_of_numbers[num] % divisor == 0) {
                divisors++;
            }

            if (divisors <= 4) {
                d_list[nn] = list_of_numbers[num];
                nn++;
                break;
            }
        }

        divisors = 1;
    }

    cout << endl << "d) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << d_list[iter] << " ";
    }


    return 0;

}
