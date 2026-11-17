

/*
#include<stdio.h>
int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("value of a is: %d\n", a);
    printf("the value of &a is: %d\n",&a);
    printf("the value of p is %d\n", &a);
    printf("the value  is %d\n",*p);

    return 0;
}




#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;

    printf("before a is %d\n", a);

    printf("check p is %d\n", p);

    printf(" check *p is %d\n",*p);

   *p = 20;

    printf("now *p vaie is %d\n", *p);
    printf("now a is %d\n",a);

    return 0;
}


#include<stdio.h>
int main()
{
    int num = 10;
    int *ptr;
     ptr = &num;

    printf(" the value of num is %d\n",num);
    printf(" the value of address of num is %d\n", &num);
    printf(" the value of ptr is %d\n", ptr);
    printf("the value of &ptr is %d\n", &ptr);
    printf("the *ptr value is %d\n", *ptr);

    *ptr = 1000; // *ptr = num

    printf("after modify the value of *ptr is %d\n", *ptr);
    printf("after modify the value of *ptr is %d\n", num);
    


    return 0;
}

//  adding the pointer 

#include<stdio.h>
int main()
{
    int num1, num2, sum;
    
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("enter the two value");
    scanf("%d%d",&*ptr1,&*ptr2);

    sum = *ptr1 + *ptr2;

    printf("the addition value is %d\n", sum);

    return 0;
}


// swap the 2 numbers

#include<stdio.h>
int main()
{
    int num1, num2, temp;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("enter the two numbers\n");
    scanf("%d%d", &num1,&num2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("the value after aswapping is %d\n",*ptr1);
    printf("the value after aswapping is %d\n",*ptr2);

    return 0;
}




//Array in pointers

#include<stdio.h>
int main()
{
    int arr[5];
    int*ptr;
    int i;

    ptr = arr;
    printf("enter the 5 elements\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr =arr;

    for(i=0; i<5; i++)
    {
        printf("the value is %d\t",*ptr);
        ptr++;

    }
    return 0;
    

}


#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int ptr;

    

    printf("enter the size of array");
    for(i = 0; i<5; i++)
    {
        scanf("%d", arr[i]);
        i++;
    }


    if(ptr %2 == 0)
    for(i=0; i<5; i++)
    {
        printf("%d",ptr);
        i++;
    }
    else{
        printf("invalid");
    }
    return 0;
}
  



#include<stdio.h>
int main()
{
    int num = 80;
    int *ptr;

    ptr = &num;

    printf("%d\n", num);
     printf("%d\n", &num);
      printf("%d\n", ptr);
       printf("%d\n", *ptr);

    return 0;
}

 // change pointer value 

#include<stdio.h>
int main()
{
    int num = 20;
    int *ptr;

    ptr = &num;

    printf("before num is %d\n",num);
    printf("before pointer  %d\n",*ptr);

    *ptr = 100;

    printf("after pointer %d\n", *ptr);
    printf ("after nun is %d\n", num);
    

    return 0;
}


// swap pointers

#include<stdio.h>
int main()
{
    int num1,num2, temp;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("enter the tow values\n");
    scanf("%d %d", &num1,&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    

    printf("after wapping the value is\n");
    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);

    return 0;

}

//swapping program 2

#include<stdio.h>
int main()
{
    int num1,num2,temp;
    int *ptr1,*ptr2;

   ptr1= &num1; 
    ptr2 = &num2;

    printf("enter the tow values\n");
    scanf("%d %d", &num1,&num2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("after swapping %d\n", *ptr1);
    printf("after swapping %d\n", *ptr2);

    return 0;
}



#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int *ptr;

    printf("enter the 5 elements\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    ptr = arr;

    printf("the value of array is:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;

}


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