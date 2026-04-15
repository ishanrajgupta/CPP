#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        cout << "Outer loop: " << i << endl;

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    int k = 1;
    while (k <= n) {
        cout << "While loop: " << k << endl;
        k++;
    }

    int x = 1;
    do {
        cout << "Do-while: " << x << endl;
        x++;
    } while (x <= n);

    return 0;
}