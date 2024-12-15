#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = nullptr;
		}
};


class Linkedlist{
	public:
		Node* start = nullptr;
		
		void insertAtLast(int data){
			Node* new_node = new Node(data);
			
			if (start==nullptr){
				start = new_node;
			}
			else{
				Node* temp = this->start;
				while (temp->next != nullptr){
					temp = temp->next;
				}
				temp->next = new_node;
			}
		}
		
		void display(){
			if (start==nullptr){
				cout << "No item in list" << endl;
			}
			else{
				Node* temp = this->start;
				cout << temp->data << endl;
				while (temp->next != nullptr){
					temp = temp->next;
					cout << temp->data << endl;
				}
			}
			
		}
//		Que 1 Found element in list
		void search(int val){
			if (start==nullptr){
				cout << "No item in list" << endl;
			}
			else{
				Node* temp = this->start;
				while (temp->next != nullptr){
					if (temp->data == val){
						cout << "Item Found" << endl;
						return;
					}
					temp = temp->next;
				}
				cout << "Item Not Found" << endl;
			}
			
		}
//		Que 2 insert at start
		void insertAtStart(int data){
			Node* new_node = new Node(data);
			
			if (start==nullptr){
				start = new_node;
			}
			else{
				new_node->next = start;
				start = new_node;
			}
			
		}
		
//		Que 3 add node at given position
		void addNodeAtGivenPosition(int val, int position){
			if (position == 1){
				insertAtStart(val);
			}
			else{
				Node* new_node = new Node(val);
			
				if (start== nullptr){
					start = new_node;
				}
				
				else{
					int count = 1;
					Node* temp = this->start;
					while (temp->next != nullptr){
						if (count == (position-1)){
							new_node->next = temp->next;
							temp->next = new_node;
							return;
						}
						count++;
						temp = temp->next;
						
					}
				}
			}
			
		}
		
//		Que 4 print last node address
		void LastNodeAddress(){
			Node* temp = this->start;
			
			while (temp->next != nullptr){
				temp = temp->next;
			}
			
			cout << "Address of last node " << temp << endl;
		}
//		Que Delete node from list
		
		void DeleteBetween(int position){
			Node* temp = this->start;
			int count = 1;
			while (temp->next!=nullptr){
				if (count==(position-1)){
					Node* ptr = temp->next;
					temp->next = temp->next->next;
					delete ptr;
					return;
				}
				count++;
				temp = temp->next;
			}
		}
};

int main(int argc, char** argv) {
	Linkedlist list;
	list.insertAtLast(2);
	list.insertAtLast(4);
	list.insertAtLast(1);
	list.insertAtLast(3);
	list.display();
	list.search(2);
	list.search(0);
	list.addNodeAtGivenPosition(5, 3);
	list.display();
	list.LastNodeAddress();
	list.DeleteBetween(3);
	list.display();
	
}