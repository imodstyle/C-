#include<stdio.h>
main()
{
	{
	int makan, minum, kembali, harga, bayar, total, jumlahmakan, totalmakan, jumlahminum, totalminum;
		printf("Pilih menu :");
		printf("Makanan :\n");
		printf("1. Nasi Goreng (@15.000)\n");
		printf("2. Pecel Lele (@17.000)\n");
		printf("3. Capcay (@12.000)\n");
		printf("Mainuman :\n");
		printf("1. Es Teh Manis (@3.000)\n");
		printf("2. Es Jeruk (@5.000)\n");
		printf("3. Es Kopi (@4.000)\n");
		printf("Masukan pilihan makan :\n");scanf("%d",&makan);
		switch(makan)
		{
			case 1:
				printf("Nasi Goreng (@15.000)\n");
				printf("Masukan Jumlah Pesanan : \n");scanf("%d",&jumlahmakan);
				totalmakan=jumlahmakan*15000;
				printf("Total Harga : Rp. %d\n",totalmakan);
				break;
			case 2:
				printf("Pecel Lele (@17.000)\n");
				printf("Masukan Jumlah Pesanan : \n");scanf("%d",&jumlahmakan);
				totalmakan=jumlahmakan*17000;
				printf("Total Harga : Rp. %d\n",totalmakan);
				break;
			case 3:
				printf("Capcay (@12.000)\n");
				printf("Masukan Jumlah Pesanan : \n");scanf("%d",&jumlahmakan);
				totalmakan=jumlahmakan*12000;
				printf("Total Harga : Rp. %d\n",totalmakan);
				break;
			default:
				printf("Menu tidak ada");
		}
		printf("Masukan pilihan minum :\n");scanf("%d",&minum);
		switch(minum)
		{
			case 1:
				printf("Es Teh Manis (@5.000)\n");
				printf("Masukan Jumlah Pesanan : \n");scanf("%d",&jumlahminum);
				totalminum=jumlahminum*5000;
				printf("Total Harga : Rp. %d\n",totalminum);
				break;
			case 2:
				printf("Es Jeruk (@3.000)\n");
				printf("Masukan Jumlah Pesanan : \n");scanf("%d",&jumlahminum);
				totalminum=jumlahminum*3000;
				printf("Total Harga : Rp. %d\n",totalminum);
				break;
			case 3:
				printf("Es Kopi (@4.000)\n");
				printf("Masukan Jumlah Pesanan : \n");scanf("%d",&jumlahminum);
				totalminum=jumlahminum*4000;
				printf("Total Harga : Rp. %d\n",totalminum);
				break;
			default:
				printf("Menu tidak ada");
		}
		total=totalmakan+totalminum;
		printf("Total Biaya : Rp. %d\n",total);
		printf("Uang yang dibayar : Rp. ");scanf("%d",&bayar);
		kembali=bayar-total;
		printf("Kembali : Rp. %d",kembali);
	}
}


