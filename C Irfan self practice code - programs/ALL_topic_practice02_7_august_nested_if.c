
//Nested if
/*
#include<stdio.h>
int main()
{
    int age;
    int marks;

    printf("enter your age\n");
    scanf("%d", &age);

    printf("enter your marks");
    scanf("%d", &marks);

    if(age >=18)
    {
        if(marks >= 35)
        {
            printf("eligible for attend exam");
        }
        else
        {
            printf("your marks is not appear for exam\n");
        }
    }
    else
    {
        printf("not eligible for attend exam");

    }
    return 0;
}



// Switch_break

#include<stdio.h>
int main()
{
    int day;

    printf("enter yor day");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("moday");
        break;

        case 2:
        printf("teusday");
        break;

        case 3:
        printf("wednesday");
        break;

        default:
        printf("invalid day");
        break;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int opp;
    int num1,num2;
    
    printf("enter the first character\n");
    scanf("%c",&num1);

    printf("enter the second character\n");
    scanf("%c",&num2);

    switch(opp)
    {
        case 1:
        printf("%d", num1+num2);
        break;

        case 2:
        printf("%d", num1-num2);
        break;

        case 3:
        printf("%d", num1*num2);

        case 4:
        printf("%d",num1/num2);
        break;

        default:
        printf("invalid enter");


    }
    return 0;
}

*/

#include<stdio.h>
int main()
{
    int num1,num2,choice;

    printf("calculator");
    printf("\n addition");
    printf("\nsubstraction");
    printf("\n mult");
    printf("\ndivision");

    printf("enter the first number");
    scanf("%d",&num1);

    printf("enter the second number");
    scanf("%d",&num2);

    printf("enter your choice");
    scanf("%d",&choice);

    switch(choice) 
    {
        case 1:
        printf("%d", num1+num2);
        break;

        case 2:
        printf("%d", num1-num2);
        break;

        case 3:
        printf("%d", num1*num2);
        break;

        case 4:
        printf("%d",num1/num2);
        break;

        default:
        printf("invalid enter");
        break;
    }
    return 0;

}