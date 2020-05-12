#include <iostream>
#include "../include/myfunctions.h"

using namespace std;

void board(){
	system("clear");
	cout << "_____ _____ _____" << endl;
	for(int i=1; i<=9; i+=3){
		cout << "     |     |     |" << endl;
		cout << "  " << square[i] << "  " << "|";
		for (int j = 1; j <=2; j++){
				cout << "  " << square[j+i] << "  " << "|";
			}
		cout << endl;
		cout << "_____|_____|_____|" << endl;
	}
}

int checkwin(){
	// return 1 if any win case
	// return 0 if match draw
	// return -1 if game is still going on

	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	if (square[4] == square[5] && square[5] == square[6])
		return 1;
	if (square[7] == square[8] && square[8] == square[9])
		return 1;
	if (square[1] == square[4] && square[4] == square[7])
		return 1;
	if (square[2] == square[5] && square[5] == square[8])
		return 1;
	if (square[3] == square[6] && square[6] == square[9])
		return 1;
	if (square[1] == square[5] && square[5] == square[9])
		return 1;
	if (square[3] == square[5] && square[5] == square[7])
		return 1;
	if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}