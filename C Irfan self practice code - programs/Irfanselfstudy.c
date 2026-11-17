/* program for add substract

#include<stdio.h>

int main()
{
   float a = 3.2;
    float b = 2.5;
    printf("the somr value of a and b is %f",a+b);
    printf("\n the minus value of a and b is %f",a-b);
    printf("\nthe multiply value of a and b is %f",a*b);
    printf("\nthe devide value of a and b is %f",a/b);
*/

  /* program for +=,-=,*=,/=

  #include<stdio.h>
  int main()

    int a = 20;

     a -= 5;
    printf("\n%d",a);

     a -= 10;
    printf("\n%d",a);

     a*=2;
    printf("\n%d",a);

     a/=3;
    printf("\n%d",a);
    

    return 0;
}
*/

/* program for logi cates 0001,0010 
0	0000
1	0001
2	0010
3	0011
4	0100
5	0101
6	0110
7	0111
8	1000 */

#include<stdio.h>
 int main()
 {
 int a = 5;   /* 0101 */
 int b = 3;    /*0011*/
 printf("\n%d",a&b); /*1&1=1, 1&0=0, 0&1=0, 0&0=0*/
 printf("\n%d",a|b); /* 1|1=1, 1|0=1, 0|1=1, 0|0=0*/
 printf("\n%d",a^b); /* 1^1=0, 1^0=1, 0^1=1, 0^0=0*/
 printf("\n%d",a~b); /* 1^1=0, 1^0=1, 0^1=1, 0^0=0 */

 return 0;


 }

