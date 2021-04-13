#include<stdio.h>
main()
{
	printf("Choose between the following numbers:\n0. 0\n1. 1");
	int number;
	scanf("%d", &number);
	switch (number)
	{
		case 0:
			printf("you selected 0");
			break;
			case 1:
				printf("you selected 1");
				break;
				default:
					printf("you made invalid choice");
	}
	return 0;
}
