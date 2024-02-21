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

int calcHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight , rHeight) + 1;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }
    
    if(isBalanced(root->left)){
        return false;
    }
    if(isBalanced(root->right)){
        return false;
    }

    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);
    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    root->right->right = new Node(7);

    /*
            1
           / \
          2   3 
         / \ / \
        4  5 6  7
    */
    if(isBalanced(root)){
        cout<<"Balance tree"<<endl;
    }
    else{
        cout<<"Unbalance tree"<<endl;
    }
}