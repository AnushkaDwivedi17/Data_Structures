#include<iostream>
using namespace std;

class Node{    
    public:
    int data;
    Node* next; 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue{
  public:
  Node* rear;
  Node* front;
  Queue(){
      rear = NULL;
      front = NULL;
  }
  
  void enque(int data){
      Node* temp = new Node(data);
      if(front == rear && rear == NULL){
          rear = temp;
          front = temp;
      } else{
      rear -> next = temp;
      rear = temp;
      }
      cout << temp->data;
  }
  void deque(){
      if(front == NULL){
          cout << "Empty"; 
      } else{
          if(front == rear){
              rear = NULL;
          }
      Node *temp = front;
      front = front->next;
      cout<<temp->data;
      delete temp;
      }
  }
};
int main(){
    Queue obj;
    obj.enque(1);
    obj.enque(2);
    obj.enque(3);
    obj.deque();
    obj.deque();
    
}