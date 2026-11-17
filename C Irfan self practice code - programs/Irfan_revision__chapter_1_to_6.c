/*
Apna naam print karo.

Output:

My name is Irfan
*/

/*
#include<stdio.h>
int main()
{
    printf("My name is Irfan");
    return 0;

}
*/
/* Create:

int age = 32;
float height = 5.8;
char grade = 'A'
*/

/*
#include<stdio.h>
int main()
{
 int age = 32;
 float height = 5.8;
 char grade = 'A';

 printf("age = %d",32);
 printf("\nheight = %f",5.8);
 printf("\ngrade = %c",'A');

 return 0;

}
*/

/* Enter your age: 32

Your age is 32*/

/*
#include<stdio.h>
int main()
{
    char name[50];
    printf("enter yor name");
    scanf("%s", name);

    printf("\n your name is %s",name);

    

    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;

    printf("enter the number1 :");
    scanf("%d",&num1);

    printf("\n enter the number2 :");
    scanf("%d",&num2);

    printf("\nthe addition is : %d",num1 + num2);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{

    int num1;
    int num2;

    printf("enter the first value");
    scanf("%d",&num1);

    printf("\nenter the second value");
    scanf("%d",&num2);

    printf("\n the addition is : %d", num1 + num2);
    printf("\nthe multiplication is : %d", num1*num2);
    printf("\n the substraction is : %d", num1-num2);
    printf("\n the division is : %d", num1/num2);

    return 0;


}
*/
/*
#include<stdio.h>
int main()
{
    char name[50];
    int age;
    char city[30];

    printf("enter your name");
    scanf("%s",name);

    printf("\nenter your age");
    scanf("%d", &age);

    printf("\nenter tour city");
    scanf("%s",city);

    printf("\nyour profile");
    printf("\nyourname is %s",name);
    printf("\n oyur age is %d",age);
    printf("\nyour city is %s",city);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    char name[40];
    int age;
    float version;
    char country[20];

    printf("enter your name");
    scanf("%s",name);

    printf("enter your age");
    scanf("%d",&age);

    printf("enter your mobile version");
    scanf("%f",&version);

    printf("enter your country");
    scanf("%s",country);

printf("\your profile");
printf("\nyour name is %s",name);
printf("\n your age is %d",age);
printf("\nyour mobile varsion is %f",version);
printf("\nyour country is %s",country);


    return 0;


}
*/
/*
#include<stdio.h>
int main()
{
    int a =20;
    a += 5;
    printf("%d",a);

    a -= 8;
    printf("\n%d",a);

    a *= 4;
    printf("\n%d",a);

    a /= 2;
    printf("\n%d",a);

    return 0;

}
*/
/* ternary operator (condition) ? true_value : false_value;
*/

/*
#include<stdio.h>
int main()
{
    int a = 15;
    int b = 44;
    
    //int result = (a > b) ? a : b;
    int result = (a < b) ? a : b;
    printf("%d", result);

    return 0;

}
    */
   // Bitwise operator

#include<stdio.h>
int main()
{
    int a = 30;
    int b = 40;

    printf("%d", a | b);

    return 0;
}

