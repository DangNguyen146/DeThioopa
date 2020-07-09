#include"ChayBo.h"
#include"ThongThuong.h"
#include"trail.h"
#include"TuThien.h"
#include<iostream>
using namespace std;

int main()
{
	system("color b");
	//câu a
	ChayBo* a[100];
	int n = 0;
	while (1)
	{
		int se;
		cout << "0-ThoatNhap 1-ChayThongThuong 2-TuThien 3-GiaiTrail" << endl;
		cout << ">> ";
		cin >> se;
		if (se == 0)
			break;
		switch (se)
		{
		case 1:
			a[n] = new ThongThuong;
			break;
		case 2:
			a[n] = new TuThien;
			break;
		case 3:
			a[n] = new Trail;
			break;
		}
		a[n]->Nhap();
		n++;
	}
	cout << "_________________________________________" << endl;
	for (int i = 0;i < n; i++)
	{
		a[i]->Xuat();
		cout << endl << "________________________________" << endl;
	}
	//câu b
	ChayBo* b[3];
	cout << "ChayThongThuong" << endl;
	b[0] = new ThongThuong;
	b[0]->Nhap();
	cout << "Tu Thien" << endl;
	b[1] = new TuThien;
	b[1]->Nhap();
	cout << "Trail" << endl;
	b[2] = new Trail;
	b[2]->Nhap();

	if (n < 2)
		cout << "Khong du 3 cuoc thi" << endl;
	float tongcul = b[0]->GetCuli() + b[1]->GetCuli() + b[2]->GetCuli();
	float space;
	cin >> space;
	cout << "Tong thoi gian hoan thanh cu li: " << (tongcul * space) << endl;

	//câu c
	for (int i = 0; i < 3; i++)
	{
		n = (a[0]->GetNgay() + 2 * a[i]->GetThang() + (3 * (a[0]->GetThang() + 1)) / 5 + 2020 + (2020 / 4)) % 7;
		if (n == 8)
			cout << "Tham gia duoc";
	}
	delete[] a;
	return 0;
}