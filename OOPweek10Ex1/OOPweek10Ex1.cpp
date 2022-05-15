#include "COMPANY.cpp"
int main() {
	int n;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	STAFF* stf[1000];
	OFFICE ofc[1000];
	PRODUCE prd[1000];
	int ROLE;
	for (int i = 0; i < n; i++) {
	while (true) {
		cout << "Chon nghe nghiep: \n1. Nhan vien van phong\n2. Nhan vien san xuat\n Chon 1 so: ";
		cin >> ROLE;
		if (ROLE != 1 && ROLE != 2) cout << "Nhap sai vui long nhap lai\n";
		else break;
	}
	
		if (ROLE == 1) stf[i] = &ofc[i];
		if (ROLE == 2) stf[i] = &prd[i];
		stf[i]->Input();
	}
	for (int i = 0; i < n; i++) stf[i]->Output();
}