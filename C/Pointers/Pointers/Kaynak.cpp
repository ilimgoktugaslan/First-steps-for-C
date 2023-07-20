#include <stdio.h>
#include <string.h>

// Pointer // We use pointer that is a variable for show adress of another variable.
/*
int main() 
{
	int no1 = 15;
	int no2 =25;
	char word = 'c';
	int *pointerone, *pointertwo;
	pointerone = &no1;
	pointertwo = &no2;

	// If we wanno drow value of no1, we use *pointerone and if we wanno drow adress of no1 we use pointerone.
	printf("no1=%d \n  Adress of no1 in ram:(be hektadecimal): %x", *pointerone,pointerone); 
	printf("\n no2=%d \n Adress of no2 in ram:(be hektadecimal): %x", *pointertwo,pointertwo);
	// printf("\n word=%c \n  Adress of word in ram:(be hektadecimal): %x", word, &word);

	//printf("\nMemory space of pointerone: %x ", &pointerone);
	//printf("\nMemory space of pointertow: %x ", &pointertwo);

	// Standard operations in pointers

	*pointerone += 2; // When we do this adress and value of pointerone end will increase by 4 and 2.
	int no3 = *pointerone + 5; // We use value of pointerone.
	printf("%d\n", no3);


	//scanf("%d",&no2);

	
	variable name= no1
	variable adress=7caff9b4
	variable value=15

	variable name= no2
	variable adress=7caff9d4
	variable value=25
	
	variable name= word
	variable adress=7caff9f4
	variable value=c

	variable name= pointerone
	variable adress=7caffa18
	variable value=7caff9b4

	variable name=pointertwo
	variable adress=7caffa38
	variable value=7caff9d4
	

	return 0;
}*/

// Arrays in Pointers
/*
int main () 
{
	char words[20];
	int *pointerwords;
	pointerwords=&words;
	printf("%x", pointerwords);
	return 0;
}*/

// Adress finder
/*
int main ()
{
	int q ;
	printf("Please enter how many numbers do you want enter:");
	scanf("%d", &q);
	int numbers[q];

	for (int i = 0; i < q; i++)
	{
		printf("Please enter number %d", i);
		scanf("%d",&numbers[i]);
	}

	int *pointer;
	for ( int i = 0; i < q; i++)
	{
		pointer = &numbers[i];
		printf("This is %x adress of number %d in ram. ", numbers[i], pointer);	 
	}

	return 0;
}*/