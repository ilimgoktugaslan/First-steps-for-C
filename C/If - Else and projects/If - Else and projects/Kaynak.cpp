# include <stdio.h>

// If and Else

int main() {

    int point;
    printf("Please enter point of student:");
    scanf_s("%d", &point);

    if (point >= 50) {
        printf("Student  passed lesson.");
    }

    else {
        printf("Student didn't pass lesson");
    }
    return 0;
}

// Find to double and single numbers
/*
int  main() {
    
    int number;
    printf("Please enter number.");
    scanf_s("%d", &number);

    if (number % 2 == 0) {
        printf("This number is double.");
    }
    else { 
        printf("This number is single.");

    }
return 0;

}*/

// Drive licence limiter (will be reviewed later)
/*
int main() {
    
    char name[10];
    char surname[10];
    int age;

    printf("Please enter your name.");
    scanf_s("%c", &name);

    printf("Please enter your surname.");
    scanf_s("%c", &surname);

    printf("Please enter your age.");
    scanf_s("%d", &age);

    if (age >=18)
    {
        printf("%c %c", name, surname);
        printf("You can take drive licence.");
    }

    else
    {
        printf("You can not take drive licence.");
    }
    return 0;
}*/

// Sort of Number
/*
int main() {
    int no1;
    int no2;
    int no3;

    printf("Please enter numbers; ");
    scanf_s("%d %d %d", &no1, &no2, &no3);
    printf("These are your numbers: \n%d %d %d\n", no1, no2, no3);

    if (no1 > no2 && no1 > no3)
    {
        if (no2 > no3)
        {
            printf("%d>%d>%d", no1, no2, no3);
        }
        else
        {
            printf("%d>%d>%d", no1, no3, no2);
        }
    }
    else if (no2 > no1 && no2 > no3)
    {
        if (no1>no3)
        {
            printf("%d>%d>%d", no2, no1, no3);
        }
        else
        {
            printf("%d>%d>%d", no2, no3, no1);
        }
    }
    else if (no3>no2&&no3>no1)
    {
        if (no1>no2)
        {
            printf("%d>%d>%d", no3, no1, no2);
        }
        else
        {
            printf("%d>%d>%d", no3, no2, no1);
        }
    }
    return 0;
}*/

// Work of Switch
/*
int main() {
    int cho;
    printf("Please choice a number in three to one:");
    scanf_s("%d", &cho);
    // We use swicth for different choice.
    switch (cho) //  Throw the cho in switch then we will make different case for different scenario
    {
    case 1: printf("Choice one is chosen."); break;
    case 2: printf("Choice two is chosen."); break;
    case 3: printf("Choice three is chose"); break;
    // We use default for wrong ways.
    default:printf("You chose a wrong number. ");
        }
    return 0;
}*/

// Make Decision ( Calculator)
/*
int main() {
    int no1, no2;
    int cho;
    printf("Please enter first number:");
    scanf_s("%d", &no1);
    printf("Please enter second number:");
    scanf_s("%d", &no2);
    
    printf("Please choice one of  the options  below.\n[1]-Addition\n[2]-Extraction\n[3]-Multiplication\n[4]-Division");
    scanf_s("\n%d", &cho);

    switch (cho)
    {
    case 1:printf("You choce first options, addition of your numbers= %d", no1 + no2); break;
    case 2:printf("You choce second options, extraction of your numbers= %d", no1 - no2); break;
    case 3:printf("You choce thirst options, multiplication of your numbers= %d", no1 * no2); break;
    case 4:printf("You choce fourth options, division of your numbers= %d", no1 / no2); break;
    default: printf("Please choice available option."); break;
    }
    return 0;
}*/

// Make Decision (Calculator) with If and Else
/*
int main() {
    int no1, no2;
    int cho;
    printf("Please enter first number:");
    scanf_s("%d", &no1);
    printf("Please enter second number:");
    scanf_s("%d", &no2);

    printf("Please choice one of  the options  below.\n[1]-Addition\n[2]-Extraction\n[3]-Multiplication\n[4]-Division");
    scanf_s("\n%d", &cho);

    if (cho==1)
    {
        printf("You choce first options, addition of your numbers= %d", no1 + no2);
    }

    else if (cho==2) 
    {
        printf("You choce second options, extraction of your numbers= %d", no1 - no2);
    }

    else if (cho==3)
    {
        printf("You choce thirst options, multiplication of your numbers= %d", no1 * no2);
    }
    else if (cho==4)
    {
        printf("You choce fourth options, division of your numbers= %d", no1 / no2);
    }
    else
    {
        printf("Please choice available option.");
    }
    return 0;
}*/