
/*

#include<stdio.h>

int main()
{
    int marks[5];
    int i;

    printf("Enter 5 marks:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("\nMarks are:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}


/*
#include<stdio.h>

int main()
{
    int marks[5];

    printf("Enter 5 marks:\n");

    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);

    printf("\nMarks are:\n");

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
        int marks[5] = {19,10,8,17,9};

        printf("\n enter the marks[0]");
        scanf("%d",&marks[0]);

        printf("\n the marks is %d", marks[0]);

        return 0;
    }
    */
   /*

    #include<stdio.h>
    int main()
    {
        int marks[5] = {19,10,8,17,9};

        printf("%d", marks[3]);

        return 0;
    }

    */

/*
    #include<stdio.h>
    int main()
    {
        int size;
       

        printf("\n enter the size of array");
        scanf("%d", &size);

         int data[size];

        printf("\nenter the %d element:", size);

        for(int i=0; i<size; i++)
        {
            scanf("%d",&data[i]);

        }

        printf("\narray element is:");

        for(int i=0; i<size; i++)
        {
            scanf("%d",&data[i]);

        }

        printf("\narray element is:");

    

     for(int i=0; i<size; i++)
        {
            printf("%d\t",data[i]);

        }

        return 0;
    }
    


#include <stdio.h>

int main()
{
    int size;

    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    int data[size]; // Variable Length Array (VLA)

    printf("\nEnter the %d elements:\n", size);
    // 1. Elements input lene ke liye loop
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("\nArray elements are:\n");
    // 2. Elements ko screen par print karne ke liye loop
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", data[i]);
    }

    return 0;
}

*/
/*

#include <stdio.h>

int main()
{
    int size;
    int data[100]; // Humne pehle se 100 size ka fix array bana diya
    int i;

    printf("\nEnter the size of array (Max 100): ");
    scanf_s("%d", &size); // Visual Studio mein scanf ki jagah scanf_s secure hota hai

    // Agar user 100 se bada size daal de to safety check
    if (size > 100 || size <= 0) {
        printf("Please enter a size between 1 and 100.\n");
        return 1;
    }

    printf("\nEnter the %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &data[i]);
    }

    printf("\nArray elements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", data[i]);
    }

    return 0;
}




#include<stdio.h>
int main()
{
    int marks[3] = {70,80,85,64};

    printf("%d", marks[1]);

    return 0;
}
    

#include<stdio.h>
int main()
{
    int marks[5] = {40,56,75,80,90};
    int i;

    printf("enter the array element\n");

    for(i=0; i<5; i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}
    

    #include<stdio.h>
    int main()
    {
        int marks[5];
        int i;

        printf(" enter the array elements\n");

        for(i=0; i<5; i++)
        {
            scanf("%d", &marks[i]);

        }

        printf("the array elements are\n");

        for(i=0; i<5; i++)
        {
            printf("%d\n", marks[i] );
        }

        return 0;
    }



#include<stdio.h>
int main()
{
    int arr[5];
    int i, sum=0;

printf("enter the 5 elements\n");

for(i=0; i<5; i++)
{
    scanf("%d", &arr[i]);
}

printf(" the sum values is\n");

for(i=0; i<5;i++)

{
    sum = sum + arr[i];

}
printf("%d", sum);

return 0;
}


// find the maximum value

#include<stdio.h>
int main()
{
    int arr[5];
    int i, max;

    printf("\n enter the 5 elements");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);

    }
    max = arr[0];

    for(i=1; i<5; i++)
    {
        if(arr[i]> max)
        {
           max = arr[i];

        }
         

    }
    printf("\n the maximum number is %d", max);
    return 0;

}

*/






#include<stdio.h>
int main()
{

int arr[5];
int i;

printf("\n enter the 5 elements");

for(i = 0; i<5; i++)
{
    scanf("%d",&arr[i]);

}
 
printf("\n even number are:");

for(i=0; i<5; i++)
{
    if(arr[i] % 2 == 0)
    {
        printf(" %d", arr[i]);   
    }

}
return 0;
}

