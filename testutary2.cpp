#include "stdio.h"
#include "conio.h"
main()
{
 int b, nilai;

 b = 15;
 nilai = --b;
 printf("nilai = %d, b = %d\n", nilai, b );
 nilai = b--;
 printf("nilai = %d, b = %d\n", nilai, b );
 getch();
}

