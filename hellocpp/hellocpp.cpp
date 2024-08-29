#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
// Tinh tong n so nguyen duong dau tien
int main() {
	int n;
	cout << "Nhap so ko bi cat chim : ";
	scanf_s("%d", &n);
	int s = 0;
	for (int i = 2; i <= n; i+=2){
		s = s + i;
	}
	cout << "Tong la : " << s;
	return 0;
}