#include "iostream"
#include "cstring"

using namespace std;

int main() {

    char array[100];



    cout << "[+] Introduce caractere: "; gets(array);

    for (int iter = 0; iter < strlen(array); iter++) {

        // A
        if (48 <= int(array[iter]) && int(array[iter]) <= 57) {
            array[iter] = '+';
        }

        // B
        if (int(array[iter]) == 65 || int(array[iter]) == 69 || int(array[iter]) == 73 ||
            int(array[iter]) == 79 || int(array[iter]) == 85 ||
            int(array[iter]) == 97 || int(array[iter]) == 101 || int(array[iter]) == 105 ||
            int(array[iter]) == 111 || int(array[iter]) == 117
                ) {
            array[iter] = ' ';
        }

        // C
        if (65 <= int(array[iter]) && int(array[iter]) <= 90) {
            array[iter] = '8';
        }

    }

    cout << "[~] Sirul modificat: ";
    for (int iter = 0; iter < strlen(array); iter++) {
        cout << array[iter];
    }


    return 0;

}