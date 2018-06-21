#include<stdio.h>
void input(int m[3][3],int b, int k)
{
	for(b=0;b<=2;b++)
	{
		for(k=0;k<=2;k++)
		{
			printf("Input baris %d kolom %d = ",b+1,k+1);scanf("%d",&m[b][k]);
		}
	}
}
void output(int m[3][3],int b, int k)
{
	printf("\n Matrik 3 x 3 \n");
	
	for(b=0;b<=2;b++)
	{
		for(k=0;k<=2;k++)
		{
			printf(" %d ",m[b][k]);
		}
		printf("\n");
	}
}
main ()
{
	int m[3][3];
	int b, k;
	input(m,b,k);
	output(m,b,k);
}

