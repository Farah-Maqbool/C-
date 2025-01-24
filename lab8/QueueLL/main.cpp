#include <iostream>
using namespace std;
//Que 1 Implement Queue using linked list
//Basic operation enQueue, deQueue, display

class Node{
	public:
		int value;
		Node* next;
		
		Node(int value){
			this->value = value;
			this->next = nullptr;
		}
};

class Queue{
	public:
		Node* front = nullptr;
		
		void enQueue(int value){
			Node* new_node = new Node(value);
			if ( front==nullptr){
				front = new_node;
			}
			else{
				Node* temp = this->front;
				while (temp->next != nullptr){
					temp = temp->next;
				}
				temp->next = new_node;
			}
		}
		void deQueue(){
			if (front == nullptr){
				cout << "Queue is Empty";
			}else{
				
				Node* ptr = this->front;
				front = front->next; 
				
				delete ptr;
			}
		}
		void display(){
			if (front==nullptr){
				cout << "Queue is Empty";
			}else{
				Node* temp = this->front;
				
				cout << temp->value << endl;
				while (temp->next != nullptr){
					temp = temp->next;
					cout << temp->value << endl;
				}
				
			}
		}
};

int main(int argc, char** argv) {
	Queue queue;
	queue.enQueue(2);
	queue.enQueue(5);
	queue.enQueue(1);
	queue.enQueue(6);
	queue.display();
	cout << "DeQueue" << endl;
	queue.deQueue();
	queue.deQueue();
	queue.display();
	return 0;
}