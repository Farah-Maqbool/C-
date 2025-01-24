#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int arr[10], num, count = 0;

int search(int value){
	for (int i = 0; i < 10 ; i++){
		if (arr[i]==value){
			return 1;
		}
	}
	return 0;
}

void searcHDuplicate(int value){
	for (int i = 0; i < 10 ; i++){
		if (arr[i]==value){
			count++;
		}
	}
}


int main(int argc, char** argv) {
	cout << "Enter 10 numbers: ";
	for (int i = 0 ; i < 10 ; i++){
		cin >> arr[i];
	}
	cout << "Enter a number to search: ";
	cin >> num;
	
	if (search(num)){
		cout << "Number found" << endl;
		searcHDuplicate(num);
		cout << "Number of Occurence: " << count << endl;
	}else{
		cout << "Number not Found" << endl;
	}
}