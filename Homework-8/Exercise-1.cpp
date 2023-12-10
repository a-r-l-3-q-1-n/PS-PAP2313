#include "iostream"
#include "climits"

using namespace std;

int main() {

    int n, num, x, y;
    int numsEven = 0, numEven = 0, numDiv3 = 0;
    int n_min = INT_MAX;
    int n_max = INT_MIN;

    cout << "[+] Cate numere sa fie citite: "; cin >> n;

    if (n <= 4 || n >= 1000) {
        cout << endl << "[~] Nu respecta conditia" << endl;
    } else {

        int list_of_numbers[n];

        for (int iter = 0; iter < n; iter++) {
            cout << endl <<  "[+] Introduce numere in array: "; cin >> num;
            list_of_numbers[iter] = num;
        }

        cout << "[+] Introduce x: "; cin >> x;
        cout << "[+] Introduce y: "; cin >> y;

        // A
        cout << endl << "[~] Numere la interval de 5 pozitii: ";
        for (int iter = 0; iter < n; iter += 5) {
            cout << list_of_numbers[iter] << " ";
        }

        // B
        cout << endl << "[~] Numere in ordinea inversa la interval de 4 pozitii: ";
        for (int iter = n - 1; iter >= 0; iter -= 4) {
            cout << list_of_numbers[iter] << " ";
        }

        // C
        cout << endl << "[~] Doar numere pare: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] % 2 == 0) {
                cout << list_of_numbers[iter] << " ";
            }
        }

        // D
        cout << endl << "[~] Doar numere impare: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] % 2 != 0) {
                cout << list_of_numbers[iter] << " ";
            }
        }

        // E
        cout << endl << "[~] Numere mai mari ca x si nu sunt divizibile cu y: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] > x && list_of_numbers[iter] % y != 0) {
                cout << list_of_numbers[iter] << " ";
            }
        }

        // F
        cout << endl << "[~] Numere mai mari ca x si mai mici ca y: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] > x && list_of_numbers[iter] < y) {
                cout << list_of_numbers[iter] << " ";
            }
        }

        // G
        cout << endl << "[~] Pozitiile numerelor negative si impare: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] < 0 || list_of_numbers[iter] % 2 != 0) {
                cout << iter << " ";
            }
        }

        // H
        cout << endl << "[~] Media numerelor pare: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] % 2 == 0) {
                numsEven += list_of_numbers[iter];
                numEven++;
            }
        }
        if (numEven != 0) {
            cout << static_cast<double>(numsEven) / numEven;
        } else {
            cout << "Nu exista numere pare!";
        }

        // I
        cout << endl << "[~] Suma numerelor divizibile cu 3: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] % 3 == 0) {
                numDiv3 += list_of_numbers[iter];
            }
        }
        cout << numDiv3;

        // J
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] > max1) {
                max2 = max1;
                max1 = list_of_numbers[iter];
            } else if (list_of_numbers[iter] > max2 && list_of_numbers[iter] != max1) {
                max2 = list_of_numbers[iter];
            }
        }

        // K
        cout << endl << "[~] Toate numerele cu exceptia celui minim si celui maximal: ";
        for (int iter = 0; iter < n; iter++) {
            if (list_of_numbers[iter] != n_min && list_of_numbers[iter] != n_max) {
                cout << list_of_numbers[iter] << " ";
            }
        }
    }


    return 0;

}
