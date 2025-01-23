#include <iostream>
#include <string>
using namespace std;
char stack[8];
int top=-1;
void push(char val){
	if (top>=7){
		cout << "Stck is Full" << endl;
	}else{
		top++;	
		stack[top]=val;
	}
}
char peek(){
	return stack[top];
}
char pop(){
	if (top<0){
		cout << "stack is empty" << endl;
		
	}   
	else{
		char top_value = peek();
		top--;
		return top_value;
	}
}



char second_first(){
	int s_l = --top;
	top++;
	return stack[s_l];
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
	if(top==7){
		return 1;
	}
	else{
		return 0;
	}
}

bool check_op_in_arr(int size, char op_arr[], char target){
	for (int i = 0 ; i < size ; i++){
		if (op_arr[i]==target){
			return true;
		}
	}
	return false;
}

int main() {
//	alphabet
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
//	get Input infix expression
	string infix_expression;
	cout << "Enter Infix Expression: ";
	getline(cin,infix_expression);
	
//	check infix expression size so i create the postfix expression array same size
	int expression_size = infix_expression.size();
	
//	postfix expression
	char postfix_expression[expression_size];
	int j = 0;
	int i = 0;
	while (i<expression_size){
		
//		check if the coming element is operand
		if (alphabet.find(infix_expression[i])!=string::npos){
			postfix_expression[j] = infix_expression[i];
			j++;
		}
		else{
			char high_p[] = {'*', '/'};
			char low_p[] = {'-','+'};
			
			if (infix_expression[i] == '('){
				push(infix_expression[i]);
				
			}else if (infix_expression[i]==')'){
				for (int i = top ; i >= 0 ; i--){
					if (stack[i] == '('){
						
						char element = pop();
						
						break;
					}
					postfix_expression[j] = pop();
					j++;
				}
				
			}
			else{
				if (isEmpty()==1){
					push(infix_expression[i]);
				}
				else if (check_op_in_arr(2, low_p, infix_expression[i]) && 
				check_op_in_arr(2, high_p, peek())){
					if (check_op_in_arr(2, low_p, second_first())){
						char temp_1 = pop();
						char temp_2 = pop();
						postfix_expression[j] = infix_expression[temp_1];
						j++;
						postfix_expression[j] = infix_expression[temp_2];
						j++;
					}
				}
				else if ((check_op_in_arr(2, low_p, infix_expression[i]) && 
				check_op_in_arr(2, low_p, peek())) || 
				(check_op_in_arr(2, high_p, infix_expression[i]) && 
				check_op_in_arr(2, high_p, peek()))){
					
					postfix_expression[j] = pop();
					j++;
					push(infix_expression[i]);
				}
				else{
					push(infix_expression[i]);
				}
			}
		}
		i++;
	}
	for(int i = top ; i >= 0 ; i--){
		postfix_expression[j] = pop();
		j++;
	}
	for (int i = 0 ; i < expression_size ; i++){
		cout << postfix_expression[i];
	}
	return 0;
}