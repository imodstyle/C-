#include<stdio.h>
main()
{
	{
	int food, drink, change, price, buy, total, allfood, totalfood, alldrink, totaldrink;
		printf("Menu :\n");
		printf("\nFood :\n");
		printf("1. Fried rice (@15.000)\n");
		printf("2. Shusi (@17.000)\n");
		printf("3. DImsum (@12.000)\n");
		printf("\nDrink :\n");
		printf("1. Sweat ice tea (@3.000)\n");
		printf("2. Lemon ice tea (@5.000)\n");
		printf("3. Ice Coffe (@4.000)\n");
		printf("\nEnter food you wish to buy : ");scanf("%d",&food);
		switch(food)
		{
			case 1:
				printf("Fried Rice (@15.000)\n");
				printf("How much u wish : ");scanf("%d",&allfood);
				totalfood=allfood*15000;
				printf("Total Price : Rp. %d\n",totalfood);
				break;
			case 2:
				printf("Shusi (@17.000)\n");
				printf("How Much u wish : ");scanf("%d",&allfood);
				totalfood=allfood*17000;
				printf("Total Price : Rp. %d\n",totalfood);
				break;
			case 3:
				printf("Dimsum (@12.000)\n");
				printf("How Much u wish : ");scanf("%d",&allfood);
				totalfood=allfood*12000;
				printf("Total Price : Rp. %d\n",totalfood);
				break;
			default:
				printf("Menu not found");
		}
		printf("\n===========================================\n");
		printf("Enter Drink you wish to buy : ");scanf("%d",&drink);
		switch(drink)
		{
			case 1:
				printf("Ice tea (@3.000)\n");
				printf("How much u wish : ");scanf("%d",&alldrink);
				totaldrink=alldrink*3000;
				printf("Total Price : Rp. %d\n",totaldrink);
				break;
			case 2:
				printf("Lemon ice tea (@5.000)\n");
				printf("How much u wish : ");scanf("%d",&alldrink);
				totaldrink=alldrink*5000;
				printf("Total Price : Rp. %d\n",totaldrink);
				break;
			case 3:
				printf("Ice coffe (@4.000)\n");
				printf("How much u wish : ");scanf("%d",&alldrink);
				totaldrink=alldrink*4000;
				printf("Total Price : Rp. %d\n",totaldrink);
				break;
			default:
				printf("Menu not found");
		}
		printf("\n===========================================\n");
		total=totalfood+totaldrink;
		printf("Total price : Rp. %d\n",total);
		printf("Money income : Rp. ");scanf("%d",&buy);
		change=buy-total;
		printf("Change : Rp. %d",change);
	}
}


