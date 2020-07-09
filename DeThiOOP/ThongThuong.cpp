#include "ThongThuong.h"
void ThongThuong::Nhap()
{
	ChayBo::Nhap();
	cout << "Chon:  1-42km 2-21km 3-10km 4-5km: " << endl;
	int se;
	cin >> se;
	switch (se)
	{
	case 1:
		this->CuLi = 42;
		break;
	case 2:
		this->CuLi = 21;
		break;
	case 3:
		this->CuLi = 10;
		break;
	case 4:
		this->CuLi = 5;
		break;
	}
}
void ThongThuong::Xuat()
{
	cout << "Giai chay thong thuong" << endl;
	ChayBo::Xuat();
}