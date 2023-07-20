#include <stdio.h>
#include <string.h> // We include this library to use different commands.
 
//  Arrays  --We use this for different values.

int main() {

	int numbers[] = { 15,25,18,24,52 }; // We define arrays with like this.

	 // printf("%d", numbers[0]); // We to call a value like this.

	for (int i = 0; i <; i++)
	{
		printf("%d\n", numbers[i]);
	}
	return 0;
}

// Number writer
/*
int main() {

	int numbers[20];  // We use this to limit enter numbers.
	int enternumbers;

	printf("How many numbers do you want to enter ");
	scanf_s("%d", &enternumbers);

	for (int i = 0; i < enternumbers; i++)
	{
		printf("\nPlease enter number one %d:", i + 1);
		scanf_s("%d", &numbers[i]);
	}
	for (int j = 0; j < enternumbers; j++)
	{
		printf("%d\n", numbers[j]);

	}
	return 0;
}*/

//  Make a string with char
/*
int main() {
	// We use this because there is no string term in C
	char name[] = { "Ilim" };
	char surname[] = { "Aslan" };
	//printf("%s", name); // We can to call string term use %s.
   /*
   for (int i= 0; i < 10; i++) // This is way two.
   {
	   printf("%c", name[i]);

   }

   // printf("%c", name[0]);

   //printf(strcat(name,surname)); // We use (strcat) to connect different string term.

   //int number = strlen(name); // We use (strlen) to learn lenght of string term.
   //printf("%d", number);

   /*
   if (strcmp(name,surname)==0) // We use (strcmp) to matching string terms.
   {
	   printf("Your name and surname matched.");
   }

   else
   {
	   printf("Your name and surname didn't match.");
   }
   // printf(strlwr(name)); // We use (strlwr) for convert arrays to lowercase.

   // printf(strupr(surname)); // We use (strupr) for conver arrays to uppercase.

   // printf(strrev(name)); // We use (strrev) for reverse our string term.

	return 0;
}*/

//  Lock Project

	/*
	int main() {

		char name1[50];
		char password1[50];
		char namedata[] = { "Aslan" };
		char passworddata[] = { "aslan" };

		printf("Please enter your name:");
		scanf("%s",&name1);

		printf("Please enter your password:");
		scanf("%s", &password1);

		if (strcmp(name1,namedata) ==0 && strcmp(password1,passworddata) ==0)
		{
			printf("User's datas matched.");
		}
		else
		{
			printf("User's datas didn't match.");

		}
	return 0;
	}*/

// Matris  // Matris is like a table and there are rows and columns in matrises.
/*
int  main() {

	int matris[2]/*column*[2]/*row* = { {1,2},{3,4} };

	matris[0][0] = 1; // First column  and row =1
	matris[0][1] = 2; // First column and second row=2
	matris[1][0] = 3; // Second column and first row=3
	matris[1][1] = 4; // Second column and second row=4

	return 0;
}*/

// Project Matris
/*
int main(){
	// There are four column and row.
	int matris[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };

	//printf("%d", matris[1][2]);
	//printf("\n%d", matris[3][1]);
	
	for (int i = 0; i <=3; i++)
	{
		for (int j = 0; j <=3; j++)
		{
			printf("%d/", matris[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

// Project Matris 2
/*
int main() {

	int matris[3][3]; //There are three column and row but they are empty.

	for (int i = 0; i <3; i++)
	{
		for (int j = 0; j <3; j++)
		{
			printf("Now you are in %d column \n%d row ",i,j); // We can learn which column and row we are with this.
			scanf_s("%d", &matris[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d/", matris[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/

