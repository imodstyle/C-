#include<stdio.h>
void luas();
void keliling();
main()
{
	{
	int kode;
		printf("Masukan kode perhitungan [(1)Luas Persegi, (2) Keliling Persegi] = ");scanf("%d",&kode);
		switch(kode)
		{
			case 1:
				luas();break;
			case 2:
				keliling();break;
			default:
				printf("Kode Tidak Ada");
		}
	}
}

void luas()
{
	int s, luas;
	printf ("Masukan sisi persegi:"); scanf("%d",&s);
	luas=s*s;
	printf ("Jadi Luas Persegi adalah: %d\n",luas);
}

void keliling()
{
	int s, keliling;
	printf ("Masukan sisi persegi:"); scanf("%d", &s);
	keliling=4*s;
	printf ("Jadi keliling Persegi adalah: %d\n",keliling);
}
