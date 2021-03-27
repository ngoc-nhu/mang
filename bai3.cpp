#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
void tim_doan(int a[], int n);
int main() {
	int a[MAX];
	int n;
	do {
		cout << " nhap so luong phan tu ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);
	tim_doan(a, n);
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

void tim_doan(int a[], int n) {
	int max = INT32_MIN;
	int min = INT32_MAX;
	for (int i = 0; i < n; i++) {
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << " doan a b = [" << min << " " << max << "]";
}
