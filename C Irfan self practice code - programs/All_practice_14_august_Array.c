/*
#include<stdio.h>
int main()
{
    
   int marks[] = {70,90,85,75,80};

   printf("%d\n",marks[0]);
   printf("%d\n",marks[1]);
   printf("%d\n",marks[2]);
   printf("%d\n",marks[3]);
   printf("%d\n",marks[4]);

   return 0;

}


#include<stdio.h>
int main()
{
int size;

int data[size];

printf("enter the size of array\n");
scanf("%d",&size);

printf("enter the %d data of element\n",size);



for(i=0; i<size; i++)
{
    scanf("%d",&data[i]);
}

printf("array element is:");
for(i=0;i<size; i++)
{
    printf("%d",data[i]);
}
return 0;
}

#include<stdio.h>
int main()
{
    int size;
    int i;
    int data[size];

    printf("enter the size of array\n");
    scanf("%d",&size);

    printf("enter the elements %d", size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("array element is\n");
    for(i=0;i<size;i++)
    {
        printf("%d",data[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int size;
    int i;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int data[size];

    printf("Enter %d elements:\n", size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("Array elements are:\n");

    for(i=0; i<size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int size;
    int i;

    printf("enter the size of array\n");
    scanf("%d",&size);

    int data[size];

    printf("enter the %d elements:\n",size);

    for(i=0; i<size; i++)
    {
    scanf("%d",&data[i]);
    }
    printf("array elements are\n");
    for(i=0; i<size; i++)
    {
        printf("%d", data[i]);
    }
    return 0;

}


#include<stdio.h>
int main()
{
    int i;
    int a[5];

    printf("print the array element\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("\nthe array if %d element is: %d",i,a[i]);
    }

    return 0;
}


    #include<stdio.h>
    int main()
    {
        int i; 
        int a[5];
        printf("enter the element\n");

        for(i=0;i<5; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=4; i>=0; i--)
        {
            printf("%d\n",a[i]);
        }
        return 0;

    }
    

#include<stdio.h>
int main()
{
    int i;
    int a[5];
    int sum = 0;

    printf("enter the elements\n");
    for(i=0;i<5; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    

    printf("%d\n",sum);

    return 0;


}


#include<stdio.h>
int main()
{
    int i;
    int a[5];
    int sum = 0;
   
    printf("enter hte 5 elements\n");
     
    for(i=0; i<5; i++)
    { 
        scanf("%d", &a[i]);
         
        sum = sum +a[i];
    }
    printf("%d", sum);
    return 0;
}


// maximum value

#include<stdio.h>
int main()
{
    int i;
    int a[5];
    int max;

    printf("enter the 5 elements\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];

    for(i=1; i<5; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
            
        }
        
    }
    printf("%d\n",max);
return 0;
}


#include<stdio.h>
int main()
{
    int i;
    int a[5];
    int max;

    printf("enter the 5 elements\n");

    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i=1; i<5; i++)
    {
        if(a[i]> max)
        {
           max = a[i];
        }
    }
    printf("%d",max);

    return 0;
}

// minumum value

#include<stdio.h>
int main()
{
    int i;
    int min;
    int a[5];

    printf("enter the 5 elements\n");

    for(i=1; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];

    for(i=1; i<5; i++)
    {
        if(a[i] <min)
        {
            min = a[i];
        }

    }
    printf("%d",min);
    return 0;
}


// odd even

#include<stdio.h>
int main()
{
    int i;
    int a[5];
    int odd = 0, even = 0;

    printf("enter the elements\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
         if(a[i] % 2 ==0)
         {
            even++;
         }
         else
         {
            odd++;
         }
    }
    printf("the %d is even number\n",even);
    printf("the %d is odd number",odd);

    return 0;
    
}

#include<stdio.h>
int main()
{
    int i; 
    int a[5];
    int even = 0;
    int odd = 0;

    printf("enter the five elements\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        if(a[i] %2 ==0)
        {
            even++;
                }
                else{
                    odd++;
                }
    }
    printf("entered number is even  %d\n", even);
    printf( "entered number is odd %d\n", odd);
    return 0;
}

// print eve odd seperate

#include<stdio.h>

int main()
{
    int i;
    int a[5];
    int even = 0;
    int odd = 0;

    printf("Enter the five elements:\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("The even numbers count is %d\n", even);
    printf("The odd numbers count is %d\n", odd);

    return 0;
}


// Sum of two arrays

#include<stdio.h>
int main()
{
    int i;
    int arr1[5], arr2[5];
    int sum_arr[5];

    printf("print the first array elements\n");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the secont array element\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<5; i++)
    {
        sum_arr[i] = arr1[i] + arr2[i];

        printf("the array sum of %d is :  %d\n", i,sum_arr[i]);

}
return 0;
}



#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],i,sum[5];

    printf("enter the first array element\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the second array element\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(i=0; i<5; i++)
    {

    sum[i] = arr1[i] + arr2[i];
    printf("the sum %d is: %d\n", i, sum[i]);

}
return 0;
}
*/

    // munu s program
#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],i,minus[5];

    printf("enter the first array element\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the second array element\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("difference between array is\n");
    for(i=0; i<5; i++)
    {
        minus[i] = arr1[i]- arr2[i];

        printf("the minus value of %d is: %d\n", i, minus[i]);
    }
    return 0;
    
}