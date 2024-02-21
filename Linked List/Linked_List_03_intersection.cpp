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

void intersect(node* &head1, node* &head2, int pos){
    node* temp = head1;
    pos--;
    while (pos--){
        temp = temp->next;        
    }

    node* temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

int intersection(node* &head1, node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d= l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d= l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d != 0){
        ptr1 = ptr1->next;
        if (ptr1 == NULL){
            return -1;
        }
        d--;
    }
    
    while (ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}


int main(){
    node* head1 = NULL;
    insertAtEnd(head1, 0);
    insertAtEnd(head1, 1);
    insertAtEnd(head1, 2);
    insertAtEnd(head1, 3);
    insertAtEnd(head1, 4);
    cout<<"List one: ";
    display(head1);

    node* head2 = NULL;
    insertAtEnd(head2, 9);
    insertAtEnd(head2, 8);
    insertAtEnd(head2, 7);
    cout<<"List two: ";
    display(head2);

    intersect(head1, head2, 2);
    cout<<"List two after intersection: ";
    display(head2);

    cout<<"Result of intersection point: "<<intersection(head1, head2)<<endl;
}