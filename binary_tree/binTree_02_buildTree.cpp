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

int search(int inorder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* buildTreeInToPre(int preorder[], int inorder[], int start, int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = buildTreeInToPre(preorder, inorder, start, pos-1);
    node->right = buildTreeInToPre(preorder, inorder, pos+1, end);

    return node;
}

Node* buildTreeInToPost(int postorder[], int inorder[], int start, int end){
    static int idx2 = 4;
    if(start>end){
        return NULL;
    }
    int curr = postorder[idx2];
    idx2--;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->right = buildTreeInToPost(postorder, inorder, pos+1, end);
    node->left = buildTreeInToPost(postorder, inorder, start, pos-1);

    return node;
}

void inorderPrint(Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    int preorder[] = {1,2,4,3,5};
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    struct Node* root1 = buildTreeInToPre(preorder, inorder, 0, 4);
    inorderPrint(root1);
    cout<<endl;

    struct Node* root2 = buildTreeInToPost(postorder, inorder, 0, 4);
    inorderPrint(root2);
}