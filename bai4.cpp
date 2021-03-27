#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
void mang_toan_duong(int a[], int n);

int main() {
	int a[MAX];
	int n;
	do {
		cout << " nhap so luong phan tu n = ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);
	mang_toan_duong(a, n);
}
void mang_toan_duong(int a[], int n) {
	bool kt = true;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			kt = false;
			break;
		}
	}
	if (kt == true) {
		cout << " mang toan duong " << endl;
	}
	else
	{
		cout << " mang khong toan duong " << endl;
	}
}
void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << " nhap phan tu thu a[" << i << "]=";
		cin >> a[i];
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << " phan tu thu " << i << " = ";
		cout << a[i] << endl;
	}
}