#include "logic.h"

void hacking_pentagon() {
	cout << "////Start hack Pentagon////";
	Sleep(5000);

	for (int i = 0; i <= 10; i++) {
		system("cls");
		cout << "Process  " << i * 10 << '%';
		Sleep(1000);
	}

	system("cls");
	cout << "Pentagon is hacked";
}