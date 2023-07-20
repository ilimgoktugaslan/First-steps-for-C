 # include <stdio.h>

// If and Else
/*
int main() {

	int notu;
	printf("Ogrenci notunu giriniz:");
	scanf_s("%d", &notu);

	if (notu >= 50) {
		printf("Ogrenci dersi gecmistir.");
	}

	else {
		printf("Ogrenci dersi gecememistir");
	}
	return 0;
}*/


// Find double and single numbers


int  main() {

	int number1;
	printf("Please enter a number");
	scanf_s("%d", &number1);
	
	if (number1%2==0 ) {

		printf("This number is double");
	}

	else {

		printf("This number is single");

	}

	return 0;
}