#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Russian");
    string ar[5]{ "Bip","Bup","Pup","Buup","Biip" };
    char z;
    double a,c;
    c = 4;
    double c1 = 1;
    srand(time(0));
        while (true) {
            z = _getch();
            if (z == '=') {
                cout << "tone mult(standart 4):";
                cin >> c;
                cout << endl;
                cout << "time mult(standart 1):";
                cin >> c1;
            }
            a = static_cast<int>(z);
            if (a < 0) {
                a += 100;
            }
            //cout << z<<" "<<a << endl;
            cout << ar[rand() % 5] << endl;
            Beep(a*c, 500*c1);
        }
        
}