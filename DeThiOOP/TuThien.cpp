#include "TuThien.h"
void TuThien::Nhap()
{
	ChayBo::Nhap();
	cout << "Nhap cu li(5/10km): " << endl;
	cout << "Chon: 1-5km 2-10km" << endl;
	int se;
	cin >> se;
	switch (se)
	{
	case 1:
		this->CuLi = 5;
		break;
	case 2:
		this->CuLi = 10;
		break;
	}
}
void TuThien::Xuat()
{
	ChayBo::Xuat();
}