#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBst(Node *root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBst(root->left , val);
    }else{
        root->right = insertBst(root->right, val);
    }
    return root;
}

Node* searchInBst(Node *root,int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data == key){
        return root;
    }
    //if data > key
    if(root->data > key){
        return searchInBst(root->left, key);
    }
    //else
    return searchInBst(root->right, key);
}

int main(){
    Node *root = NULL;
    int arr[] = {5,1,3,4,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i< n; i++){
        root = insertBst(root, arr[i]);
    }

    if(searchInBst(root, 4) == NULL){
        cout<<"Key does not exist";
    }else{
        cout<<"Key exist";
    }    
    return 0;
}