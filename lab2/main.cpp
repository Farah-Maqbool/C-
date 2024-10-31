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
	int y[] = {1,3,5,4,8};
	for ( int i = 0 ; i < 5 ; i++){
		cout << y[i] << endl;
	}
	cout << "w start" << endl;
	int w[5];
	w[0] = 1;
	w[1] = 3;
	w[2] = 5;
	w[3] = 4;
	w[4] = 8;
	for ( int i = 0 ; i < 5 ; i++){
		cout << w[i] << endl;
	}
	
	
	
	return 0;
}