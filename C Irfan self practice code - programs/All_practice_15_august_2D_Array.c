
/*
#include<stdio.h>
int main()
{
    int i,j;
    int a[2] [3];

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i] [j]);
        }
    }

    printf("The array elements is\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i] [j]);
        }
         printf("\n");
    }
   


    return 0;
}


#include<stdio.h>
int main()
{
    int i,j;
    int a[3] [3];

    printf("enter the array elements\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3;j++)
        {
            scanf("%d", &a[i] [j]);
        }
    }
    printf("the array element is\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }
    return 0;
}



// Sum of two arrays:

#include<stdio.h>
int main()
{
    int i,j, sum = 0;
    int arr[3] [3];

    printf("enter the array elements\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr[i] [j]);
        }
    }
    printf("the array element is\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            

            printf("%d ", arr[i] [j]);

            sum = sum + arr[i] [j];
        }
        printf("\n");
        printf("%d ", sum);
    }
    return 0;

}


// minus

#include<stdio.h>
int main()
{
    int i,j, a[2] [3];
    int minus = 0;

    printf("enter the array elements\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i] [j]);

        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            minus = minus - a[i] [j];
            
        }
        printf("\n");
       
    }
     printf("%d ", minus);
    return 0;
}



*/

#include<stdio.h>
int main()
{
    int i,j;
    int sum [2][2];
    int arr1[2][2];
    int arr2[2][2];

    printf("enter the first  array elements\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n enter the second array elements");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
           
    }
    printf("the addition of array is :\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum [i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }



    return 0;
}

