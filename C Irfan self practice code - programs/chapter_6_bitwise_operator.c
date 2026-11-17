/* Decimal      Binary

0            0000  
1            0001  
2            0010  
3            0011  
4            0100  
5            0101
6            0110
7            0111

 Operator | Name               
 
 &       AND                
 `       OR 
 ^       XOR (Exclusive OR) 
 ~       NOT (Complement)   


  & AND                           
1 & 1 = 1                   

1 & 0 = 0         AND -  Dono 1 → 1 Baaki sab → 0     

0 & 1 = 0            

0 & 0 = 0           

   | OR

1 | 1 = 1

1 | 0 = 1     OR - Ek bhi 1 → 1

0 | 1 = 1

0 | 0 = 0


   ^ XOR
1 ^ 1 = 0

1 ^ 0 = 1

0 ^ 1 = 1

0 ^ 0 = 0

  ~ NOT

 0 → 1

 1 → 0
 */


 /*
 
 #include<stdio.h>
 int main()
 {
    int a = 20;
    int b = 30;
    printf(" AND = %d",a & b);
    return 0;
 }

*/


#include<stdio.h>
int main()
{
   int a = 5;
   int b = 3;
   printf("a = %d",a);
   printf("\nb = %d",b);
   printf("\n a & b = %d", a & b);
   /* a 5 = 0101
      b 3 = 0011
      
            0001 - ans
   
   */





/* OR */


   
   printf("\na =%d",a);
   printf("\nb = %d",b);
   printf("\n a | b = %d", a | b);

   

   printf("\na=%d",a);
   printf("\nb=%d",b);
   printf("\n a^b = %d", a^b);


// test program

  printf("\na=%d",a);
  printf("\nb=%d",b);
  printf("\n a & b = %d", a & b);


   printf("\na=%d",a);
   printf("\nb=%d",b);
   printf("\n a | b = %d", a | b);

   printf("\nAND = %d\n", a & b);
   printf("OR = %d\n", a|b);
   printf("XOR = %d\n", a^b);

   return 0;
}