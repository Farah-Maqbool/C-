#include <iostream>
using namespace std;
//Queue using array 

int size = 5, rear = -1, front = 0;
int Queue[5];

void enQueue(int value){
	if (rear == (size-1)){
		cout << "Queue is Full" << endl; 
	}
	else{
		rear++;
		Queue[rear] = value;
	}
}

int deQueue(){
	if (rear == front){
		cout << "Queue is Empty" << endl;
	}
	else{
		
		int temp = Queue[front];
		front++;
	
		return temp;	
	}
}

void display(){
	for (int i = front ; i <= rear ; i++){
		cout << Queue[i] << endl;
	}	
}
int main(int argc, char** argv) {
	enQueue(4);
	enQueue(2);
	deQueue();
	display();
	return 0;
}