
/*
#include<stdio.h>
int main()
{
    int num = 10;
    int *ptr;   // pointer declaration

    ptr = &num;  // assign address of num

    printf("\n num value of num is %d", num);
    printf("\naddress vale of num is %u", &num);

    printf("\n value of pointer is %d", ptr);
    printf("\n address value of pointer is %u",&ptr);

    printf("\n dereferencing of pointer is %d", *ptr);
     
    *ptr = 1000;

    printf("\n modify the value of num is %d", num);

      *ptr = 0;

    printf("\n again modify the value of num is %d", num);
    return 0;

    

    // addition pointers

    #include<stdio.h>
    int main()
    {
        int num1, num2;
        int *ptr1 = &num1;
        int *ptr2 = &num2;

        printf("\n enter the tow values");
        scanf("%d %d", &num1, &num2);

        int sum = *ptr1 + *ptr2;

        printf("\n addition is %d",sum);
    
    return 0;
    }


#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr;
    int i;

    printf("\n enter the 5 elements");

    ptr = arr;

    for(i = 0; i<5; i++)
    {
        scanf("%d", ptr);
        ptr++;

    }

    printf("\n array element is:");


    for (i = 0; i<5; i++)
    {
        printf("%d\t", *(ptr++));
        ptr++;

    }
    return 0;

}



#include<stdio.h>
void main()
{
    clrscr()
    int x = 7, y;

    printf("\n Address of x = %u", &x);
    printf("\n Address of y = %u", &y);

    getch();

}



#include <stdio.h>

int main() {
    int x = 7, y;
    
    // Modern compilers mein output window automatically khuli rehti hai
    printf("\n Address of x = %p", (void*)&x); 
    printf("\n Address of y = %p", (void*)&y);
    
    return 0;
}
    
    



#include<stdio.h>
int main()
{
    int num = 10;
    int  *ptr = &num;

    printf("\n the value of num is %d",num);
    printf("\n the address  of num is %d", &num);
    printf("\n the value of pointer is %d",ptr);
    printf("\n the address of ptr is %d", &ptr);
    printf("\n the deaddress of pointer is %d",*ptr);

    return 0;
}



#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("\n %d", &ptr1);
    printf("\n %d", &ptr2);

    return 0;
}


/*
#include<stdio.h>
int main()
{
    int arr[] = {10,20,30,40,50};

    int *ptr = arr;

    printf("\n %d", ptr);
    ptr++;

    printf("\n %d", arr);
    ptr++;

    printf ("\n %d", *ptr);
    ptr++;

    printf ("\n %d", *ptr);
    ptr++;

    printf ("\n %d", *ptr);
    ptr++;

    printf ("\n %d", *ptr);
    ptr++;

     printf ("\n %d", *ptr);
    ptr++;

    return 0;
}



#include<stdio.h>
int main()
{
    int arr[] = { 10,20,30,40,50,60,70};
    int *ptr = arr;
    int i;

    for(i=0; i<4; i++)
    {
        printf("\n %d", *ptr);
        ptr++;
    }
    return 0;

}

*/

#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr = arr;
    int i;

    printf("\n enter the 5 elements");

    for(i = 1; i<5; i++)
{

    scanf("%d", ptr+1);
    

}

printf("\n the elements are");

for(i=0; i<5; i++)
{
    printf("\n %d ", *ptr+1);

}

return 0;

}