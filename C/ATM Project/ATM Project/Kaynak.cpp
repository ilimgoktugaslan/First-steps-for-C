#include <stdio.h>
#include <string.h>

// ATM Project
/* Steps
*  We will take user_infos.
* Users will see his,her balance
* Users can take and add money
* Users can see his,her info.
*/

int main ()
{
	char name[20] = "ilim";
	int password = 1234;
	int balance = 500;
	char wname[20];
	int wpassword;
	int cho;
	int addm;
	int tm;

	printf("Welcome to ATM \nPlease enter your user informations:");
	scanf ("%s", &wname);
	printf("\nPlease enter your password:");
	scanf ("%d", &wpassword);

	if (strcmp (name,wname)==0 && password==wpassword )
	{
		printf("User informations matched \n\n");
		printf("Choose one of the following actions \n[1] Add money \n[2] Take money \n[3] User informations: ");
		scanf ("%d", &cho);

		switch (cho)
		{
		case 1 :  printf("You are in process add, please enter how much money you want to add:");
			scanf ("%d",&addm);
			balance += addm;
			printf("Your process is succesful. \nYour add: %d \nYour total balance %d", addm, balance); break;

		case 2:  printf("You are in process take, please enter how much money you want to take:");
			scanf ("%d", &tm);
			balance -= tm;
			printf("Your process is succesful. \nYour take: %d \nYour total balance %d", tm, balance); break;

		case 3: printf("Those are your informations: \nName: %s \nPassword: %d \nYour balance: %d", name, password,balance); break;


			default: printf("You chose a wrong number. ");
		}
	}

	else
	{
		printf("User name or passoword didn't match");
	}



	return 0;
}