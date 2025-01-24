#include <iostream>
using namespace std;

int arr[10], first = 0, last = 9, middle = (first + last)/ 2, num;

int BinarySearch(){
	
	while (first <= last){
		if (arr[middle]<num){
			first = middle + 1;
		}else if(arr[middle]>num){
			last = middle - 1;
		}else{
			return 1;
		}
		middle = (first + last)/ 2;
	}
	return 0;
}


int main(int argc, char** argv) {
	cout << "Enter 10 numbers in ascending order: ";
	
	for (int i = 0; i < 10 ; i++){
		cin >> arr[i];
	}
	cout << "Enter search element: ";
	cin >> num;
	if (BinarySearch()==1){
		cout << "Element Found";
	}
	else{
		cout << "Element not Found";
	}
	return 0;
}