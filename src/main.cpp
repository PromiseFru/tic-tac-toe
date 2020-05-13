#include <iostream>
#include "../include/myfunctions.h"

using namespace std;

int main(){

	int player = 1;
	int choice;
	char mark;

	// game start
	while (checkwin() == -1){
		// player selector
		player = (player%2) ? 1:2;
		// player mark selector
		mark = (player == 1) ? 'X':'O';

		// Draw board
		board();
		cout << endl;
		cout << "Player " << player << " enter number" << endl;
		cin >> choice;

		// write board
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"Invalid move "<<endl;
			player--;
			cin.ignore();
			cin.get();
		}

		player++;

	}
	if(checkwin() == 1){
		player --;
		cout << "Player " << player << " Wins!" << endl;
	}
	if(checkwin() == 0){
		cout << "Match drawn" << endl;
	}

	return 0;
}