#include<stdio.h>
void wide();
void around();
main()
{
	{
	int kode;
		printf("Enter Value  [(1) square area, (2) circumference square] = ");scanf("%d",&kode);
		switch(kode)
		{
			case 1:
				wide();break;
			case 2:
				around();break;
			default:
				printf("Not Found");
		}
	}
}

void wide()
{
	int s, wide;
	printf ("Enter side square : "); scanf("%d",&s);
	wide=s*s;
	printf ("So Square area is : %d\n",wide);
}

void around()
{
	int s, around;
	printf ("Enter side square:"); scanf("%d", &s);
	around=4*s;
	printf ("So circumference square is : %d\n",around);
}
