#include <stdio.h>
#include <string.h>

// Functions -- We use functions to create a specific action.
/*
void himessage() // We use (void,int,double) for create a functin. // Void don't give any info outside just works in function.
{
	printf("Welcome."); // If I called himeesage(), it writes this massege.
}

int main() {

	himessage(); // We can call function with this.

	himessage(); // We can call function with this.

	himessage(); // We can call function with this.
	return 0;
}*/

// Function Project 1
/*
void usersinfo (char name[20]) // If we use variable outside of function, we have to use this way. (char name[20])
{
	printf("Your name:%s", name);
}


int main() {

	char name[20];
	printf("Please enter your name:");
	scanf_s("%c", &name);
	usersinfo(name); // And this usersinfo(name);
	return 0;
}*/

//Sort by numbers

/*
void sortbynumbers(int a, int b) 
{
	if (a<b)
	{
		printf("%d<%d", a, b);
	}
	else if (b<a)
	{
		printf("%d<%d", b, a);
	}
	else
	{
		printf("%d=%d", a, b);

	}
}

int main() {

	int no1;
	int no2;

	printf("Please enter first no:");
	scanf("%d", &no1);
	printf("\nPlease enter second no :");
	scanf("%d", &no2);

	sortbynumbers(no1, no2); // Now no1=a and no2=b

	return 0;
}*/

// Make a calculater with functions
/*
int additon( int a,int b)
{
	int add = a + b;
	printf("%d", add);
}
int exraction(int a,int b)
{
	int ex = a - b;
	if (a>b)
	{
		ex = a - b;
	}
	
	else if (b>a)
	{
		ex = b - a;
	}
	
	printf("\n%d", ex);
}
int multiplication(int a, int b)
{
	int multi = a * b;
	printf("\n%d", multi);
}
int division(int a, int b)
{
	int div = a / b;
	printf("\n%d",div);
}

int main() 
{
	int no1;
	int no2;

	printf("Please enter firts number:");
	scanf("%d", &no1);
	printf("Please enter second number:");
	scanf("%d", &no2);

	additon (no1, no2);
	exraction(no1, no2);
	multiplication(no1, no2);
	division(no1, no2);
	return 0;
}*/

// Find single and double numbers
/*
void doubleorsingle(int a)
{
	if (a%2==0)
	{
		printf("Your number is double.");
	}
	else
	{
		printf("Your number is single");
	}
}

int main() {

	int no1;
	printf("Please enter number:");
	scanf("%d", &no1);

	doubleorsingle(no1);

	return 0;
}*/

// Fint to numbers exponential
/*
void calculat(int a, int b)
{
	int answer = 1;
	for (int i = 0; i < b; i++)
	{
		answer *= a;
	}
	printf("Exponential of your number=%d",answer);	
}

int main()
{
	int no;
	int p;
	printf("Please enter number:");
	scanf("%d", &no);
	printf("Please enter how many do you want exponential of number:");
	scanf("%d", &p);

	calculat(no, p);

	return 0;
}*/

// Use to (return) 
/*
int addnumber(int a, int b)
{
	int add = a + b;
	return add; // We can send an int with this between functions and other functions.
}

int main()
{ 
	int no1;
	int no2;

	scanf("%d %d",&no1,&no2);
	int answer = addnumber(no1, no2);

	addnumber(no1, no2);
	printf("%d", addnumber(no1, no2));
	printf("%d", answer);

	return 0;
}*/

// Find an equality
/*
int numbersareequality(int a,int b)
{
	if (a==b)
	{
		return 1; // return 1 == true
	}
	else
	{
		return 0; // return 0 == false
	}

}

int main()
{
	int no1;
	int no2;
	scanf("%d %d", &no1, &no2);

	bool value=numbersareequality(no1, no2); // We use bool to true or false variables.

	if (value)
	{
		printf("%d=%d", no1, no2);
	}
	else
	{
		printf("%d!=%d", no1, no2);
	}
	return 0;
}*/