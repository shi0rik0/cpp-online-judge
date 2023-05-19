#include <iostream>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
};

Node* make_full_binary_tree(int levels) {
    int n_nodes = pow(2, levels) - 1;
    vector<Node*> nodes;
    for (int i = 0; i < n_nodes; ++i) {
        nodes.push_back(new Node{.val = i, .left=nullptr, .right=nullptr});
    }
    for (int i = 0; i < n_nodes; ++i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n_nodes) {
            nodes[i]->left = nodes[left];
        }
        if (right < n_nodes) {
            nodes[i]->right = nodes[right];
        }
    }
    return nodes[0];
}

void in_order(Node* node) {
    stack<Node*> s;
    while (true) {
        if (node != nullptr) {
            s.push(node);
            node = node->left;
        } else if (!s.empty()) {
            Node* t = s.top();
            cout << t->val << endl; // 访问节点
            s.pop();
            node = t->right;
        } else {
            break;
        }
    }
}

int main() {
    Node* root = make_full_binary_tree(3);
    in_order(root);
    return 0;
}