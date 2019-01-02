#include<stdio.h>
#include<conio.h>

void main()
	{       clrscr();
		int a;
		printf("Enter any Number\n");
		scanf("%d",&a);
		if(a%2==0)
			printf("%d is Even",a);
		else
			printf("%d is Odd",a);


		getch();

	}