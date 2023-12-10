#include "iostream"
#include "cmath"

using namespace std;

int main() {

    int x, y;

    cout << "[+]Introduce numarul: "; cin >> x;
    cout << "[+]Introduce numarul: "; cin >> y;
    cout << endl;

    // Exercise 1
    float result_1 = (pow(x, y)+pow(y, x))/(pow(x, -y)+pow(y, -x));
    cout << "1. Result: " << result_1 << endl;

    // Exercise 2
    float result_2 = (tan(x)+tan(y))/(sqrt(abs(x-y)+1));
    cout << "2. Result: " << result_2 << endl;

    // Exercise 3
    float result_3 = ((abs(x-y))/x+sin(M_PI/y)) * cos(M_PI/x);
    cout << "3. Result: " << result_3 << endl;

    // Exercise 4
    float result_4 = sqrt((abs(x+y)/(sqrt(1/abs(x-y))))*(abs(x) + 1));
    cout << "4. Result: " << result_4 << endl;

    // Exercise 5
    float result_5 = (sin(x) + sin(y))/(pow(M_E, y) + pow(M_E, x));
    cout << "5. Result: " << result_5 << endl;

    // Exercise 6
    float result_6 = pow(y, (1/x)) + pow(x, (1/y));
    cout << "6. Result: " << result_6 << endl;

    // Exercise 7
    float result_7 = ((x-y)/abs(x+y)+1)+((pow(x, 2)-pow(y, 2))/pow(x, 2)+pow(y, 2)+1);
    cout << "7. Result: " << result_7 << endl;

    // Exercise 8
    float result_8 = (pow(cos(x), 2) + 2*pow(cos(y), 2))/M_PI;
    cout << "8. Result: " << result_8 << endl;

    // Exercise 9
    float result_9 = (x+y)/sqrt((pow(x, 2)+pow(y, 2)+1)*pow(sin(x+y), 2));
    cout << "9. Result: " << result_9 << endl;

    // Exercise 10
    float result_10 = (log(x)+log(y))/pow(M_E, y)+pow(M_E, -x);
    cout << "10. Result: " << result_10 << endl;


    return 0;

}