#include "logic.h"

int main() {
	int number;


	cout << "Enter your number: ";
	cin >> number;
	
	string msg = find_pair(number) ? "There is pair" : "No pair";

	cout << msg;
	return 0;
}