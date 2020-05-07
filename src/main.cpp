#include <iostream>

using namespace std;

// declarations
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
void board();

int main(){

	// Draw board
	board();

	return 0;
}

void board(){
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
