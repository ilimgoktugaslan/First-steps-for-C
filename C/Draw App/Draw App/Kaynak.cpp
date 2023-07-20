#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// We need to these libraries for find randem numbers

// Draw App

int main() {
	char name[20];
	int cho;
	int appno;
	printf("Welcome to Draw App \n Please enter your name\n ");
	scanf("%c",&name);
	printf("Please choice a option below\n [1]-Try your chance\n [2]-Check your information \n");
	scanf("%d", &cho);

	if (cho==1)
	{	
		printf("You are in the draw app please choice 5to 1");
		scanf("%d", &appno);
		srand(time(NULL)); // We use this for don't connect everytime with just one number. And this number will change when we run the program
		int randomno = 1+rand()%5;  // We use this for find random number.
		 
		if (randomno==appno)
		{
			printf("Your number=%d\n Lucky number=%d\n", appno, randomno);
			printf("You won!!!!");
		}
		else
		{
			printf("Your number=%d\n Lucky number=%d\n", appno, randomno);
			printf("You didn't won \n Maybe next time :)");
		}
	}
	else if (cho==2) 
	{
		printf("Your user informations=%s %s", name);
	}
	return 0;
}