//printf program
/*
#include<stdio.h>
int main()
{
    printf("\n Irfan");
    printf("\nEmedded system Engineer");
    printf("\n India");
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int age;
    char grade;
    float percentage;

    printf("enter your age");
    scanf("%d",&age);
    
    printf("\nenter your grade ");
    scanf(" %c",&grade);
    
    printf("\nenter your expected percentage");
    scanf("%f",&percentage);

    

    printf("\n your age is : %d",age);

    printf("\n your grade is: %c",grade);

    printf("\ninshaAllah your percentage rate is : %2.f",percentage);

    return 0;

}
*/

/*
#include<stdio.h>

int main() {
    int age;
    char grade;
    float percentage;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    // %c se pehle space dena zaroori hai taaki enter key skip ho jaye
    scanf(" %c", &grade); 

    printf("Enter your expected percentage: ");
    scanf("%f", &percentage);

    printf("\nYour age is: %d", age);
    printf("\nYour grade is: %c", grade); // %c use kiya single character ke liye
    printf("\nInshaAllah your percentage rate is: %.2f%%", percentage); // %.2f se point ke baad 2 digits dikhenge

    return 0;
}


*/
 
/*
#include<stdio.h>
int main()


{
    int age;

    printf("enter your age");
    scanf("%d",&age);

    if (age>=18)

    {
        printf("\n your age is eligible for marriage");

    }
    
    else
    {
        printf("\n your age is not eligible for marriage");
    }
     return 0;

}
     */

/*
#include<stdio.h>
int main()
{
    int age;

    printf("enter your age");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\n you are eligible");
    }
   else
    printf("\n you are not eligible");

    return 0;
}
*/


/*

#include<stdio.h>
int main()
{
    int num;

    printf("enter the number");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("\n %d is even",num);

    }

    else
    {
        printf("\n the %d is odd",num);

    }

    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    int marks;

    printf("enter the marks");
    scanf("%d",&marks);
 
    if(marks >= 35)
    {
        printf("\n Congrats!! you are pass");

    }
    else
    {
        printf("\n sorry, you are fail");

    }
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int num;

    printf("koi bhi number dale");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("\n ye positive number hai");
    }
    else if (num < 0)
   {
    printf("\n ye negative number hai");

   }
   else
   {
    printf("\n ye zero hai");

   }
   return 0;

}
*/

/*
#include<stdio.h>
int main()
{
    int num;
    printf("koi bhi number dale");
    scanf("%d",&num);

    if(num > 0)

{
    printf("\nnumber is positive");
}
else if(num < 0)
{

printf("\nnumber is negative");

}
else
{
    printf("\n number is zero");
}

 return 0;

 }

*/
/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("koi bhi number enter kare space de kar");
    scanf("%d %d", &a, &b);

    if(a >b)
    {
        printf("\n %d is  number is bigeer than %d",a,b);
    }
    else if(a < b)
    {
        printf("\n %d is number is smaller than %d",a,b);

    }
    else
    {
        printf("\n number is equal");

    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a,b;

    printf("enter the two numbers with space");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf("\n %d number is bigger than %d", a,b);
        

    }
    else if(a < b)

{

    printf("\n %d number is smaller than %d", a,b);

}
  else
  {
    printf("\n number is exual");
  }
  return 0;
}


*/

// for 

/*
#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=7; i++)
    {
        printf("\n%d",i);
    } 
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int i;
    for(i = 7; i>=1; i--)
    {
        printf("\n%d",i);

    }
    return 0;
}


*/

/*
#include<stdio.h>
int main()
{
    int i;

    for(i = 1; i<=5; i++)

    {
    printf("5 * %d = %d\n",i, 5*i);

    }
    return 0;

}
*/

//while

/*
#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=5)
    {
        printf("%d\n",i);
        i++;

    } 
    return 0;
    */
/*
    #include<stdio.h>
    int main()
    {
        int i = 9; // by mistake run

        while(i<=10)
        {
            printf("%d\n",i);
            i++;
        }

        return 0;
        
    }
    */
   
   /*
    #include<stdio.h>
    int main()
    {
        int i = 1;
        while( i <=20 )
        {
            printf("%d\n",i);
             i  = i+n;

    }

       return 0;
     }

     
#include<stdio.h>
int main()
{
    int a,b;
    printf(" koi bhi two number dale");
    scanf("%d %d", &a, &b);

    if(a >b)
    {
        printf("\n %d is bigger than %d", a ,b);

    }
    else if(a<b)
    { 
    printf("\n %d is smaller than %d", a, b);
    }
    else
    {
        printf("\n a and b is equal");

    }

    return 0;
    
}

*/


/*
//switch break

#include<stdio.h>
int main()
{
  int day;

  printf("enter a day number");
  scanf("%d",&day);

  switch(day)
  {
  
  case 1: 

  printf("sunday");
  break;

  case 2:
  printf("monday");
  break;

  case 3:
  printf("teusday");
  break;

  case 4:

  printf("wednsday");
  break;

  case 5:
  printf("thursday");

  break;

  case 6:
  printf("friday");

break;

case 7:

printf("saturday");

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

int num;

printf("enter the number");
scanf("%d",&num);

switch( num % 2)
{
    case 0:
    printf("the number is even");
    break;

    case 1:
    printf("the number is odd");
    break;

    default:
    printf("invalid number");
    break;
}
return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter two numbers");
    scanf("%d %d",&a, &b);

    printf("\n1.add");
    printf("\n2.sub");
    printf("\n3.mult");
    printf("\n4.div");

    printf("\nenter the choice");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
    printf("\nthe addition is %d",a+b);
    break;

    case 2:
    printf("\n the  sub is %d", a-b);
    break;

    case 3:
    printf("\n the mult is %d",a*b);
    break;

   /*case 4:
    printf("\n the devide value is %d",a/b);
    break;
    

    default:
     printf("invalid value");
    break;
    }
    return 0;


}

*/

#include<stdio.h>
int main()
{
    int month;
    printf("enter the month number");
    scanf("%d", &month);

    switch(month)
    {
    case 1:
    printf("\n january 31 days");
    break;

    case 2:
    printf("\nfebruary is 28/29 days");
    break;

    case 3:
    printf("\nmarch is 32 days");
    break;

    default:
    printf("\n invalid number");

    }
    return 0;

}