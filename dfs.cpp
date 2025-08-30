#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

// 전위 순회 (루트 → 왼쪽 → 오른쪽)
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// 중위 순회 (왼쪽 → 루트 → 오른쪽)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// 후위 순회 (왼쪽 → 오른쪽 → 루트)
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    // 트리 구성
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder: ";
    preorder(root);   // 1 2 4 5 3
    cout << "\nInorder: ";
    inorder(root);    // 4 2 5 1 3
    cout << "\nPostorder: ";
    postorder(root);  // 4 5 2 3 1
}
