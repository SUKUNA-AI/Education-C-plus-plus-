#include <iostream>

using namespace std;

bool is_prime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int num;
	if (!(cin >> num)) return 0;

	if (is_prime(num)) {
		cout << "Prime" << endl;
	} else {
		cout << "Not prime" << endl;
	}

	return 0;
}
