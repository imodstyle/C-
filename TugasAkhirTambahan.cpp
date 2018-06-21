#include<stdio.h>
main()
{
	printf("NIM		= 171011401664\n");
	printf("Nama		= Donny Rahardika\n");
	printf("Kelas		= TPLE019\n");
	int i;
	i=0;
	while(i<10)
	{
		i++;
		if (i==4)continue;
		printf("bilangan:%d\n",i);
		if(i==6)break;
		i++;
	}
}
