/*
#include<stdio.h>
int main()
{
    int a = 18;

    if (a>=15)
    {
    printf("eligible");
}


{
printf("no eligible");

}

return 0;

}
*/
/*
#include<stdio.h>
int main()
{

      int a = 18;

      if(a>=18)
      {
      printf("eligible for university");

      }

      else
      {
        printf("not eligibe for university");

      }
      return 0;

}
*/
/* #include<stdio.h>

int main()
{
    int a = 18;

    if(a <= 18)
    {
        printf("Enter Kids Playground");
    }
    else
    {
        printf("Not Enter in Playground");
    }

    return 0;
}
    */


    #include<stdio.h>
int main()
{
    int age;
    double salary;
    
    printf("Enter the age :-");
    scanf("%d",&age);
    
    printf("\n Enter the salary :-");
    scanf("%d",&salary);
    
    if(age>24)
    {
        if(salary<=300)
        {
            printf("\n Congratulations, you are eligible for loan");
        }
        else
        {
            printf("\n SOrry, you are not eligible for loan");
            printf("\n Reason: salary less than 30k");
        }
    }
    else
    {
            printf("\n SOrry, you are not eligible for loan");
            printf("\n Reason: Age is less than 24 years");
    }
    
}