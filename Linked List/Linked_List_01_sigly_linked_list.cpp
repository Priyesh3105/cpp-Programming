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

void insertAtIndex(node* &head, int val, int idx){
    node* newNode = new node(val);

    // If the index is 0, insert at the beginning
    if(idx == 0){
        newNode->next = head;
        head = newNode;
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
    while(temp != NULL && i < idx - 1){
        temp = temp->next;
        i++;
    }

    // Check if the index is valid
    if(temp == NULL){
        cout << "Invalid index\n";
        return;
    }
    newNode->next = temp->next;
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
    delete todelete;
}

void deletion(node* &head, int val){
    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = NULL;
    temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node* todelete = NULL;
    todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;    
}

node* reverseList(node* &head){
    node* prev = NULL;
    node* curr = NULL;
    node* next = NULL;

    curr = head;
    while (curr != NULL)
    {
       next = curr->next;
       curr->next = prev;

       prev = curr;
       curr = next;        
    }
    return prev;
}

node* reverseRecursive(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newNOde = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newNOde;
}

node* reverseK(node* &head, int k){
    node* prev = NULL;
    node* curr = NULL;
    node* next = NULL;

    curr = head;
    int count = 0;
    while (curr != NULL && count<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if(next != NULL){
        head->next = reverseK(next, k);
    }
    return prev;
}

void makeCycle(node* &head, int pos){
    node* temp = NULL;
    temp = head;
    node* cycleNode = NULL;
    int count = 0;

    while (temp->next != NULL)
    {
        if(count == pos){
            cycleNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = cycleNode;
}

bool detectCycle(node* &head){
    
    if (head == NULL || head->next == NULL) {
        return false;  // No cycle in a list with less than two nodes
    }

    node* fast = NULL;
    node* slow = NULL;

    fast = head;
    slow = head;   
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){    
    if (head == NULL || head->next == NULL) {
        return;  // No cycle in a list with less than two nodes
    }

    node* fast = NULL;
    node* slow = NULL;

    fast = head;
    slow = head;  

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    
    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    
    slow->next = NULL;
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

    deletion(head, 0);
    cout<<"Using delete 0: ";
    display(head);

    deleteAtHead(head);
    cout<<"Using delete at head: ";
    display(head);

    node* reverseHead = reverseList(head);
    cout<<"Using reverse list: ";
    display(reverseHead);

    node* recursiveHead = reverseList(reverseHead);
    cout<<"Using recursive reverse list: ";
    display(recursiveHead);

    int k = 2;
    node * reverseKHead = reverseK(recursiveHead, k);
    cout<<"Using recursive K reverse list: ";
    display(reverseKHead);

    cout << "Cycle detection: " << detectCycle(reverseKHead) << endl;
    makeCycle(reverseKHead, 5);
    cout << "Cycle detection: " << detectCycle(reverseKHead) << endl;
    removeCycle(reverseKHead);
    cout << "Cycle detection: " << detectCycle(reverseKHead) << endl;
    cout<<"Using display list: ";
    display(reverseKHead);
}