#include <iostream>

using namespace std;

int main() {
    const int MAX = 20;
    int a[MAX] = { 0 };
    for (int i = 1; i <= 7; ++i) {
        int m, n;
        cin >> m >> n;
        if (a[m + n] == 0) {
            a[m + n] = i;
        }
    }
    int i = MAX - 1;
    for (; i >= 0; --i) {
        if (a[i]) {
            break;
        }
    }
    if (i <= 8) {
        cout << 0;
    } else {
        cout << a[i];
    }
    return 0;
}
