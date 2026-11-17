#include<stdio.h>

int main()

{
int num1 = 8, num2 = 10;
int and, or, exor,comp1, comp2, left_shift, right_shift;

and = num1 & num2;
or = num1 | num2;
exor = num1 ^ num2;
comp1 = ~num1; 
comp2 = ~num2;

left_shift = num2<<2;
right_shift = num1>>3;

printf("anding of 2 num is : %d", and);
printf("\nOring of 2 num is: %d" , or)
printf("\nEx-oring of 2 num is : %d", exor);
printf("\nComplement of num1 is :%d" , comp1);
printf("\nComplement of num2 is : %d", comp2);
printf("\nNum2 is Lefts_hift by 2 : %d", left_shift");
printf("\nNum1 is Right_shift by 3 : %d" , right_shift");

return 0;

}
