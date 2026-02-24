#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    float numbers[size];

    cout << "Введите " << size << " чисел для массива:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "numbers[" << i << "] = ";
        cin >> numbers[i];
    }

    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    float average = sum / size;

    cout << "\nСумма: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}