#include <iostream>
using namespace std;

int main() {
    // 1. Простое вычитание
    cout << "10000 - 5000 = " << 10000 - 5000 << endl;

    // 2. Простое сложение
    cout << "1235 + 7120 = " << 1235 + 7120 << endl;

    // 3. Шестнадцатеричные числа
    cout << "FFC1 - B131 = " << hex << 0xFFC1 - 0xB131 << " (hex)" << endl;
    cout << "FFC1 - B131 = " << dec << 0xFFC1 - 0xB131 << " (dec)" << endl;

    // 4. Семеричная система
    int seven_num1 = 6*7*7 + 5*7 + 2; // 652 в 7-ричной
    int seven_num2 = 2*7*7 + 1*7 + 6; // 216 в 7-ричной
    int seven_res = seven_num1 - seven_num2;
    cout << "652 (7) - 216 (7) = " 
         << seven_res/49 << (seven_res%49)/7 << seven_res%7 
         << " (7)\n";

    // 5. Простое умножение
    cout << "20 * 5 = " << 20 * 5 << endl;

    return 0;
}