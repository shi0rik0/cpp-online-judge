#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    for (int i = 0; i < 12; ++i) {
        int c;
        cin >> c;
        a += 300;
        if (a < c) {
            cout << -(i+1);
            return 0;
        }
        a -= c;
        b += 100 * (a / 100);
        a %= 100;
    }
    cout << b * 120 / 100 + a;
    return 0;
}
