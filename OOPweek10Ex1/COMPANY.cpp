#include"COMPANY.h"
void STAFF::basicInput() {
	cout << ++COUNT << ". ";
	cout << "\nNhap ten: ";
	cin.ignore();
	getline(cin, NAME);
	cout << "Nhap ngay thang nam sinh: ";
	cin >> DAY >> MONTH >> YEAR;
}
void OFFICE::Input() {
	basicInput();
	cout << "Nhap so ngay lam viec: "; cin >> workDay;
}
void OFFICE::Output() {
	int x = workDay * 100000;
	cout << "\nHo ten: " << NAME << " Ngay thang nam sinh: " << DAY << " " << MONTH << " " << YEAR << " " << "Luong: " << x;
}
void PRODUCE::Input() {
	basicInput();
	cout << "Nhap luong co ban: "; cin >> basicSalary;
	cout << "Nhap so san pham: "; cin >> product;
}
void PRODUCE::Output() {
	int x = basicSalary + product* 5000;
	cout << "\nHo ten: " << NAME << " Ngay thang nam sinh: " << DAY << " " << MONTH << " " << YEAR << " " << "Luong: " << x;
}