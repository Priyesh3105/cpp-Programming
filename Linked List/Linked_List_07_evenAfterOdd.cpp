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

    newNode->next = head;
    head = newNode;
}

void insertAtTail(node* &head, int val){
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

void evenafterOdd(node* &head){
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;

    while(odd->next != NULL && even->next !=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    if(odd->next == NULL){
        even->next = NULL;
    }
}

int main(){
    node* head = NULL;
    insertAtTail(head, 2);
    insertAtHead(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);

    cout<<"Linked list: ";
    display(head);

    evenafterOdd(head);
    cout<<"Linked list even after odd: ";
    display(head);
}