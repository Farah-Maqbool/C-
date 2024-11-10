#include <iostream>
using namespace std;

void roastFeedback(int time){
	if (time < 60){
		cout << "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho" << endl;
	}
	else if (time >= 60 && time <= 120){
		cout << "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao." << endl;
	}
}


int calculateTotalTime(int read, int write, int* check){
	int* ptr = check;
	int week[7];
	int size = sizeof(week) / sizeof(int);
	int total = read + write;
	for (int i = 0 ; i < size ; i++){
		week[*ptr]=total;
	}
	*ptr++;
	if (*ptr==6){
		int total_week_data = 0;
		for (int i = 0 ; i < *ptr ; i++){
			total_week_data += week[i];
		}
		roastFeedback(total_week_data);
	}
	else{
		roastFeedback(total);
	}
	return 0;
}



int main(int argc, char** argv) {
	int check = 0;
	int read;
	int write;
	char user_choice;
	while (true){
		cout << "Track Time" << endl;
		cout << "Time Spent on reading Confession (in minutes): ";
		cin >> read;
		cout << "Time Spent on writing Confession (in minutes): ";
		cin >> write;
		calculateTotalTime(read, write, &check);
		cout << "Want to continue? (y or n) ";
		cin >> user_choice;
		if (user_choice=='n'){
			break;
		}
	}
	
	return 0;
}