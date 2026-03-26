#include "logic.h"
long long find_pair(int n) {

	if (n < 10) {
		return false;
	}

	while (n > 0) {
		int d1 = n % 10; 
		long long d2 = n / 10;

		long long temp = d2;
		while (temp > 0) {
			int d3 = temp % 10;
			if (d1 == d3) {
				return true;
			}
			temp /= 10;
		}

		n /= 10;
	}

	return false;
}