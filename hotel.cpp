#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
	char kode,nm_penginap[15],kd_kls,nm_kamar[8],nm_kls[8],kamar[10],tgl_booking[15],no_hp[15],lagi;
	int  lama,x,harga,total,y;
	awal:
	system("cls");
	cout<<"==================================================";
	cout<<"\n\t     HOTEL MARTHA TILAAR";
	cout<<"\n==================================================";
	cout<<"\n\t  JL.Tanjakan NO.5,Baturaden";
	cout<<"\n==================================================\n";
	cout<<"Biodata";
	cout<<"\nNama Penginap            : ";cin>>nm_penginap;
	cout<<"Tgl Booking(DD/MM/YYY)   : ";cin>>tgl_booking;
	cout<<"No HP                    : ";cin>>no_hp;
	system("cls");
	cout<<"==================================================";
	cout<<"\n\t     HOTEL MARTHA TILAAR";
	cout<<"\n==================================================";
	cout<<"\n\t  JL.Tanjakan NO.5,Baturaden";
	cout<<"\n==================================================\n";
	cout<<"\nPilihan Kelas : ";
	cout<<"\n1.VIP";
	cout<<"\n2.REGULER";
	cout<<"\nInput Pilihan Kelas [1/2]   : ";cin>>kd_kls;
	switch(kd_kls)
	{
		case'1':
		{
			strcpy(nm_kls,"VIP");
			x=100000;
			y=2;
		}
		break;
		case'2':
		{
			strcpy(nm_kls,"REGULER");
			x=0;
			y=1;
		}
		break;
	}
	system("cls");
	cout<<"==================================================";
	cout<<"\n\t     HOTEL MARTHA TILAAR";
	cout<<"\n==================================================";
	cout<<"\n\t  JL.Tanjakan NO.5,Baturaden";
	cout<<"\n==================================================\n";
	cout<<"\nPilihan Kamar :\n";
	cout<<"A.MAWAR "<<nm_kls;
	cout<<"\n  2AC,TV,sofa,Kamar Mandi,"<<y<<"Tempat Tidur"<<endl;
	cout<<"B.MELATI "<<nm_kls;
	cout<<"\n  AC,TV,sofa,Kamar Mandi,"<<y<<"Tempat Tidur"<<endl;
	cout<<"C.ANGGREK "<<nm_kls;
	cout<<"\n  AC,sofa,Kamar Mandi,"<<y<<"Tempat Tidur"<<endl;
	cout<<"\nInput Pilihan Kamar [A/B/C] : ";cin>>kode;
	switch (kode)
	{
		case 'A':
  		case 'a':
  		strcpy(nm_kamar,"MAWAR");
	    harga=250000;
	    break;
	    case 'B':
	    case 'b':
	    strcpy(nm_kamar,"MELATI");
		harga=200000;
	    break;
	    case 'C':
	    case 'c':
	    strcpy(nm_kamar,"ANGGREK");
	    harga=150000;
	    break;
	}
	system("cls");
	cout<<"==================================================";
	cout<<"\n\t     HOTEL MARTHA TILAAR";
	cout<<"\n==================================================";
	cout<<"\n\t  JL.Tanjakan NO.5,Baturaden";
	cout<<"\n==================================================\n";
	cout<<"\nLama Menginap               : ";cin>>lama;
	system("cls");
	total=lama*harga+(lama*x);
	harga=harga+x;
	cout<<"==================================================";
	cout<<"\n\t     HOTEL MARTHA TILAAR";
	cout<<"\n==================================================";
	cout<<"\n\t  JL.Tanjakan NO.5,Baturaden";
	cout<<"\n==================================================\n";
	cout<<"Nama  Penginap : "<<nm_penginap<<endl;
	cout<<"Tgl Booking    : "<<tgl_booking<<endl;
	cout<<"No HP          : "<<no_hp<<endl;
	cout<<"Nama  Kamar    : "<<nm_kamar<<endl;
	cout<<"Jenis Kelas    : "<<nm_kls<<endl;
	cout<<"Harga Kamar    : Rp"<<harga<<endl;
	cout<<"Lama  Inap     : "<<lama;cout<<" hari\n";
	cout<<"=================================================="<<endl;
	cout<<"Total          : Rp"<<total;
	cout<<"\n=================================================="<<endl;
	cout<<"*)screenshot sebagai bukti booking hotel";
	cout<<"\n\tINGIN INPUT LAGI [Y/T] : "; cin>>lagi;
	if (lagi == 'y' || lagi =='Y')
	goto awal;
}
