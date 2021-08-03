#include<iostream>
using namespace std;

class Node{    
    public:
    int data;
    Node* next; 
};

Node* head = NULL;

void insertnode(int data){
    Node *t = new Node();
    t -> data = data;
    t -> next  = NULL;
    if (head == NULL)
        head = t;
    else{
        Node *temp = head;
        while(temp -> next != NULL){
            temp = temp->next;
        }
        temp->next = t;
    }
}
void insertnodeatbegin(int data){
    Node *t=new Node();
    t -> data = data;
    t -> next = head;
    head=t;
}

void insertatany(int data, int value){
    Node *t = new Node();
    t -> data = data;
    Node *temp = head;
    while(temp -> data != value){
        temp = temp -> next;
    }
    t -> next = temp -> next;
    temp -> next = t;
    
}

void insertatpos(int data, int pos){
    Node *t = new Node();
    t -> data = data;
    Node *temp = head;
    int c=0;
    while(c<pos-1){
        c+=1;
        temp = temp -> next;
    }
    t -> next = temp -> next;
    temp -> next = t;
}

void deleteatbegin(){
    Node*t = head;
    head = head->next;
    delete(t);
}
void display(Node* head){
    Node* t = head;
    while(t != NULL){
        cout << t->data << " ";
        t = t->next;
    }
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    insertnode(a);
    insertnodeatbegin(b);
    insertnodeatbegin(c);
    insertatany(6,4);
    insertatpos(7,2);
    deleteatbegin();
    display(head);
}