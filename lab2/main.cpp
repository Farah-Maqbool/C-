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
	cout << "Question 3" << endl;
	int l[5];
	l[0] = 4;
	l[1] = 5;
	l[2] = 2;
	l[4] = 0;
	for (int i = 0 ; i < 5 ; i++){
		if (l[i]==0){
			l[i-1] = 6;
			break;
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
	
	int give = 4;
	cout << "Before" << endl;
	for (int i = 0 ; i < 7 ; i++){
		cout << E[i] << endl ;
	}
	for (int i = 5 ; i >= 0 ; i++){
		E[i+1] = E[i];
		if (i == give){
			break;
		}
	}
	E[give] = 10;
	cout << "After";
	for (int i = 0 ; i < 7 ; i++){
		cout << E[i] << endl ;
	}
	return 0;
}