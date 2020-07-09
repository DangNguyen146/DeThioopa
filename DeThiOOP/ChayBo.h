#pragma once
#include<iostream>
#include<string>
using namespace std;
class ChayBo
{
protected:
	int Ngay;
	int Thang;
	float CuLi;
	long LePhiThamGia;
	string TenCuocThi;
	string DiaDiem;		//địa điểm tố chức
public:
	virtual void Nhap();
	virtual void Xuat();
	float GetCuli() {return CuLi; }
	int GetNgay() { return Ngay; }
	int GetThang() { return Thang; }
};

