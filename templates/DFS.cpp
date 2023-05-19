// 非递归的DFS实现

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

using namespace std;

//    0
//   / \
//  1 - 2
//     / \
//    3   4
vector<vector<int>> create_graph() {
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {2, 3}, {2, 4}};
    vector<vector<int>> g(5);
    for (vector<int>& i : edges) {
        g[i[0]].push_back(i[1]);
        g[i[1]].push_back(i[0]);
    }
    return g;
}

void dfs(const vector<vector<int>>& g) {
    int n_vertices = g.size();
    stack<int> s;
    deque<bool> visited(n_vertices, false); // 不用 vector<bool> 是因为 vector<bool> 是禁用的
    s.push(0);
    while (!s.empty()) {
        int v = s.top();
        s.pop();
        if (visited[v]) {
            continue;
        }
        cout << v << endl; // 访问节点 v
        visited[v] = true;
        for (int u : g[v]) {
            if (!visited[u]) {
                s.push(u);
            }
        }
    }
}

int main() {
    vector<vector<int>> g = create_graph();
    dfs(g);
    return 0;
}
