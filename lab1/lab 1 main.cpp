#include <iostream>
using namespace std;
#include <string>
//Que 5
class Average{
	public:
	int num1, num2, num3;
	void average(){
		cout << "Average=" << (num1+num2+num3)/3 << "\n";
	}
};
class Complex{
public:
	void add(float num1_real, float num2_real, float num1_imaginary, float num2_imaginary ){
		cout << "Sum: " << (num1_real + num2_real) << " + " << (num1_imaginary + num2_imaginary) << "i" << endl;
	}
	void diff(float num1_real, float num2_real, float num1_imaginary, float num2_imaginary ){
		cout << "Difference: " << (num1_real - num2_real) << " + " << (num1_imaginary - num2_imaginary) << "i" << endl;
	}
	void product(float num1_real, float num2_real, float num1_imaginary, float num2_imaginary ){
		float result_real = num1_real * num2_real - num1_imaginary * num2_imaginary;
    	float result_imag = num1_real * num2_imaginary + num1_imaginary * num2_real;
    	cout << "Product: " << result_real << " + " << (result_imag) << "i" << endl;	
	}
};
//Que 6

int main() {
	//	Que 1
 	int a = 10;
	int b = 30;
	cout << "A=" << a << "\n";
	cout << "B=" << a << "\n";
	//	Que 2
	float temperature;
	cout << "Temperature: ";
	cin >> temperature;
	float result = (temperature * 9/5)+32;
	cout << "Fahrenheit: " << result << "\n";
	//	Que 3
	int num1, num2;
	char operat;
	cout << "Type Number 1: ";
	cin >> num1;
	cout << "Type Number 2: ";
	cin >> num2;
	cout << "Operator (+,-,/,*): ";
	cin >> operat;
	switch(operat){
		case '+':
			cout << "Result: " << num1+num2 << "\n";
			break;
		case '-':
			cout << "Result: " << num1-num2 << "\n";
			break;
		case '*':
			cout << "Result: " << num1*num2 << "\n";
			break;
		case '/':
			cout << "Result: " << num1/num2 << "\n";
			break;
		default:
			cout << "Invalid Operator" << "\n"; 
	}
	//	 Que 4
	int stars = 1;
	for (int i=0 ; i<=5 ; i++){
		for (int j = 0 ; j < stars ; j++ ){
			cout << "*";
		}
		cout << "\n";
		stars +=2;
	}
	int stars_next = 9;
	for (int i=0 ; i<=5 ; i++){
		for (int j = 0 ; j < stars_next ; j++ ){
			cout << "*";
		}
		cout << "\n";
		stars_next -=2;
	}
	//	Que 5
	Average num;
	num.num1 = 5;
	num.num2 = 3;
	num.num3 = 6;
	num.average();
	//	Que 6
	float num1_real, num1_imaginary, num2_real, num2_imaginary;
	
	cout << "Type first Complex number (real and imaginary): "; 
	cin >> num1_real >> num1_imaginary;
	cout << "Type second Complex number (real and imaginary): "; 
	cin >> num2_real >> num2_imaginary;
	Complex complex_num;
	complex_num.add(num1_real,num2_real,num1_imaginary,num2_imaginary);
	complex_num.diff(num1_real,num2_real,num1_imaginary,num2_imaginary);
	complex_num.product(num1_real,num2_real,num1_imaginary,num2_imaginary);
	
	
}

