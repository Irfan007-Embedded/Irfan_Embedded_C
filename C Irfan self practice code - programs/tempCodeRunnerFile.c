#include<stdio.h>
int main()
{
    int arr[5];
    int i, *ptr;

    printf("ener the five values\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("the pointer value of array is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        *ptr++;

    }
    return 0;


}


//task - point se 3 value change

#include<stdio.h>
int main()
{
int num1,num2,num3;
int *ptr1,*ptr2,*ptr3;

printf("print the three values\n");

scanf("%d %d %d", &num1, &num2, &num3);

ptr1 = &num1;
ptr2 = &num2;
ptr3 = &num3;

printf("the pointer value is %d\n",*ptr1);
printf("%d\n",*ptr2);
printf("%d\n",*ptr3);

*ptr1 = 1000;
*ptr2 = 2000;
*ptr3 = 3000;

printf("%d\n",*ptr1);
printf("%d\n",*ptr2);
printf("%d\n",*ptr3);


return 0;
}


#include<stdio.h>
int main()
{
    int num1,num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("enter the tow valuse\n");
    scanf("%d %d", ptr1,ptr2);

    if(*ptr1 >*ptr2)
    {
        printf(" first is maximum value" );

    }
    else if(*ptr1<*ptr2)
    {
        printf("first is minimum value" );
    }

    else{
        printf("value are same");
    }
    return 0;
}


// sum in ptr and array



    
    #include<stdio.h>
    int main()
    {
        int arr[5], i, sum;
        int *ptr;

        printf("enter the array value\n");

        for(i=0; i<5; i++)
        {
            scanf("%d", &arr[i]);
        }

        ptr = arr;

        sum = 0;

        for(i=0; i<5; i++)
        {
            sum = sum + *ptr;
            ptr++;
        }

        printf("the sum value is %d\n", sum);
        return 0;
    }
    

    #include<stdio.h>
    int main()
    {
        int arr[5],i,multiply;
        int *ptr;

        printf("enter the array elements\n");

        for(i=0; i<5; i++)
        {
            scanf("%d", &arr[i]);
        }

        ptr = arr;

        multiply = 1;

        for(i = 0; i<5; i++)
        {
            multiply = multiply *  *ptr;
            ptr++;
        }

        printf("the sum value of given elements is %d", multiply);

        return 0;
    }



#include<stdio.h>
int main()
{
    int i,arr[5],max;
    int *ptr;

    printf("enter the array elements\n");

    for(i = 0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = *ptr;

    if(*ptr > max)
    {
        max = *ptr;
        ptr++;
    }
    else
    {
        printf("invalid number");
    }

    return 0;
}




#include<stdio.h>
int main()
{
    int arr[5], i, max;
    int *ptr;

    printf("enter the array elements\n");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);

    }

    ptr = arr;

    max = *ptr;


    for(i=0; i<5; i++)
    {
    if(*ptr> max)
    {
        max = *ptr;

    }
    ptr++;
}
printf("maximum number is %d", max);

return 0;
}
*/

//reverse output print

#include<stdio.h>
int main()
{
    int arr[5],i; 
    
    int *ptr;

    printf("enter the array element");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    ptr = arr;

    
    for(i=4; i>=0; i--)
    {
        printf("%d\n",*(ptr+i));
        
        


    }


    return 0;
}