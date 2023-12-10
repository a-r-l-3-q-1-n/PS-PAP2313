#include "iostream"

using namespace std;

int main() {

    int distance, days, weeks, speed;

    cout << "[+] Distance: "; cin >> distance;
    cout << "[+] Days: "; cin >> days;
    cout << "[+] Weeks: "; cin >> weeks;

    speed = (distance / ((days * 12) + (weeks * 168)));

    cout << "[~] Nava va parcurge " << distance << "km, cu viteza " << speed << "km/h";


    return 0;

}