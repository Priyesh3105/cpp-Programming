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

node* merge(node* &head1, node* &head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummyNode = new node(-1);
    node* p3 = dummyNode;

    while(p1 != NULL && p2 != NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while(p1 != NULL){
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while(p2 != NULL){
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
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

    node* mergeNode = merge(head1, head2);
    cout<<"Merg of two sorted list: ";
    display(mergeNode);

}