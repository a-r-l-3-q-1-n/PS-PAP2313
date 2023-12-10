#include "iostream"

using namespace std;

int main() {

    int number, n;
    int list_of_numbers[]{};

    cout << "[+] Introduce numarul elemente: "; cin >> number;
    for (int iter = 0; iter < number; iter++) {
        cout << "[" << iter + 1 << "] Populeaza lista: "; cin >> n;
        list_of_numbers[iter] = n;

    }

    cout << endl;
    cout << "[~] Elementele din lista: ";
    for (int iter = 0; iter < number; iter++) {
        cout<<list_of_numbers[iter]<<" ";
    }

    for (int iter = 0; iter < number; iter++) {
        list_of_numbers[iter] += 10;
    }

    cout << endl;
    cout << "[~] Elementele modificate: ";
    for (int iter = 0; iter < number; iter++) {
        cout<<list_of_numbers[iter]<<" ";
    }


    return 0;

}

