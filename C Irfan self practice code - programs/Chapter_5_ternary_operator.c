// condition ? value_if_true : value_if_false;
// Condition ? Yes → Pehla part    No → Dusra part

//(condition) ? pehla : dusra;
//Agar condition TRUE ho → pehla
//Agar condition FALSE ho → dusra 

/*
#include<stdio.h>

int main()
{
    int a = 10;
    int b = 30;

    int result = (a > b) ? a : b; //Condition ? TRUE :FALSE

    printf("%d",result);

    return 0; 

}*/

/* Condition      ?  True part : False part

   (a < b)        ?      a      :      b
 */

/*
#include<stdio.h>

int main()
{
    int a = 70;
    int b = 90;

    int result = (a < b) ? a:b;
    printf("%d",result);

    return 0;

}
    */
/*
#include<stdio.h>

int main()
{
    int x = 25;
    int y = 10;
    int result = (x>y) ? x : y;
    printf("%d",result);
    return 0;

}
    */

#include<stdio.h>
int main()
{
    int s = 50;
    int q = 80;
    int result = (s>q) ? s:q;
    printf("%d",result);
    return 0;
    
}