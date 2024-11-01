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
	
	return 0;
}