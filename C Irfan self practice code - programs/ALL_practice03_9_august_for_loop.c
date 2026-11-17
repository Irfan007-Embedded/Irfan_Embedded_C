
/*
#include<stdio.h>
int main()
{
    int i;
    printf("enter the output\n");

    for(i =1; i<=5;i++)
    {
        printf(" %d\n",i);


    }
    return 0;
}


#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=10; i++)
    {
        printf("%d\n",i);

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    for(i = 10; i>=1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    for(i = 2; i<=10; i+=2 )
    printf("%d\n",i);

    return 0;

}


// sum value

#include<stdio.h>
int main()
{
    int i;
    int sum;

    for(i = 1; i<=10; i++)
    {
        printf("%d\n",i);

        sum = sum+i;

        return 0;

    }
}


#include<stdio.h>
int main()
{
    int n,i,sum = 0;

    printf("enter any number\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d\n",i);

        sum = sum+i;
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int i,n;

    printf("enter any number\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
     

       printf("%d*%d = %d\n", i,n,i*n);
    }
    return 0;
}
*/
// even ka sum
/*
#include<stdio.h>
int main()
{
    int n,i,sum = 0;

    printf("enter any number\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if (i%2 == 0)

        {
           
           sum = sum +i; 
        }
        
    }
    printf("1 se %d tak ke even numbers ka sum %d\n",n,sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,sum = 0;

    printf("print any value\n");
    scanf("%d",&n);

    for( i = 1; i<=n; i++)
    {
        if(i %2 != 0)
        {
            printf("%d\n",i);

            sum  = sum +i;
        }
    }

    printf("1 se %d tak ka odd number %d\n", n,sum);
    return 0;
}
*/
/*
//Nested loop star

#include<stdio.h>
int main()
{
    int i,j;

    printf("enter the size\n");

    for(i = 1; i<=3; i++)
    {
        for(j = 1; j<=3; j++)
        {
            printf("*");

        }
        printf("\n");

    }
    return 0;
}


#include<stdio.h>
int main()
{
    int i, j;

    for(i=1; i<=5; i++)
    {
        for(j= 1; j<=i; j++)

        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
    return 0;
}


