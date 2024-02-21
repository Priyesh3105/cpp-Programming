#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(node* &head, int val){
    node* newNode = new node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtFirst(node* &head, int val){
    node* newNode = new node(val);

    newNode->next = head;
    head = newNode;
}


void display(node* head){
    node* temp = NULL;
    temp = head;
    while (temp != NULL)
    {
        cout<<"("<<temp->data<<")->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* mergeRecursive(node* &head1, node* &head2) {
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }

    node* result;
    if (head1->data < head2->data) {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    } else {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

int main(){
    node* head1 = NULL;
    insertAtEnd(head1, 0);
    insertAtEnd(head1, 1);
    insertAtEnd(head1, 2);
    insertAtEnd(head1, 12);
    insertAtEnd(head1, 15);
    cout<<"List one: ";
    display(head1);

    node* head2 = NULL;
    insertAtEnd(head2, 2);
    insertAtEnd(head2, 12);
    insertAtEnd(head2, 14);
    cout<<"List two: ";
    display(head2);

    node* mergeRecNode = mergeRecursive(head1, head2);
    cout<<"Merg of two sorted list in recursive fashion: ";
    display(mergeRecNode);
}