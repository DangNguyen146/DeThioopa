#include "trail.h"
void Trail::Nhap()
{

	ChayBo::Nhap();
	cout << "Chon cu li 1-50km 2-80km 3-100km" << endl;
	int se;
	cin >> se;
	switch (se)
	{
	case 1:
		this->CuLi = 50;
		break;
	case 2:
		this->CuLi = 80;
		break;
	case 3:
		this->CuLi = 100;
		break;
	}
}
void Trail::Xuat()
{
	ChayBo::Xuat();
}