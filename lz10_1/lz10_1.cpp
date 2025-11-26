#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть кількість елементів у масивах: ";
    cin >> n;

    int A[100], B[100];

    // Введення масивів
    cout << "Введіть елементи масиву A: ";
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << "Введіть елементи масиву B: ";
    for (int i = 0; i < n; i++) cin >> B[i];

    // Добуток непарних чисел масиву A
    int dobA = 1;
    int countA = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            dobA *= A[i];
            countA++;
        }
    }
    if (countA == 0) dobA = 0;

    // Добуток непарних чисел масиву B
    int dobB = 1;
    int countB = 0;
    for (int i = 0; i < n; i++) {
        if (B[i] % 2 != 0) {
            dobB *= B[i];
            countB++;
        }
    }
    if (countB == 0) dobB = 0;

    cout << "\nДобуток непарних чисел масиву A: " << dobA;
    cout << "\nДобуток непарних чисел масиву B: " << dobB;

    // Сортування масивів
    sort(A, A + n);
    sort(B, B + n);

    // Вивід відсортованих масивів
    cout << "\n\nВідсортований масив A: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << "\nВідсортований масив B: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";

    cout << endl;
    return 0;
}