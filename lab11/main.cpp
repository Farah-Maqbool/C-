#include <iostream>
using namespace std;

int arr[5];

//Selection sort

void selectionSortAscending(){
	for (int i = 0 ; i < 5 ; i++){
		for (int j = i ; j < 5 ; j++){
			if (arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;	
			}
		}
	}
}

void selectionSortDescending(){
	for (int i = 0 ; i < 5 ; i++){
		for (int j = i ; j < 5 ; j++){
			if (arr[j]>arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;	
			}
		}
	}
}
//Bubble sort 
void bubbleSortAscending(){
	for (int i = 0 ; i < 5 ; i++){
		for (int j = 0 ; j < 4-i ; j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void bubbleSortDescending(){
	for (int i = 0 ; i < 5 ; i++){
		for (int j = 0 ; j < 4-i ; j++){
			if (arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
//Insertion sort
void insertionSortAscending(){
	for (int i = 1 ; i < 5 ; i++){
		int k = arr[i];
		int j;
		for (j = i -1 ; j >= 0 ; j--){
			if (arr[j]>k){
				arr[j+1] = arr[j];
			}
		}
		arr[j+1] = k;
	}
}

void insertionSortDescending(){
	for (int i = 1 ; i < 5 ; i++){
		int k = arr[i];
		int j;
		for (j = i -1 ; j >= 0 ; j--){
			if (arr[j]<k){
				arr[j+1] = arr[j];
			}
		}
		arr[j+1] = k;
	}
}

int main(int argc, char** argv) {
	cout << "Enter 5 elements: ";
	for (int i = 0; i < 5 ; i++){
		cin >> arr[i];
	}
	selectionSortAscending();
	cout << "Selection Sort in Ascending: " << endl;
	for (int i = 0; i < 5 ; i++){
		cout << arr[i] << endl;
	}
	selectionSortDescending();
	cout << "Selection Sort in Descending: " << endl;
	for (int i = 0; i < 5 ; i++){
		cout << arr[i] << endl;
	}
	bubbleSortAscending();
	cout << "Bubble Sort in Ascending: " << endl;
	for (int i = 0; i < 5 ; i++){
		cout << arr[i] << endl;
	}
	bubbleSortDescending();
	cout << "Bubble Sort in Descending: " << endl;
	for (int i = 0; i < 5 ; i++){
		cout << arr[i] << endl;
	}
	insertionSortAscending();
	cout << "Insertion Sort in Ascending: " << endl;
	for (int i = 0; i < 5 ; i++){
		cout << arr[i] << endl;
	}
	insertionSortDescending();
	cout << "Insertion Sort in Descending: " << endl;
	for (int i = 0; i < 5 ; i++){
		cout << arr[i] << endl;
	}
	return 0;
}