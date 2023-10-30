#include <stdio.h>
// https://github.com/sefasarac
int main()
{
	float Apple = 5.0;
	float Orange = 7.0;
	float Tomate = 9.0;
	float Meat = 50.0;
	float Chicken = 25.0;
	float Milk = 2.5;
	float Yoghurt = 4.2;
	float Egg = 1.1;
	float Lemonate = 1.9;
	float Coke = 2.3;

	printf("****************Online Shopping*****************\n");
	printf("1- Apple        5$\n");
	printf("2- Orange       7$\n");
	printf("3- Tomate       9$\n");
	printf("4- Meat         50$\n");
	printf("5- Chicken      25$\n");
	printf("6- Milk         2.5$\n");
	printf("7- Yoghurt      4.2$\n");
	printf("8- Egg          1.1$\n");
	printf("9- Lemonate     1.9$\n");
	printf("10-Coke         2.3$\n");
	printf("************************************************\n");

	int product;
	float quantity;
	float totalPrice;
	totalPrice = 0.0;
	float money;
	float second_money;
	char cancel;

	printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
	scanf("%d %f", &product, &quantity);

	while (product != 0 && product != -1)
	{

		if (product == 1)
		{
			printf(" %.2f kg Apple : %.2f$\n", quantity, Apple * quantity);
			totalPrice += Apple * quantity;
		}

		if (product == 2)
		{
			printf(" %.2f kg Orange : %.2f$\n", quantity, Orange * quantity);
			totalPrice += Orange * quantity;
		}

		if (product == 3)
		{
			printf(" %.2f kg Tomate : %.2f$\n", quantity, Tomate * quantity);
			totalPrice += Tomate * quantity;
		}

		if (product == 4)
		{
			printf(" %.2f kg Meat : %.2f$\n", quantity, Meat * quantity);
			totalPrice += Meat * quantity;
		}

		if (product == 5)
		{
			printf(" %.2f kg Chicken : %.2f$\n", quantity, Chicken * quantity);
			totalPrice += Chicken * quantity;
		}

		if (product == 6)
		{
			printf(" %.2f lt Milk : %.2f$\n", quantity, Milk * quantity);
			totalPrice += Milk * quantity;
		}

		if (product == 7)
		{
			printf(" %.2f kg Yoghurt : %.2f$\n", quantity, Yoghurt * quantity);
			totalPrice += Yoghurt * quantity;
		}

		if (product == 8)
		{
			printf(" %.2f kg Egg : %.2f$\n", quantity, Egg * quantity);
			totalPrice += Egg * quantity;
		}

		if (product == 9)
		{
			printf(" %.2f lt Lemonate : %.2f$\n", quantity, Lemonate * quantity);
			totalPrice += Lemonate * quantity;
		}

		if (product == 10)
		{
			printf(" %.2f lt Coke : %.2f$\n", quantity, Coke * quantity);
			totalPrice += Coke * quantity;
		}

		printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
		scanf("%d", &product);

		if (product == -1)
		{
			break;
		}
		else if (product == 0)
		{
			printf("Are you sure (y/n) : ");
			scanf("%s", &cancel);
			if (cancel == 'y')
			{
				printf("y\n");
				printf("Have a good day...");
				break;
			}
			else if (cancel == 'n')
			{
				printf("n\n");
				printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
				scanf("%d", &product);
			}
		}

		scanf("%f", &quantity);
	}

	if (product == -1)
	{
		printf("-1\n");
		printf("Your total price is %.2f$.", totalPrice);
		printf(" How much money you enter: ");
		scanf("%f", &money);
		printf("%.2f$\n", money);
		if (money < totalPrice)
		{
			printf("Your money is not enough. You must add %.2f for total price. How much money you enter: ", (totalPrice - money));
			scanf("%f", &second_money);
			printf("%.2f$\n", second_money);
			printf("Total price has been paid. Your remaining money is %.2f$.\n", (money + second_money) - totalPrice);
			printf("Have a good day...");
		}
		else if (money > totalPrice)
		{
			printf("Total price has been paid. Your remaining money is %.2f$.\n", money - totalPrice);
			printf("Have a good day...");
		}
	}

	return 0;
}
// https://github.com/sefasarac