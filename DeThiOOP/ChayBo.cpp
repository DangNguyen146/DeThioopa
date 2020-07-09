#include "ChayBo.h"
void ChayBo::Nhap()
{
	cin.ignore();
	cout << "Nhap ten cuoc thi: ";
	getline(cin, this->TenCuocThi);
	cout << "Nhap ngay to chuc(Ngay/Thang): ";
	cin >> this->Ngay >> this->Thang;
	cin.ignore();
	cout << "Nhap dia diem: ";
	getline(cin, this->DiaDiem);
	cout << "Nhap le phi tham gia: ";
	cin >> this->LePhiThamGia;
}
void ChayBo::Xuat()
{
	cout << "Ten cuoc thi: " << this->TenCuocThi << endl;
	cout << "Ngay to chuc: " << this->Ngay << "/" << this->Thang << endl;
	cout << "Dia diem to chuc: " << this->DiaDiem << endl;
	cout << "Cu li chay bo: " << this->CuLi << endl;
	cout << "Le phi cuoc thi: " << this->LePhiThamGia << endl;
}