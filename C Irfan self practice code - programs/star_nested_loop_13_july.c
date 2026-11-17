
/*
/* print this result
****
****
****


#include<stdio.h>
int main()
{
    int r,c,size;

    printf("enter the size of rows and column");
    scanf("%d",&size);

    for(r = 1; r<=4; r++)
    {
        for(c = 1; c<=3; c++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}


*/
/*
// program depend on size

#include<stdio.h>
int main()
{
    int r,c,size;

    printf("enter the values ehich you want star");
    scanf("%d",&size);

    for(r = 1; r<=3; r++)
    {
        for(c = 1; c<=size; c++)
        {
            printf("*");

        }
        printf("\n");

    }
    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    int r,c,size;

    printf(" enter the size of rows");
    scanf("%d",&size);

    for(r = size; r>=1;r--)
    {
        for(c=1; c<=size-1; c++)
    
   
    /*
    Jaise-jaise r chhota hota jata hai (5, 4, 3, 2, 1), 
    waise-waise size - r ka jawaab bada hota jata hai 
    (0, 1, 2, 3, 4). 
    Bas isi wajah se har nayi line mein ek-ek space badhta chala jata hai.
     

        {
            printf("*");

        }
        printf("\n");
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int r,c,size;

    printf("enter the size");
    scanf("%d",&size);

    for( r = 1; r<=size; r++)
    {
        for(c = 1; c<=r; c++)

    {
    printf("*");
    }
    printf("\n");
}
return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int r,c,size;

    printf("enter the size");
    scanf("%d",&size);

    for(r = size; r>=1; r--)
    {
        for(c = 1; c<=r; c++)
    {
        printf("*");
    }
    printf("\n");

    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()  //output digit form eg- 1234567
{
    int r,c,size;

    printf("enter the value");
    scanf("%d",&size);

    for(r = 1; r <= size; r++)
    {
        for(c = 1; c <= r; c++)
        {
            printf("%d",c);
        }
        printf("\n");

    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int row, space, star;

    for (row = 1; row <= 5; row++)
    {
        // Print spaces
        for (space = 5; space > row; space--)
        {
            printf(" ");
        }

        // Print stars
        for (star = 1; star <= (2 * row - 1); star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
*/


/*
#include <stdio.h>

int main()
{
    int row, col;

    for (row = 1; row <= 6; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            if (row == 1 || row == 6 || col == 1 || col == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/


#include <stdio.h>

int main()
{
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 6; col++)
        {
            if (row == 5 || col == 1 || col == row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}