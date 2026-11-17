
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
}

#include<stdio.h>
int main()
{
    int i = 1;

while(i<=7)
{
    printf("%d\n",i);
    i++;
}
    
return 0;
}

#include<stdio.h>
int main()
{
    int i = 5;

    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int i = 9;

    while(i>=1)
    {
        printf("%d",i);
        i--;
        printf("\n");
    }
  
    return 0;
}



#include<stdio.h>
int main()
{
    int i = 2;

    while(i<=10)
    {
        if(i%2 == 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int i= 2;

    while(i<=20)
    {
        if(i%2 !=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
*/
// sum
/*
#include<stdio.h>
int main()
{
    int i = 1;
    int sum = 0;

    while(i <=5)
    {
        printf("%d\n",i);
        sum = sum+i;

        i++;
    }
    return 0;
}
*/

// Do while
/*
#include<stdio.h>
int main()
{
    int i = 1;
    int sum = 0;

    do
    {
        printf("%d\n",i);
        i++;

    }
    while(i<=5);

    return 0;
}

#include<stdio.h>
int main()
{
    int i = 5;
   

    do
    {
        printf("%d\n",i);
        i--;

    } 
    while (i>=1);

    return 0;
    
}
*/
// Number program 

#include<stdio.h>
int main()
{
    int num;

    printf("enter the number\n");
    scanf("%d",&num);

    if(num %2 == 0)
    {
        printf("value is even\n");
    }

    else
    {
        printf("value is odd\n");

    }
    return 0;
}

