#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int maxPathSumUtil(Node *root, int &ans){
    if(root == NULL){
        return 0;
    }

    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);

    int nodeMax = max(max(root->data, root->data + left + right),max(root->data + left, root->data + right));
    ans = max(ans, nodeMax);
    int singlePathSum = max(root->data, max(root->data + left, root->data + right));
    return singlePathSum;
}

int maxPathSum(Node *root){
    int ans = INT_MIN;
    maxPathSumUtil(root, ans);
    return ans;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->right->right->right = new Node(10);
    root->left->left->left->left = new Node(11);
    root->left->left->left->right = new Node(12);
    root->left->left->right->right = new Node(13);
    root->right->right->right->left = new Node(14);
    root->right->right->right->right = new Node(15);

    /*
            1
           / \
          2   3 
         / \ / \
        4  5 6  7
       / \       \
      8   9       10
     / \   \      / \ 
    11 12   13   14  15

    */
   cout<<"Max path sum: "<<maxPathSum(root)<<endl;
}