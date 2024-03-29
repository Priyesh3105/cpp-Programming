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

//case1
void printSubtreeNodes(Node *root, int k){
    if(root == NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}

//case2
int printNodesAtK(Node *root, Node *target, int k){
    if(root == NULL){
        return -1;
    }
    if(root == target){
        printSubtreeNodes(root, k);
        return 0;
    }

    int dl = printNodesAtK(root->left, target, k);
    if(dl != -1){
        if(dl + 1 == k){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->right, k-dl-2);
        }
        return dl +1;
    }

    int dr = printNodesAtK(root->right, target, k);
    if(dr != -1){
        if(dr + 1 == k){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->left, k-dr-2);
        }
        return dr +1;
    }
    return -1;
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
    cout<<"from node 5 to at dist of 4 :";
    printNodesAtK(root, root->left->right, 4);
    cout<<endl;
    cout<<"from node 6 to at dist of 4 :";
    printNodesAtK(root, root->right->left, 4);
    cout<<endl;
}