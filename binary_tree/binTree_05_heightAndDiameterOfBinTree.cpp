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

int calcDiameter(Node* root){
    if(root == NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;


    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter , max(lDiameter, rDiameter));
}

int calcDiameter2(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0; int rh = 0;
    int lDiameter = calcDiameter2(root->left, &lh);
    int rDiameter = calcDiameter2(root->right, &rh);
    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDiameter , max(lDiameter, rDiameter));
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    /*
            1
           / \
          2   3 
         / \ / \
        4  5 6  7
    */

    cout<<"Height of binary tree: "<<calcHeight(root)<<endl;
    cout<<"Diameter of binary tree: "<<calcDiameter(root)<<endl;
    int height = 0;
    cout<<"Diameter of binary tree by fun 2: "<<calcDiameter2(root, &height)<<endl;
}