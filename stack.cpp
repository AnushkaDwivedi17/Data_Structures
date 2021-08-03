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

class Stack{
  public:
  Node* top;
  Stack(){
      top = NULL;
  }
  void peek(){
      if(top!=NULL)
      cout<<top->data;
      else 
      cout<<"Empty";
  }  
  void push(int data){
      Node* temp = new Node(data);
      temp -> next = top;
      top = temp;
  }
  void pop(){
      if(top == NULL){
          cout << "Empty"; 
      } else{
      Node *temp = top;
      top = top->next;
      cout<<temp->data;
      delete temp;
      }
  }
};
int main(){
    Stack obj;
    obj.push(1);
    obj.peek();
    obj.push(2);
    obj.peek();
    obj.pop();
}