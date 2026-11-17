/*
// output - 3 rows 5 column
#include<stdio.h>
int main()
{
    int r,c;

    for(r = 1; r<=3; r++) // row new line - 3 rows
    {       // 3<=5 
        for(c =1; c<=5; c++)  // 5 column
        {       //6<=5
            printf("*");

        }
        printf("\n");
    } 
    return 0;
}


#include<stdio.h>
int main()
{
    int r,c;

    for(r = 1; r<=2; r++)  //row 2 
    {
        for(c =1; c<=7; c++) //column 7
        {
        printf("%d",r);
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
    int r,c;

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
        printf("%d", r*c);
        }
        printf("\n");

    }
    return 0;
    
}


#include<stdio.h>
int main()
{
    int r,c,size;

    printf("enter the size ");
    scanf("%d",&size);

    for(r=1; r<=size; r++)
    {
        for(c=1; c<=size; c++)
        {
        printf("*");
        }
         printf("\n");
    }

    return 0;
    

}
*/
/* output -
  *
  **
  ***
  ****
  *****
 */
/*
#include<stdio.h>
int main()
{
    int r,c,size;

    printf("rnter the size of pattern (row)");
    scanf("%d",&size);

    for(r = 1; r<=size; r++)
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
/*  output - 

***
**
*

*/


#include<stdio.h>
int main()
{
    int r,c,size;

    printf("rnter the size of pattern (row)");
    scanf("%d",&size);

    for(r = 1; r<=size; r++)  //new line
    {
        for(c =size; c>=r; c--)  //star
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
