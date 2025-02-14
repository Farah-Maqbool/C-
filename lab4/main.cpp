#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	Que 1
	string text, middle;
	int location;
	cout << "Enter text: ";
	getline(cin, text);
	
	cout << "Enter again: ";
	getline(cin,middle);
	cout << "Enter location: ";
	cin >> location;
	text.insert(location, middle);
	cout << text << endl;
	
//	Que 2
	string text_1, text_2;
    int place;

    cout << "Enter String 1: ";
    getline(cin, text_1);

    cout << "Position where to replace? "; 
    cin >> place;

    cin.ignore(); // Ignore leftover newline
    
    cout << "From which? ";
    getline(cin, text_2);

    int size = text_2.size();
    text_1.replace(place, size, text_2);

    cout << "After replace-> " << text_1 << endl;
    
//    Que 3
	string user;
	int pl, no_of_char;
	cout << "Enter text: ";
	getline(cin, user);
	cout << "Give Place: ";
	cin >> pl;
	cout << "No of characters: ";
	cin >> no_of_char;
	
	user.erase(pl,no_of_characters)
	cout << user;
	return 0;
}