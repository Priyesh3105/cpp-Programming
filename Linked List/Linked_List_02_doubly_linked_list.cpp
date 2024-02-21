#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
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
    newNode->prev = temp;
}

void insertAtFirst(node* &head, int val){
    node* newNode = new node(val);

    newNode->next = head;
    if(head != NULL){
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtIndex(node* &head, int val, int idx){
    node* newNode = new node(val);

    // If the index is 0, insert at the beginning
    if(idx == 0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    node* temp = NULL;
    temp = head;

    int i=0; 
    // Move to the node before the desired index
    while(temp != NULL && i < idx){
        temp = temp->next;
        i++;
    }

    // Check if the index is valid
    if(temp == NULL){
        cout << "Invalid index\n";
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
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

bool search(node* &head, int key){
    node* temp =  NULL;
    temp = head;
    while (temp!=NULL)
    {
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node* todelete = NULL;
    todelete = head;

    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deleteAtIndex(node* &head, int idx){
    // If the index is 0, insert at the beginning
    if(idx == 0){
        deleteAtHead(head);
        return;
    }

    node* temp = NULL;
    temp = head;

    int i=0;
    while(i != idx){
        temp = temp->next;
        i++;
    }
    
    // Move to the node before the desired index
    while(temp != NULL && i < idx){
        temp = temp->next;
        i++;
    }

    // Check if the index is valid
    if(temp == NULL){
        cout << "Invalid index\n";
        return;
    }
    temp->prev->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    delete temp;
}

int length(node* &head){
    int l = 0;
    node * temp = NULL;
    temp = head;

    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node* kAppend(node* &head, int k) {
    if (head == NULL || k == 0) {
        return head;  // No rotation needed
    }

    int len = length(head);
    k = k % len;

    if (k == 0) {
        return head;  // No rotation needed
    }

    node* tail = head;
    node* newHead = NULL;
    node* newTail = NULL;

    for (int i = 0; i < len - k - 1; i++) {
        tail = tail->next;
    }

    newHead = tail->next;
    newTail = tail;
    newHead->prev = NULL;

    tail->next = NULL;

    node* temp = newHead;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = head;
    head->prev = temp;

    return newHead;
}

int main(){
    node* head = NULL;
    insertAtEnd(head, 0);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    cout<<"Using insert at end: ";
    display(head);

    insertAtFirst(head, -1);
    insertAtFirst(head, -2);
    insertAtFirst(head, -3);
    insertAtFirst(head, -4);

    cout<<"Using insert at first: ";
    display(head);
    
    insertAtIndex(head, -5, 0);
    insertAtIndex(head, 5, 9);

    cout<<"Using insert at index: ";
    display(head);

    cout<<"Search result for element 3: "<<search(head, 3)<<endl;

    deleteAtIndex(head, 0);
    cout<<"Using delete at 0 index: ";
    display(head);

    deleteAtHead(head);
    cout<<"Using delete at head: ";
    display(head);

    node* kHead = NULL;
    kHead = kAppend(head, 5);
    cout<<"Using k append: ";
    display(kHead);

}