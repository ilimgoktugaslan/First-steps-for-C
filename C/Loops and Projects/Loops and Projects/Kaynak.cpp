#include<stdio.h>
// Loops
// While
/*
int main() {
	
	 while(condition){
	step1;
	step2;
	}

	int i = 0;
	while (i<=100 ) // if i is under or same 100, loop will work
	{
		if (i%3==0) 
		{
			printf("%d\n", i);			
		}
		i++; // When loop is over, x will increase by one.
	}
	return 0;
}*/

// Factorial Calculus
/*
int main() {
	int number;
	printf("Plese enter a number for calculate ");
	scanf_s("%d", &number);
	int i=1;
	int fac = 1;
	
	while (i<=number)
	{
		fac=fac*i;
		i++;
	}
	printf("\nConclusion=%d", fac);
	return 0;
}*/

// Number additioner
/*
int main() {
	int number;
	printf("Please enter a number");
	scanf_s("%d", &number);

	int i=0;
	int total=0;

	while (i<=number)
	{
		printf("Values=%d\n", i);
		total += i;
		i++;	
	}

	printf("\n Total=%d", total);

	return 0;
}*/

// Sum of digits
/*
int main() {
	int number, total = 0, remainder;
	printf("Please enter a number:");
	scanf_s("%d", &number);

	while (number!=0)
	{
		remainder = number % 10;
		total = total + remainder;
		number = number / 10;
	}
	printf("\nSum of digits :%d", total);
	return 0;
}*/

// Write backwards
/*
int main() {

	int number, rev=0;
	printf("Please enter a number");
	scanf_s("%d", &number);

	while (number!=0)
	{
		rev = rev * 10;
		rev = rev + number % 10;
		number = number / 10;
	}
	printf("\n Reverse of your number=%d", rev);

	return 0;
}*/

// Do While Loop // This always runs first codes that are in (do) then checks those.
/*
int main() {

	int i = 10;

	do
	{
		printf("%d\n", i);
		i--;

	} while (i<10&&i>0);
	
	return 0;
}*/

// For Loop // We use this for three different conditions.
/*
int main() 
{
	
	//int i=0;
	//for (i=0;(start),i<10;(end),i++;(how))
	//{
	//step1;
	//step2;
	//}
	

	int i;
	int number;
	int totaldoublenumber=0;
	int totalsinglenumber=0;
	printf("Please enter a number:");
	scanf_s("%d", &number);

	for ( i = 0; i <=number; i++)
	{
		if (i%2==0)
		{
			printf("%d", i);
			totaldoublenumber = totaldoublenumber + i;
		}

		else
		{
			totalsinglenumber += i;
		}
		
	}
	printf("Total double numbers= \n %d \n Total single numbers= \n %d", totaldoublenumber,totalsinglenumber);

	return 0;
}*/

// Find to Prime numbers
/*
int main() {
	
	int i;
	int number;
	int counter=0;
	printf("Please enter a number:");
	scanf_s("%d",&number);

	for ( i = 2; i <number; i++)
	{
		if (number%i==0)
		{
			counter++;
		}
		if (counter==0)
		{
			printf("\n This number is prime number ");
		}
		else
		{
			printf("\nThis number is not Prime number");

		}
	}
	return 0;
}*/

// The multiplication table // Loop j will 5 turn in a loop on i.
/*
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);

		}
	}
	return 0;
}*/

// Break and Continue - We use these for stopping and passing to loops.
/*
int main() {

	for (int i = 0; i < 10; i++)
	{
		if (i%2==0)
		{
			// break; // We use this for breaking loops.
			//continue;  // We use this for passing loops.
		}
		printf("%d\n", i);
	}
	return 0;
}*/