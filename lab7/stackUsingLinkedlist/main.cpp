#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;
		
		Node(int data){
			this->data = data;
			this->prev = nullptr;
		}
};

class Stack{
//	Que 2 implement the stack using linked list
	public:
		Node* head = nullptr;
		Node* top = nullptr;
		
		void push(int data){
			Node* new_node = new Node(data);
			if (top == nullptr){
				head = new_node;
				top = new_node;
			}else{
				new_node->prev = top;
				top = new_node;
			}
		}
		
		void pop(){
			if (top==nullptr){
				cout << "Stack Is Empty" << endl;
			}
			else{
				Node* temp = top;
				top = top->prev;
				delete temp;	
			}
			
		}
		
		void display(){
			if (top==nullptr){
				cout << "Stack Is Empty" << endl;
			}else{
				Node* temp = this->top;
				cout << temp->data << endl;
				while (temp->prev!=nullptr){
					temp = temp->prev;
					cout << temp->data << endl;
				}
			}
		}
};

int main(int argc, char** argv) {
//	Que 1 Explain the procedure of stack implementation using linked list
//	Step 1: Include all the header files which are used in the program and create two classes name
//	Node and stack. Node class create a node and stack class perform operation like push, pop or
//	display etc. And create two pointer in stack class head and top the top pointer will point on
//	last node that link to linkedlist and head node point the first node which created
//	Step 2: Declare all the functions used in stack implementation. inside stack class
//	Step 3: Create a instance of class stack in main function which create node
//	Step 4: In main method, display menu with list of operations and make suitable function 
// 	calls to perform operation selected by the user on the stack.
	Stack stack;
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.display();
	return 0;
}