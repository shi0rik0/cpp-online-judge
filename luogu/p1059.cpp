#include <iostream>

using namespace std;

const int MAX = 1010;
bool a[MAX];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        a[k] = true;
    }
    int count = 0;
    for (int i = 0; i < MAX; ++i) {
        count += a[i];
    }
    cout << count << endl;
    for (int i = 0; i < MAX; ++i) {
        if (a[i]) {
            cout << i << ' ';
        }
    }
    return 0;
}
