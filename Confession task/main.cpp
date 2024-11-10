#include <iostream>
using namespace std;

void dailyroastFeedback(int time){
	if (time < 60){
		cout << "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho" << endl;
	}
	else if (time >= 60 && time <= 120){
		cout << "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao." << endl;
	}
	else if(time > 120){
		cout << "Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se? Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai?" << endl;
	}
}
void weeklyRoastFeedbck(int time){
	cout << "Weekly Roast" << endl;
	if (time > 600){
		cout << "Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!" << endl;
	}
	else if(time < 600){
		cout << "Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!" << endl;
	}
	
}

void calculateTotalTime(int read, int write, int &check){
	int week[7];
	int total = read + write;
	
	if (check==6){
		int total_week_data = 0;
		for (int i = 0 ; i < check ; i++){
			total_week_data += week[i];
		}
		weeklyRoastFeedbck(total_week_data);
		check = 0;
	}
	dailyroastFeedback(total);
	week[check]=total;
	check++;
	
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
		calculateTotalTime(read, write, check);
		cout << "Want to continue? (y or n) ";
		cin >> user_choice;
		if (user_choice=='n'){
			break;
		}
	}
	
	return 0;
}