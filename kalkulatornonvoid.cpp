#include<stdio.h>

main()
{
	{
	int kode;
		printf("Masukan kode perhitungan [(1)Plus, (2)Minus, (3)Multiple, (4)Half :]");scanf("%d",&kode);
		switch(kode)
		{
			case 1:
				int a, b, c;
				printf ("masukan angka pertama = ");scanf("%d",&a);
				printf ("masukan angka kedua = ");scanf("%d",&b);
				c=a+b;
				printf ("jadi total perhitungan adalah : %d\n",c);break;
			case 2:
				int d, e, f;
				printf ("masukan angka pertama = ");scanf("%d",&e);
				printf ("masukan angka kedua = ");scanf("%d",&e);
				f=d-e;
				printf ("jadi total perhitungan adalah : %d\n",f);break;
			case 3:
				int g, h, i;
				printf ("masukan angka pertama = ");scanf("%d",&g);
				printf ("masukan angka kedua = ");scanf("%d",&h);
				i=g*h;
				printf ("jadi total perhitungan adalah : %d\n",i);break;
			case 4:
				int j, k, l;
				printf ("masukan angka pertama = ");scanf("%d",&j);
				printf ("masukan angka kedua = ");scanf("%d",&k);
				l=j/k;
				printf ("jadi total perhitungan adalah : %d\n",l);break;
			default:
				printf("Kode Tidak Ada");
		}
	}
}


