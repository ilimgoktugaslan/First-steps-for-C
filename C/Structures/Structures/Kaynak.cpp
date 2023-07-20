#include<stdio.h>
#include<string.h>


// Structures // We use structures for get together different datas.
/*
struct cars
{
	char brand[20];
	char model[20];
	int year;
	int horsepower;
};

int main ()
{
	struct cars car1 = {"Alfa Romeo","4C",2017,240};			// We use this to call structers and add data.
	struct cars car2 = {"Astan Martin","DB7",2004,420};
	printf("--------Cars------\n %s %s %d %d", car1.brand,car1.model,car1.year,car1.horsepower);
	printf("\n %s %s %d %d", car2.brand, car2.model, car2.year, car2.horsepower);
	return 0;
}*/

//  Company personel datas.
/*
struct personeldata
{
	char name[20];
	char surname[20];
	int salary;

};

int main()
{
	struct personeldata personels[3];
	int i = 1;
	for ( i = 1; i < 5; i++)
	{
		printf("\nPlease enter datas of personel %d:",i);
		printf("\nPlease enter personel's name:");
		scanf("\n %s", &personels[i].name);
		printf("\nPlease enter personel's surname:");
		scanf("\n %s", &personels[i].surname);
		printf("\nPlease enter personel's salary:");
		scanf("\n %d", &personels[i].salary); 
	}

	for ( i = 1; i < 5; i++)
	{
		printf("\n %s-%s-%d \n", personels[i].name, personels[i].surname, personels[i].salary);
	}

	return 0;
}*/

// Make an inventory with structers
/*
struct detail
{
	char color[20];
	char size[20];
	char footnote[20];
};

struct products
{
	char name[20];
	int number;

	struct detail info;

};
	
int main ()
{

	struct products pro1;
	strcpy(pro1.name,"TV");
	pro1.number = 252;
	strcpy(pro1.info.color, "red");
	strcpy(pro1.info.size, "1500x800");
	strcpy(pro1.info.footnote, "Suitable for renting");

	printf("Products info is down.\n");
	printf(" Product name: %s \n product number: %d \n product color: %s \n product size : %s \n product footnote: %s", pro1.name, pro1.number, pro1.info.color, pro1.info.size, pro1.info.footnote);

	return 0;
}*/

// Make a school system with Functions in Stuctures
/*
struct students
{
	char name[20];
	char surname[20];
	int birth;
	int no;
};

void showtoinfo(struct students info)
{
	printf(" Student name: %s \n Student surname: %s \n Student birth %d \n Student no: %d",
		info.name, info.surname, info.birth, info.no);

}

struct students studentadd ()
{
	struct students add;
	printf("Please enter student's info ");
	printf("Student's name:");
	scanf("%s", &add.name);
	printf("Student's surname:");
	scanf("%s", &add.surname);
	printf("Student's birth:");
	scanf("%d ",&add.birth);
	printf("Student's no:");
	scanf("%d",&add.no);

	return add;
}

int main ()
{
	struct students st1 = studentadd();
	showtoinfo(st1);
	struct students st2 = studentadd();
	showtoinfo(st2);

	return 0;
}*/