/*
// printf

#include<stdio.h>
int main()
{
    printf("Bismillahirrahmanirrahim My name is Irfan");

    return 0;
}


// scanf

#include<stdio.h>
int main()
{
    int a;
    float b;
    
    printf("\n enter the first number");
    scanf("%d",&a);

    printf("\nenter the second number");
    scanf("%f",&b);

    float mult = a*b;

    printf("\n the multiplication of a & b is %.2f",mult);

    return 0;


}

*/
/*
#include<stdio.h>
int main()
{
    float a,b, add;
   

    printf("enter the first value");
    scanf("%f",&a);

    printf("enter the second value");
    scanf("%f",&b);

    add= a+b;

    printf("\n the addtition value is %.2f", add);

    return 0;
}

*/
/*
// int variable

#include<stdio.h>
int main()
{
    char name[50];
    int age;
    float percentage;

    printf("enter the name");
    scanf("%s",name);

    printf("\n enter your age");
    scanf("%d",&age);

    printf("\n enter your percentage");
    scanf("%f",&percentage);

    printf("\n your name is : %s", name);
    printf("\n your age is %d",age);
    printf("\n your percentage is %.2f", percentage);

    return 0;

}



#include<stdio.h>
int main()
{
    int a, b;
    



    printf("enter the two numbers");
    scanf("%d%d",&a,&b);

    printf("The addition is %d",a+b);
    printf("\n the substraction is %d",a-b);
    printf("\n the multiplication is %d", a*b);

    float result = (float)a/b;


    printf("\n the division is %.2f",result);
    

    return 0;
}
*/

//Assignment operator
/*
#include<stdio.h>
int main()
{
    int marks = 50;

    marks += 20;

    printf("the total marks is %d", marks);

    return 0;

    

}



#include<stdio.h>
int main()
{
    int marks = 80;

    marks -= 30;

    printf("the substraction is %d",marks);

    return 0;

}
    


#include<stdio.h>
int main()
{
    int marks = 65;
    marks *= 20;

    printf("the multiplication is %d", marks);

    return 0;
}
    

#include<stdio.h>
int main()
{
    int marks = 40;
    marks /=  5;

    printf("the devide value is %d", marks);

    return 0;

}
*/
/*
    #include<stdio.h>
    int main()
    {
        int marks = 30;
        marks %= 4;

        printf("the ratio is %d",marks);

        return 0;
    }
    

    // Relational operator

    #include<stdio.h>
    int main()
    {
        int a = 10;
        int b = 20;

        printf("the value is %d", a>b);

        return 0;
    }

    

    #include<stdio.h>
    int main()
    {
        int a = 10;
        int b = 20;

        printf(" the value is %d", a<b);

        return 0;
    }
    */
/*
    #include<stdio.h>
    int main()
    {
        int a = 20;
        int b = 10;

        printf("the value is %d", a == b);

        return 0;
    }
    

    #include<stdio.h.>
    int main()
    {
        int a = 20;
        int b = 30;

        printf("the value is %d", a!=b);

        return 0;
    }
    

    #include<stdio.h>
    int main()
    {
        int a = 20;
        int b = 40;

        printf("the value is %d",a >= b);

        return 0;


    }

    

    #include<stdio.h>
    int main()
    {
        int a = 20;
        int b = 80;

        printf(" the value is %d", a<=b);

        return 0;
    }
    

    #include<stdio.h>
    int main()
    {
        int a = 20;
        int b = 20;

        printf("\n %d", a>b); //0
        printf("\n %d", a<b);   // 0
        printf("\n %d", a==b);  //1
        printf("\n %d", a!=b);  //0
        printf("\n %d", a>=b); //0
        printf("\n %d",a<=b);  //0

        return 0;
    }


#include<stdio.h>
int main()
{
    int a = 20;
    int b = 30;

    printf("\n %d", (a>b) && (a<b));
    printf("\n %d", (a>b) || (a<b));
    printf("\n %d", !(a>b));
    printf("\n %d", !(a<b));

    return 0;
}
*/

/*
//Implicit - Explicit 

#include<stdio.h>
int main()
{
    int a = 30;
    float b = 15;

    printf("%.2f", a/b);

    return 0;



}



#include<stdio.h>
int main()
{
    int a = 45;
    int b = 5;

    float result = a/b;

    printf("%.2f", result);

    return 0;
}
    

    #include<stdio.h>
    int main()
    {
        int a;

        printf("\n enter your age");
        scanf("%d",&a);

        if(a>=18)
        {
            printf("\n you are eligible for vote");

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
            printf("\n you are eligible for vote");

        }
        else
        {
            printf("\n you are not eligible for vote");

        }
        return 0;
    }
    

    #include<stdio.h>
    int main()
    {
        int marks;

        printf("\n enter your marks");
        scanf("%d", &marks);

        if(marks>=75)
        {
            printf("\n you are in distinction");

        }
        else if(marks>= 40)
        {
            printf("\n you are pass");

        }
        else
        {
            printf("\n you are fail");

        }
        return 0;
    }
        */
/*
    #include<stdio.h>
    int main()
    {
        int num;

        printf("\n enter the number");
        scanf("%d", &num);

    if(num>0)
    {
        printf("\n number is positive");

    }
    else if(num<0)
    {
        printf("\n number is negative");

    }
    else
    {
        printf("\n invalid input");

    }
    return 0;

    }

    

    #include<stdio.h>
    int main()
    {
        int a,b;

        printf("\n enter the tow numbers");
        scanf("%d%d",&a, &b);

        if(a>b)
        {
            printf("\n good");

        }
        else if(a<b)
        {
            printf("\n thats ok");

        }
        else
        {
            printf("\n try again!!");

        }
        return 0;
    }
    */

/*
#include<stdio.h>
int main()
{
    char grade;

    printf("enter your grade");
    scanf("%c",&grade);


    if(grade =='A' || grade =='a')
    {
        printf("excellent");

    }
    else if(grade =='B' || grade =='b')
    {
        printf("good");
    }
    else
    {
        printf("average");
    }
    return 0;
}
*/

