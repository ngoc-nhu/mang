#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
bool kt_snt(int a[], int n);
void in_snt(int a[], int n);
int main() {
	int a[MAX];
	int n;
	do {
		cout << " nhap so luong phan tu mang ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);
	in_snt(a, n);
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
bool kt_snt(int n) {
	for (int i = 0; i < n; i++) {
		if (n < 2)
		{
			return false;
		}
		else
			if (n == 2) {
				return true;
			}
		{
			for (int i = 2; i < n; i++) {
				if (n % i == 0) {
					return false;
				}
			}
		}
	}
	return true;
}

void in_snt(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (kt_snt(a[i]) == true) {
			cout << " so nguye to la ";
			cout << a[i] << endl;
		}
	}
}
