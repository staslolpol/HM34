#include "logic.h"

void draw_rectangle(int n, int m) {
	if (n == 1 && m == 1) {
		cout << '*';
		return;
	}

	for (int i = 0; i < n; i++) {
		cout << '*';
	}
	cout << endl;

	for (int i = 0; i < m - 2; i++)
	{
		cout << '*';
		for (int i = 0; i < n - 2; i++) {
			cout << " ";
		}
		cout << '*' << endl;
	}

	for (int i = 0; i < n; i++) {
		cout << '*';
	}
}