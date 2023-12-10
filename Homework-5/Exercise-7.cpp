#include "iostream"

using namespace std;

int main() {
    
    int a, b, c;
    int length;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "C: "; cin >> c;

    cout << "[+] Cate numere doresti sa adaugi? "; cin >> length;
    cout << endl << endl;
    
    int list_of_numbers[length];

    for (int iter = 0; iter < length; iter++) {
        cout << "[+] Introduce numarul: "; cin >> list_of_numbers[iter];
    }
    
    cout << endl << endl;
    for (int iter = 0; iter < length; iter++) {
        if ((list_of_numbers[iter] % a == 0 || list_of_numbers[iter] % b == 0) && list_of_numbers[iter] < c) {
            cout << "[~] Au fost gasite: " << list_of_numbers[iter] << endl;
        }
    }


    return 0;

}