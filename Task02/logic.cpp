#include "logic.h"

string draw_rectangle(int n, int m) {
	string result = "";
	if (n == 1 && m == 1) {
		result += '*';
		return;
	}

	for (int i = 0; i < n; i++) {
		result += '*';
	}
	result += '\n';

	for (int i = 0; i < m - 2; i++)
	{
		result += '*';
		for (int i = 0; i < n - 2; i++) {
			result += " ";
		}
		result += '*' + '\n';
	}

	for (int i = 0; i < n; i++) {
		result += '*';
	}

	return result;
}