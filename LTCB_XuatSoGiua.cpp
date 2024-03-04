#include <iostream>
using namespace std;

int main() {
	int sodau, socuoi;
	int temp;
	cout << "Nhap so dau : "; cin >> sodau;
	cout << "Nhap so cuoi : "; cin >> socuoi;
	temp = sodau;

	cout << "Vong Lap While\n";
	while (sodau <= socuoi) {
		cout << sodau << " ";
		sodau++;
	}
	sodau = temp;

	cout << "\nVong Lap Do While\n";
	do {
		cout << sodau << " ";
		sodau++;
	} while (sodau <= socuoi);
	return 0;
}