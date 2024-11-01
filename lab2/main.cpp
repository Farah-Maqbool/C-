#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	Que 1
	cout << "Question 1" << endl;
	int x[] = {2,4,5,1,6,7,9};
	int size = sizeof(x) / sizeof(int);
	int max = x[0];
	for (int i = 0 ; i < size ; i++){
		if (x[i]>max){
			max = x[i];
		}
	}
	cout << "Maximum Value: " << max << endl;
//	Que 2
	cout << "Question 2" << endl;
	int w[5];
	w[0] = 1;
	w[1] = 3;
	w[2] = 5;
	w[3] = 4;
	int size_w = sizeof(w) / sizeof(int);
	for  (int i = 0 ; i < size_w ; i++){
		cout << w[i] << endl;
	}
	for ( int i = size_w - 1 ; i >= 0 ; i--){
		w[i] = w[i-1];
	}
	cout  << "After" << endl;
	w[0] = 8;
	for  (int i = 0 ; i < 5 ; i++){
		cout << w[i] << endl;
	}
//	Que 3
	cout << "Question 3" << endl;
	int l[5];
	l[0] = 4;
	l[1] = 5;
	l[2] = 2;
	l[3] = 6;
	int length = sizeof(l) / sizeof(int);
	
	for (int i = 1 ; i <= length ; i++){
		if (i==length){
			l[i-1] = 9;
		}
	}
	
	for (int i = 0 ; i < 5 ; i++){
		cout << l[i] << endl;
	}
//	Que 4
	cout << "Question 4" << endl;
	int E[7];
	E[0] = 3;
	E[1] = 5;
	E[2] = 2;
	E[3] = 4;
	E[4] = 7;
	E[5] = 3;
	int size_e = sizeof(E) / sizeof(int);
	int give = 3;
	cout << "Before" << endl;
	for (int i = 0 ; i < size_e-1 ; i++){
		cout << E[i] << endl ;
	}
	for (int i = size_e - 1 ; i >= 0 ; i--){
		E[i] = E[i-1];
		if (i == (give+1)){
			break;
		}
	}
	E[give] = 10;
	cout << "After" << endl;
	for (int i = 0 ; i < size_e ; i++){
		cout << E[i] << endl ;
	}
//	Que 5
	cout << "Question 5" << endl;
	int arr[6] = {5,2,7,1,8,3};
	int size_arr = sizeof(arr) / sizeof(int);
	cout << "Before" << endl;
	for (int i = 0 ; i < size_arr ; i++){
		cout << arr[i] << endl;
	}
	for (int i = 0 ; i < size_arr ; i++){
		arr[i] = arr[i+1];
	}
	size_arr--;
	cout << "After" << endl;
	for (int i = 0 ; i < size_arr ; i++){
		cout << arr[i] << endl;
	}
//	Que 6
	cout << "Question 6" << endl;
	int arr_d[] = {5,2,1,4,8,9};
	int size_arr_d = sizeof(arr_d) / sizeof(int);
	size_arr_d--;
	for (int i = 0 ; i < size_arr_d ; i++){
		cout << arr_d[i] << endl;
	}
//	Que 7
	cout << "Question 7" << endl;
	int ar_7[] = {2,3,4,5,7,8};
	int size_ar_7 = sizeof(ar_7) / sizeof(int);
	int user_give = 3;
	cout << "Before" << endl;
	for (int i = 0 ; i < size_ar_7 ; i++){
		cout << ar_7[i] << endl;
	}
	for (int i = 0 ; i < size_ar_7 ; i++){
		if (i >= user_give){
			ar_7[i] = ar_7[i+1];
		}
	}
	size_ar_7--;
	cout << "After" << endl;
	for (int i = 0 ; i < size_ar_7 ; i++){
		cout << ar_7[i] << endl;
	}
//	Que 8
	cout << "Question 8" << endl;
//	By index
	int user_index = 3;
	int arr_search[] = {3,5,7,4,9};
	int size_search = sizeof(arr_search) / sizeof(int);
	for (int i = 0 ; i < size_search ; i++){
		if (i==user_index){
			cout << "Element = " << arr_search[i] << endl;
		}
	}
//	By value
	int user_value = 3;
	int arr_searchV[] = {3,5,7,4,9};
	int size_searchV = sizeof(arr_searchV) / sizeof(int);
	for (int i = 0 ; i < size_searchV ; i++){
		if (arr_search[i]==user_value){
			cout << "Element = " << arr_searchV[i] << endl;
		}
	}
//	Que 9
	cout << "Question 9" << endl;
	int u_value = 9;
	int u_index = 4;
	int arr_update[] = {3,5,6,2,7,8};
	int size_update = sizeof(arr_update) / sizeof(int);
	for (int i = 0 ; i < size_update ; i++){
		if (i==u_index){
			arr_update[i] = u_value;
		}
	}
	for (int i = 0 ; i < size_update ; i++){
		cout << arr_update[i] << endl;
	}
	return 0;
}