#include<stdio.h>
void plus();
void minus();
void multi();
void half();

main()
{
	{
	int kode;
		printf("Masukan kode perhitungan [(1)Plus, (2)Minus, (3)Multiple, (4)Half :]");scanf("%d",&kode);
		switch(kode)
		{
			case 1:
				plus();break;
			case 2:
				minus();break;
			case 3:
				multi();break;
			case 4:
				half();break;
			default:
				printf("Kode Tidak Ada");
		}
	}
}

void plus()
{
	int satu, dua, total;
	printf ("masukan angka pertama = ");scanf("%d",&satu);
	printf ("masukan angka kedua = ");scanf("%d",&dua);
	total=satu+dua;
	printf ("jadi total perhitungan adalah : %d\n",total);
}

void minus()
{
	int satu, dua, total;
	printf ("masukan angka pertama = ");scanf("%d",&satu);
	printf ("masukan angka kedua = ");scanf("%d",&dua);
	total=satu-dua;
	printf ("jadi total perhitungan adalah : %d\n",total);
}

void multi()
{
	int satu, dua, total;
	printf ("masukan angka pertama = ");scanf("%d",&satu);
	printf ("masukan angka kedua = ");scanf("%d",&dua);
	total=satu*dua;
	printf ("jadi total perhitungan adalah : %d\n",total);
}

void half()
{
	int satu, dua, total;
	printf ("masukan angka pertama = ");scanf("%d",&satu);
	printf ("masukan angka kedua = ");scanf("%d",&dua);
	total=satu/dua;
	printf ("jadi total perhitungan adalah : %d\n",total);
}

