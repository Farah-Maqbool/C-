#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	Que 1
	int arr_1[3][2] = {{1,2},{3,4},{5,6}};
	int arr_2[3][2] = {{7,8},{9,10},{11,12}};
	int arr[6][2];
	
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 2 ; j++){
			arr[i][j] = arr_1[i][j];
			
		}
	}
	int num = 3;
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 2 ; j++){
			arr[num][j] = arr_2[i][j];
			
		}
		num++;
	}
	for (int i = 0 ; i < 6 ; i++){
		for (int j = 0 ; j < 2 ; j++){
			cout << arr[i][j] << endl;
		}
	}
//	Que 2
	int arr_1_d[3][3] = {{1,2,7},{3,4,8,},{5,6,9}};
	int j = 0;
	for (int i = 0 ; i < 3 ; i++){
		cout << arr_1_d[i][j] << endl;
		j++;
	}
//	Que 3
	int arr_1_s[3][3] = {{1,2,7},{3,4,8,},{5,6,9}};
	int k = 0;
	int sum = 0;
	for (int i = 0 ; i < 3 ; i++){
		sum += arr_1_s[i][k];
		k++;
	}
	cout << "Sum " << sum << endl;
//	Que 4
//	Write a C++ program to multiply two integer 3-dimensional arrays and print the
//  output array.
	int matrix_1[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
	int matrix_2[2][2][2] = {{{9,10},{11,12}},{{13,14},{15,16}}};
	int result_matrix[2][2][2];
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 2 ; j++){
			for (int k = 0 ; k < 2 ; k++){
				result_matrix[i][j][k] = matrix_1[i][j][k] * matrix_2[i][j][k];
			}
		}
	}
	//	print result
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 2 ; j++){
			for (int k = 0 ; k < 2 ; k++){
				cout << "Result matrix[" << i << "][" << j << "][" << k << "]= " << result_matrix[i][j][k] << endl;
			}
		}
	}
	
// Write a C++ program to Transpose Matrix.
	int matrix_t[2][2] = {{1,2},{3,4}};
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 2 ; j++){
			if (i==j){
				continue;
			}
			else{
				int a = matrix_t[i][j];
				matrix_t[i][j] = matrix_t[j][i];
				matrix_t[j][i] = a;
				
			}
		}
	}
	//	Print result
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 2 ; j++){
			cout << matrix_t[j][i] << endl;
		}
	}
	
	return 0;
}