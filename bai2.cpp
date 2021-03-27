#include<iostream>
using namespace std;
#define MAX 100

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
void tim_so_le(int a[], int n) {
	int tam = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			tam = a[i];
		}
	}
	cout << tam;
}
int main() {
	int a[MAX];
	int n;
	do {
		cout << " nhap so luong phan tu n = ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);
	tim_so_le(a, n);
}