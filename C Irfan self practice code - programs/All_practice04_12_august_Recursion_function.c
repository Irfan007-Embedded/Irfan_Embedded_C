
/*
#include<stdio.h>
void fun();
int main()

{
    printf("hello\n");

    fun();
    return 0;
}
void fun()
{
    printf("techno\n");

}


#include<stdio.h>
void fun();
void Irfan();
int main()
{
    printf("this this is recursion\n");
  fun();
  printf("\n");
  fun();
  printf("\n");
  Irfan();
    return 0;
}
void fun()
{
    printf("this is practice in function");
}
void Irfan()
{
    printf("This is practice\n");
}


//  No Return, No Argument

#include<stdio.h>
void massage();
int main()
{
    printf("hello thi is no return no arguments\n");

    massage();

    return 0;
}
void massage()  // No Return, No Argument
{
    printf("lets try\n");
}


#include<stdio.h>
void number();
int main()
{
    number();

    return 0;

}
void number() // No Return (void), No Argument number()
{
    int i;
    for(i=1; i<5; i++)
    {
        printf("%d\n",i);
    }
}


// No Return, With Argument

#include<stdio.h>
void sum(int a, int b);
int main()
{
    sum(50, 20);

    return 0;
}

void sum(int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d",sum);
}



#include<stdio.h>
void addition(int a, int b);
int main()
{
    int num1,num2;
    printf("enter tow numbers for sum\n");
    scanf("%d %d",&num1, &num2);
    
    addition(num1, num2);
    return 0;

}

void addition( int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d",sum);
}

// even odd

#include<stdio.h>
void evenodd(int num);

int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);

    evenodd(number);

    return 0;
}
void evenodd(int num)
{
    if(num % 2 ==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }

}


#include<stdio.h>
void tablepractice(int n); 
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);

    tablepractice(num);

    return 0;

}
void tablepractice(int n)
{
    int i;
    for(i=1;i<=7;i++)
    {
        printf("%d * %d = %\n",n,i,n*i);

    }
}


//With Return, No Argument

#include<stdio.h>
int addition();
int main()
{
    int result;

    result = addition();

    printf("the addition value is %d\n",result);

    addition();

    

    return  0;

}
int addition()
{
    int sum, a,b;
    printf("enter tow numbers\n");
    scanf("%d %d",&a,&b);

    sum = a + b;
    return sum;

}


#include<stdio.h>
int substraction();
int main()
{
    int result;
    result = substraction();

    printf("the sub value is %d", result);

    return 0;
}

int substraction()
{
    int sub,a,b;
    printf("enter the tow values\n");
    scanf("%d %d",&a, &b);

    sub = a - b;

    return sub;
}


#include<stdio.h>
int multiplication();
int main()
{
    int result;
    result = multiplication();

    printf("the mutiplication value is %d",result);

    return 0;


}
int multiplication()
{
    int mult,a,b;
    printf("enter the tow values\n");
    scanf("%d %d", &a, &b);

    mult = a*b;

    return mult;
}


#include<stdio.h>
int division();
int main()
{
    int result;
    result = division();

    printf("the division value is %d", result);
    return 0;

}

int division()
{
    int div,a,b;
    printf("enter the tow numbers\n");
    scanf("%d %d", &a, &b);
    div = a/b;

    return div;
}


// 4. With Return, With Arguments

#include<stdio.h>
int addition(int a, int b);

int main()
{
    int result,num1,num2;
    printf("enter the tow values\n");
    scanf("%d %d", &num1, &num2);

    result = addition(num1,num2);

    printf(" the addition is %d",result);

    return 0;

}

int addition(int a , int b)
{
    int sum;
  
    sum = a+b;

    return sum;
}
*/

#include<stdio.h>
int substraction(int a, int b);
int main()
{
    int result, num1, num2;

    printf("enter hte two values\n");
    scanf("%d %d", &num1,&num2);

    result = substraction(num1, num2);
    printf(" the sub value %d", result);

    return 0;
}

int substraction(int a, int b)
{
    int sub;
    sub = a - b;
    return sub;

}