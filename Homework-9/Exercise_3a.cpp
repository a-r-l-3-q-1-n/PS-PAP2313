#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int x = 3, y = 3;

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

    // a)
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            new_matrix[xx][yy] = matrix[xx][yy];
        }
    }

    for (int yy = 0; yy < y; yy ++) {
        int maxFromColumn = INT_MIN;
        for (int xx = 0; xx < x; xx ++) {
            if (matrix[xx][yy] > maxFromColumn) {
                maxFromColumn = matrix[xx][yy];
            }
        }
        new_matrix[x][yy] = maxFromColumn;
    }

    cout << endl << "[~] Matricea cu maximumul de pe fiecare coloana:" << endl;
    for (int xx = 0; xx < x+1; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << new_matrix[xx][yy] << " ";
        }
        cout << endl;
    }


    return 0;

}
