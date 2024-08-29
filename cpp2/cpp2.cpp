#include <iostream>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}
int main() {
	int n;
	cout << "Nhap 1 so ko bi cat chim : ";
	cin >> n;

	cout << "Cac so nguyen tu 1 den " << n << " la : ";
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << ",";
		}
	}
	return 0;
}
