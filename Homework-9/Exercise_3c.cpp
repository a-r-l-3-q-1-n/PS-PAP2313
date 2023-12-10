#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int x = 2, y = 3;

    int matrix[x][y];
    int new_matrix[x + 1][y];

    cout << endl << "[+] Populeaza matricea: " << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << "[" << xx << "][" << yy << "] = "; cin >> matrix[xx][yy];
        }
    }

    cout << endl << "[~] Elementele matricei:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << matrix[xx][yy] << " ";
        }
        cout << endl;
    }

    // c)
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            new_matrix[xx][yy] = matrix[xx][yy];
        }
    }

    for (int yy = 0; yy < y; yy++) {
        new_matrix[x][yy] = matrix[0][yy] + matrix[1][yy];
    }

    cout << endl << "[~] Matricea cu suma de pe fiecare linie:" << endl;
    for (int xx = 0; xx < x+1; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << new_matrix[xx][yy] << " ";
        }
    cout << endl;
    }


    return 0;

}
