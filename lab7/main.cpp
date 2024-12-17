#include <iostream>
using namespace std;
int stack[100], top=-1;
void push(int val){
	if (top>=99){
		cout << "Stck is Full" << endl;
	}else{
		top++;		
		stack[top]=val;
	}
}

void pop(){
	if (top<0){
		cout << "stack is empty" << endl;
	}
	else{
		top--;
	}
}

int peek(){
	return stack[top];
}

void display(){
	for (int i=top; i>=0 ; i--){
		cout << stack[i] << endl;
	}
}

int isEmpty(){
	if (top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(){
	if(top==99){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	push(4);
	push(2);
	push(1);
	push(3);
	cout << "Push" << endl;
	display();
	cout << "Pop" << endl;
	pop();
	display();
	cout << "Peek " << peek() << endl;
	cout << "IsEmpty " << isEmpty() << endl;
	cout << "IsFull " << isFull() << endl;
	return 0;
}