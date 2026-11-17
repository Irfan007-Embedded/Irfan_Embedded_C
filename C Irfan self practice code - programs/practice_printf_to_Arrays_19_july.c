// printf program

/*
#include<stdio.h>
int main()
{
    printf("hello wold");
    return 0;

}
*/

// scanf
/*
#include<stdio.h>
int main()
{   
    int age;
    float percentage;
    char city[50];
    printf("\n enter the age");
    scanf("%d",&age);

    printf("\n enter your percentage");
    scanf("%f", &percentage);

    printf("\n enter your city name");;
    scanf("%s",city);

    printf("\n your age is %d", age);
    printf("\n your percentage is %f", percentage);
    printf("\n your city is %s", city);

    return 0;


}

*/
//operator program

/*
#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
  
    printf("\n addition is %d", a+b);
    printf("\nsub is %d", a-b);
    printf("\n mult is %d", a*b);
    printf("\ndevide is %d",a/b);
    printf("\n module id %d",a % b);
    
    return 0;
}
    */

    //implicit - explicit 
/*
    #include<stdio.h>
    int main()
    {
        int x = 10;
        float y = 40.7;

        float result = x*y;

        printf("\nthe value is %.3f", result);

        return 0;
        }
*/
/*
#include<stdio.h>
int main()
{
    char ch = 'R';
    int ascii_value = ch;

    printf("\ncharacter: %c",ch);
    printf("\n implicit value is %d",ascii_value);

    return 0;
}
*/
/*

#include<stdio.h>
int main()
{
    char ch = 'D';
    int ascii_value = ch;

    printf("\n %c",ch);
    printf("\nascii value of is %d :", ascii_value);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int   total_marks = 460;
    int  total_subject = 6;

    float average = total_marks/ total_subject;

    printf("\n marks is %.3f",average);

    return 0;
}
*/

//if -else

/*
#include<stdio.h>
int main()
{
    int marks;

    printf("\n enter the marks");
    scanf("%d",&marks);

    if(marks >=90)
    {
        printf("\n congrats you are pass");

    }

    else if(marks>=75)
    {
        printf("\ncongrats, you are in distinction");
    }
    else
    {
        printf("\n you are failed");

    }
    
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int a;

    printf("\n enter the value");
    scanf("%d",&a);

    if (a % 2 ==0)
    {
        printf("\nthe value is even");

    }
    else
    {
        printf("\n the value is odd");

    }

        return 0;
    }
    */
/*
    #include<stdio.h>
    int main()
    {
        int age;

        printf("\n enter your age");
        scanf("%d",&age);

        if(age>=18)

    {
        printf("\n you are eligible for driving liascense");

    }
     else if(age>16)
    {
        printf("\n you can apply, but  inshaAllah after tow years you will get liascense");
    }
    else
    {
        printf("\n you are not eligible for driving liascense");

    }
    return 0;
    }

    */
/*
    #include<stdio.h>
    int main()
    {
        int num1, num2;
        int choice;

        printf("\n enter the tow values");
        scanf("%d%d", &num1,&num2);

        printf("\n enter any number");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\n addition is %d", num1+num2);
        }
        else if(choice ==2)
        {
            printf("\n substraction is %d",num1-num2);
        }
        else
        {
            printf("\ninvalid choice");
        }
        return 0;
    }
    */

//switch

/*
#include<stdio.h>
int main()
{
    int choice;

    printf("1.add\n 2.sub\n");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
    printf("\n addition");
    break;
    

    case 2:
    
    printf("\n  substraction");
    break;
    
    
    default:

    printf("\n invalid number");
    break;
    }
    return 0;


}
*/
/*
#include<stdio.h>
int main()
{
    int num1,num2,choice;

    printf("\n enter the choice");
    scanf("%d", &choice);

    printf("enter the number");
    scanf("%d%d",&num1,&num2);


    switch(choice)
    {
        case 1:
        printf("\n addition is %d", num1 + num2);
        break;

        case 2:
        printf("\n substractuin is %d", num1 - num2);
        break;

        default:
        printf("\n invalid number");
        break;

    }

    return 0;
    }
    
#include<stdio.h>
int main()
{
    int num1,num2,choice;

    printf("1.add\n 2.sub\n");
    printf("\n enter your choice");
    scanf("%d", &choice);

    printf("\enter tow numbers");
    scanf("%d%d", &num1, &num2);

    switch(choice)
    {
        case 1:
        printf("\n the addition is %d",num1+num2);
        break;

        case 2:
        printf("\n substraction is %d", num1-num2);
        break;

        default:
        printf("\n invalid number");

    }

    return 0;
}

#include<stdio.h>
int main()
{
    int day;
    printf("enter the day 1-7\n");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        printf("\n friday");
        break;

        case 2:
        printf("\n saturday");
        break;

        case 3:
        printf("\n sunday");
        break;

        case 4:
        printf("\n monday");
        break;

        case 5:
        printf("\n teusday");
        break;

        case 6:
        printf("\n wednsday");
        break;

        case 7:
        printf("\n thursday");

        default:
        printf("\n invalid number");
        break;

  

    }

    return 0;
}


#include<stdio.h>
int main()
{
    char ch;

    printf(" enter the character\n");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        
        printf("%c is vowel\n",ch);
        break;

        default:
        printf("\n % c is  the number is cosent", ch);
        break;

    }
    return 0;
}


// LOOP WHILE, DO WHILE

#include<stdio.h>
int main()
{
    int num, i;

    printf("\n enter the number to print its table");
    scanf("%d",&num);

    printf(" \n   table of %d is   \n", num);
    
    for(i = 1; i<=5; i++)
    {
        printf("%d*%d = %d\n",num,i,num*i);

    }
    return 0;
}


#include<stdio.h>
int main()
{
    int num,i;
    printf("\n enter the number for reverse");
    scanf("%d",&num);

    printf("\n the reverse value s as follows");

    for(i=10; i>=1; i--)
    {
        printf("%d*%d=%d\n",i,num,i*num);

    }
   

    return 0;
}


    #include<stdio.h>
    int main()
    {
        int i,n, sum = 0;

        printf("\n enter the value of n");
        scanf("%d", &n);

        for(i = 1; i<=n; i++)
        {
            
            sum = sum+i;
        }
        printf("\n 1 se %d ka sum = %d\n",n,sum);

        return 0;


    }
 

    #include<stdio.h>
    int main()
    {
        int n,i, sum = 0;
        printf("\n enter the value of n");
        scanf("%d",&n);

        for(i = 1; i<=n; i++)
       
        sum = sum + i;

        if ( sum == 0)
         {
            printf("\n %d",n);

        }
        else
        {
            printf("\n invalid");
        }
        return 0;
    }

    
/*
    #include<stdio.h>
    int main()
    {
        int i,n;
        printf("\n enter the calue of n");
        scanf("%d",&n);

        for(i = n; i>=1; i--)
        {
        printf("\n the reverse value of n is %d",i);
        }
        return 0;


    }

    #include<stdio.h>
    int main()
    {
        printf("\n enter the value of n")
    }
        */