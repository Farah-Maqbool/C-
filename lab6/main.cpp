#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		
		Node(int data){
			this->data = data;
			this->next = nullptr;
			this->prev = nullptr;
		}
};

class DoublyLinkedList{
	public:
		Node* start = nullptr;
		Node* end = nullptr;
//		Que 1 insert node at start

		void insertAtStart(int value){
			Node* new_node = new Node(value);
			
			if (start==nullptr){
				start = new_node;
			}
			else{
				start->prev = new_node;
				new_node->next = start;
				start = new_node;
			}
		}
//		Que 2 add node before given node

		void addNodeBeforeGivenNode(int position, int data){
			Node* new_node = new Node(data);
			if (start == nullptr){
				start = new_node;
			}
			else{
				Node* temp = this->start;
				int count = 1;
				while (temp->next != nullptr){
					if (count == (position-1)){
						new_node->next = temp->next;
						new_node->prev = temp->next->prev;
						temp->next->prev = new_node;
						temp->next = new_node;
						return;
					}
					count++;
					temp = temp->next;
				}
			}
		}
		
//		Que 3 insert node at the end of linked list
		void insertAtLast(int data){
			Node* new_node = new Node(data);
			
			if (start==nullptr){
				start = new_node;
			}
			else{
				Node* temp = this->start;
				
				while (temp->next!=nullptr){
					temp = temp->next;
				}
				temp->next = new_node;
				new_node->prev = temp;
				end = temp->next;
			}
		}
		
		void displayForward(){
			Node* temp = this->start;
			cout << temp->data << endl;
			while (temp->next!=nullptr){
				temp = temp->next;
				cout << temp->data << endl;
			}	
		}
//		Que 5 Show linkedlist in reverse order
		
		void displayBackward(){
			Node* temp = this->end;
			cout << temp->data << endl;
			
			while (temp->prev != nullptr){
				temp = temp->prev;
				cout << temp->data << endl;
			}
		}
		

//		Que 4 Delete node in Doubly linked list

		void deleteAtLast(){
			Node* temp = this->start;
			
			while (temp->next != nullptr){
				if (temp->next->next==nullptr){
					Node* ptr = temp->next;
					temp->next = nullptr;
					delete ptr;
					return;
				}
				temp = temp->next;
			}
		}
		
};

int main(int argc, char** argv) {
	DoublyLinkedList list_D;
	cout << "Add node at last" << endl;
	list_D.insertAtLast(4);
	list_D.insertAtLast(3);
	list_D.insertAtLast(2);
	list_D.insertAtLast(9);
	list_D.displayForward();
	cout << "Add node in start" << endl;
	list_D.insertAtStart(1);
	list_D.displayForward();
	cout << "Reverse" << endl;
	list_D.displayBackward();
	cout << "Add node before given node" << endl;
	list_D.addNodeBeforeGivenNode(3,8);
	list_D.displayForward();
	cout << "Delete" << endl;
	list_D.deleteAtLast();
	list_D.displayForward();
	return 0;
}