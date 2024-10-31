#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	Que 1
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
	int w[5];
	w[0] = 1;
	w[1] = 3;
	w[2] = 5;
	w[3] = 4;
	cout << "Before" << endl;
	for  (int i = 0 ; i < 5 ; i++){
		cout << w[i] << endl;
	}
	for ( int i = 3 ; i >= 0 ; i--){
		w[i+1] = w[i];
	}
	cout  << "After" << endl;
	w[0] = 8;
	for  (int i = 0 ; i < 5 ; i++){
		cout << w[i] << endl;
	}
//	Que 3
	return 0;
}