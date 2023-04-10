#include <vector>
#include <iostream>

using namespace std;

class DisjointSet {
public:
    explicit DisjointSet(int n) {
        for (int i = 0; i < n; ++i) {
            parents.push_back(i);
        }
    }

    void merge(int a, int b) {
        parents[find_root(a)] = find_root(b);
    }

    bool find(int a, int b) {
        return find_root(a) == find_root(b);
    }
private:
    vector<int> parents;

    int find_root(int a) {
        while (a != parents[a]) {
            a = parents[a];
        }
        return a;
    }
};

int main() {
    DisjointSet set(5);
    set.merge(0, 1);
    set.merge(1, 2);
    set.merge(3, 4);
    cout << set.find(0, 2) << endl; // should print 1 (true)
    cout << set.find(0, 3) << endl; // should print 0 (false)
    return 0;
}
