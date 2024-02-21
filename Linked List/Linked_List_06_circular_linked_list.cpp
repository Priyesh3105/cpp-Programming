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

void insertAtHead(node* &head, int val){
    node* newNode = new node(val);
    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
    }
    node* temp = head;
    do{
        temp = temp->next;
    }while(temp != head);
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    node* newNode = new node(val);

    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}

void display(node* &head){
    node* temp = head;
    do{
        cout<<"("<<temp->data<<")->";
        temp = temp->next;
    }while(temp != head);
    cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head){
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}

void deletion(node* &head, int pos){
    node* temp = head;
    if(pos ==1){
        deleteAtHead(head);
        return;
    }

    int count = 1;
    while(count != pos-1){
        temp = temp->next;
        count++;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 2);
    insertAtHead(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    cout<<"Circular linked list: ";
    display(head);

    deletion(head, 3);
    cout<<"After deletion: ";
    display(head);

    deleteAtHead(head);
    cout<<"After delete at head: ";
    display(head);
}