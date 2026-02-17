#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    string binaryStr = "";

    cout << "Введите целое число (десятичное): ";
    cin >> number;

    int temp = number;
    if (temp == 0) {
        binaryStr = "0";
    }
    else {
        while (temp > 0) {
            binaryStr = to_string(temp % 2) + binaryStr;
            temp = temp / 2;
        }
    }

    int countOnes = 0;
    for (int i = 0; i < binaryStr.length(); i++) {
        char bit = binaryStr[i];
        if (bit == '1') {
            countOnes++;
        }
    }

    cout << "Двоичное представление числа " << number << ": " << binaryStr << endl;
    cout << "Количество единиц в двоичном представлении: " << countOnes << endl;

    return 0;
}