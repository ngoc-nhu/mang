#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
void mang_tang_dan(int a[], int n);

int main() {
	int a[MAX];
	int n;
	do {
		cout << " nhap so luong phan tu mang ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);
	mang_tang_dan(a, n);

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
void mang_tang_dan(int a[], int n)
{
	bool kt = true;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			kt = false;
			break;
		}
	}
	if (kt == true)
	{
		cout << " mang tang dan " << endl;
	}
	else
	{
		cout << " mang khong tang dan " << endl;
	}
}