#include <iostream>
#include<Windows.h>

using namespace std;

template<typename T>
T sum(T n1, T n2) {
    return n1 + n2;
}

template<typename T>
T sub(T n1, T n2) {
    return n1 - n2;
}

template<typename T>
T mul(T n1, T n2) {
    return n1 * n2;
}

template<typename T>
T div(T n1, T n2) {
    return (n1 == 0 || n2 == 0) ? 0 : n1 / n2;
}

int main() {
    double n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    double (*action[4])(double, double) = { sum, sub, mul, div };

    cout << "Enter op (0 - sum, 1 - sub, 2 - mul, 3 - div): ";
    int op;
    cin >> op;

    if (op >= 0 && op < 4) {
        cout << action[op](n1, n2) << endl;
    }
    else {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}