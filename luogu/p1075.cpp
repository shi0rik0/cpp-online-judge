#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = sqrt(n) + 0.5;
    for (int i = m; i > 0; --i) {
        if (n % i == 0) {
            cout << n / i;
            return 0;
        }
    }
    return 0;
}
